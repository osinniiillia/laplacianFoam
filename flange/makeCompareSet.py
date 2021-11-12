#!/bin/python

import numpy as np

alpha = -5
L = 3.0
TL = -4
TR = 3
gamma = 2

a = alpha*L*L/(2*gamma)
b = TR - TL - a
c = TL

x = np.linspace(0, 1, 10)
y = a*np.power(x, 2) + b*np.power(x, 1) + c*np.power(x, 0)

with open("toCompare/data.txt", "w") as f:
    for i in range(len(x)):
        line = str(x[i]) + "   " + str(y[i]) + "\n";
        f.write(line)
