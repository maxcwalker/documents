import numpy
import numpy as np
from mpl_toolkits.axes_grid1 import make_axes_locatable
import matplotlib.pyplot as plt
import h5py
import os.path
import matplotlib.cm as cm
import os

def read_file(fname):
        f = h5py.File(fname, 'r')
        group = f["opensbliblock00"]
        return f, group

def read_dataset(group, dataset):
    d_m = group["%s" % (dataset)].attrs['d_m']
    size = group["%s" % (dataset)].shape
    read_start = [abs(d) for d in d_m]
    read_end = [s-abs(d) for d, s in zip(d_m, size)]
    if len(read_end) == 2:
        read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1]]
    elif len(read_end) == 3:
        read_data = group["%s" % (dataset)][read_start[0]:read_end[0], read_start[1]:read_end[1], read_start[2]:read_end[2]]
    else:
        raise NotImplementedError("")
    return read_data

def extract_coordinates():
    f, group1 = read_file(fname)
    x = read_dataset(group1, "x0_B0")
    y = read_dataset(group1, "x1_B0")
    dx, dy = x[0, 1], y[1, 0]
    print("Grid size (x,y)  is: (%f, %f)" % (x.shape[1], x.shape[0]))
    print("First grid point dx: %f, dy: %f" % (dx, dy))
    dx, dy = x[0, -1]-x[0, -2], y[-1, 0]-y[-2, 0]
    print("Last grid point dx: %f, dy: %f" % (dx, dy))
    return x, y, group1

def extract_flow_variables(group):
    rho = read_dataset(group, "rho_B0")
    rhou = read_dataset(group, "rhou0_B0")
    rhov = read_dataset(group, "rhou1_B0")
    rhoE = read_dataset(group, "rhoE_B0")
    u = rhou/rho
    v = rhov/rho
    Minf = 5.0
    p = (0.4)*(rhoE - 0.5*(u**2+v**2)*rho)
    a = numpy.sqrt(1.4*p/rho)
    M = numpy.sqrt(u**2 + v**2)/a
    T = 1.4*(Minf**2)*p/rho
    mu = compute_viscosity(T)
    return rho, u, v, rhoE, p, T, M, mu

def compute_viscosity(T):
    Minf = 2.0
    Re = 950
    RefT = 288.0
    SuthT = 110.4
    mu = (T**(1.5)*(1.0+SuthT/RefT)/(T+SuthT/RefT))
    return mu



fname = "opensbli_output.h5"

x, y, group1 = extract_coordinates()
rho, u, v, rhoE, p, T, M, mu = extract_flow_variables(group1)

print('rho')
print(rho)
print('------------------------')
print('T')
print(T)
print('------------------------')