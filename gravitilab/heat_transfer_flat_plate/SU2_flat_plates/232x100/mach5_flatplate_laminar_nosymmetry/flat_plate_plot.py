import numpy as np
from matplotlib import pyplot as plt
import math 
import matplotlib.cm as cm # latex module
from plots import readfile
from plots import plotoverx
from plots import contours
from plots import grid
from plots import boundary
import os

# plt.style.use('classic')

try:
    os.mkdir("./figures/")
except:
    print("A figures directory is already created")

# read the file and extract varaibles
extract = readfile()
x,y,rho,E,P,T,cp,mu,u,v,xg,yg,Csfx =extract.variables("./restart_flow.csv")

#any plots over x
pltoverx = plotoverx()
pltoverx.varOverX(x,y,u,'Velocity')
pltoverx.boundarythick(u,y,x,xg,yg)

#contour plots
conts = contours()
conts.varcontours(x,y,T,P,u,xg,yg)
conts.boundarycontours(x,y,T,P,u,xg,yg)

#boundary plots
bound = boundary()
bound.boundarymult(x,y,yg,xg,u)
bound.boundary(x,y,yg,xg,u)
bound.skinFrict(x,y,u,rho,mu)
bound.blasius(x,y,u,mu,yg)
bound.heat_flux(x, y, T, 0.26)

#grid
grid = grid()
grid.meshplot(x,y)
