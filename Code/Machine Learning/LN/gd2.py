import numpy as np

def g(x):
    return (1 / 3) * x**3 - x 

def grad(x):
    return x**2 - 1

def gd(eta, x0):
    x = x0    
    for i in range(100):
        x = x - eta * grad(x)     
        if abs(grad(x)) <= 0.000001:
            break
    return x, g(x)

eta = 0.1
x0 = 5.0 

min_x, min_f = gd(eta, x0,)
print(f'Giá trị cực tiểu x = {min_x}, giá trị hàm số f(x) tại đó là f(x) = {min_f}')
