import numpy as np

def f(x):
    return x**2 - 2

def grad(x):
    return 2 * x

def gd(eta, x0):
    x = x0    
    for i in range(100):
        x = x - eta * grad(x)     
        if abs(grad(x)) <= 0.000001:
            break
    return x, f(x)

eta = 0.1
x0 = 5.0 

min_x, min_f = gd(eta, x0,)
print(f'Giá trị cực tiểu x = {min_x}, giá trị hàm số f(x) tại đó là f(x) = {min_f}')
