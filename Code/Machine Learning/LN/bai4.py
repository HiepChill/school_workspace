import numpy as np;

# def f(x):
#     return x**2 + 5 * np.sin(x);

# def df(x):
#     return 2 * x + 5 * np.cos(x);

# def NXX(z):
#     x = 0.0;
#     for i in range(z):
#         y = f(x) / df(x);
#         x = x - y;
#     return x;

# z = 100;
# x = NXX(100);

# print("Nghiệm xấp xỉ của f'(x) = " , x);

import sympy as sp;
from scipy.optimize import fsolve;

x = sp.Symbol('x');

f = x ** 2 + 5 * sp.sin(x);

df = sp.diff(f, x);

df_func = sp.lambdify(x, df);

nxx = fsolve(df_func , x0 = 0);

print("Nghiệm xấp xỉ của f'(x) = 0 là:", nxx);
