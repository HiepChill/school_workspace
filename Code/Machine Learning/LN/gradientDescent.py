# import numpy as np

# def grad(x):
#     return 2 * x + 5 * np.cos(x)

# def cost(x):
#     return x**2 + 5 * np.sin(x)

# def myGD1 (x0 , eta):
#     x = [x0]
#     for it in range(100):
#         x_new = x[-1] - eta * grad(x[-1])
#         if abs(grad(x_new)) < np.e - 3:
#             break
#         x.append(x_new)
#     return (x , it)

# (x1 , it1) = myGD1(-5 , 0.1)
# (x2 , it2) = myGD1(5 , 0.1)
# print ('Solution x1 = %f, cost = %f, after %d iterations' %(x1[-1] , cost(x1[-1]) , it1))
# print ('Solution x2 = %f, cost = %f, after %d iterations' %(x2[-1] , cost(x2[-1]) , it2))

import numpy as np

def fpx(x):
    return x*2 + 5* np.cos(x)

def fx(x):
    return x**2 + 5*np.sin(x)

def GD(x0, eta):
    x = x0
    count = 0
    # for it in range(100):
    #   x_new = x[-1] - eta*fpx(x[-1])
    #   if abs(fpx(x_new))< 1e-3:
    #     break
    #   x.append(x_new)
    # return (x, it)
    while abs(fpx(x)) >= 1e-3:
        x = x - eta*fpx(x)
        count = count + 1
    return (x, count-1)

(x1, it1) = GD(-5,.1)

print((x1, it1))