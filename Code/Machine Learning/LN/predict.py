import numpy as np;

x = np.array([[60 , 2 , 10] , [40 , 2 , 5] , [100 , 3 , 7]]).T;
y = np.array([10 , 12 , 20]).T;

w = np.linalg.pinv(x @ x.T) @ x @ y;

x_pr = np.array([50 , 2 , 8]).T

print(x_pr.T @ w)