import numpy as np
from matplotlib import pyplot as plt
import matplotlib.cm as cm

## post shock conditions for M_inf=6 and h=20km with wedge angle of 7.5 degrees

#hc = 0.5 # convective heat transfer coefficient

M_inf = 5 #Mach number

rho_e = 0.14516 # density
M_e = 5.0; P_e = 4380 #Pa
T_e= 297.94 #kelvin
T_w = 600
gamma = 1.4 # not quite variable
R = 287 # J/Kg K
cp = R*(gamma/(gamma-1)) # specific heat at constant pressure for calorically perfect gas
a = np.sqrt(gamma*R*T_e) # speed of sound
u = M_e*a

T_aw = T_e*(1+0.2*M_e**2) # adiabatic wall temperature - equation from textbooks
print(T_aw)
x = np.linspace(0.01,1,100)

Re = 7000*x # turbulent reynodls number for flow over a flat plate

Pr=0.71 # What i've always used
omega = 0.76 # taken from paper for a turbulent bl

# Reynolds analogy for a turbulent boundary layer

# if Re < 2000:
#     T_cal = 1+0.032*M_e**2 + 0.58(T_aw/T_e - 1) # this is T'/T_inf
# else:
T_cal = 1+0.035*M_e**2 + 0.45*(T_aw/T_w - 1) # this is T'/T_inf


c_f = 0.0592 / (np.sqrt(Re)*T_cal**((1-omega)/2))


St = c_f / (2*Pr**(2/3))


q_c = St*rho_e*u*cp*(T_aw-T_w)


fig, ax = plt.subplots(figsize=(10,6))
ax.plot(x,q_c,'k')
ax.set_xlabel('running length of boundary layer [m]')
ax.set_ylabel('Wall heat flux [$W/m^2$]')
ax.set_xlim([0,1])
ax.set_ylim(0)
ax.grid()
fig.savefig("Heat_flux_along_wall.pdf")

plt.show()