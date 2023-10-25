import numpy as np

Re = 950
refT = 288
S = 110.4
Tw = 1.68
rho = 1 / Tw

mu = Tw**1.5*(1 + (S/refT))/(Tw + S/refT)
dis_thick = Re*mu / rho
print(dis_thick)