import numpy as np

X_train = np.array([
    [60, 2, 10],
    [40, 2, 5],
    [100, 3, 7]
])

one = np.ones((X_train.shape[0], 1))
X_train = np.concatenate((one, X_train), axis=1)
X_train = X_train.T

Y_train = np.array([
    10, 12, 20
]).T

X_test = np.array([
    [50, 2, 8]
])

one = np.ones((X_test.shape[0], 1))
X_test = np.concatenate((one, X_test), axis=1)
X_test = X_test.T
w = np.linalg.pinv(X_train@X_train.T)@X_train@Y_train

Y_test_hat = X_test.T@w
print('w = ', w)
print('Mau moi: ', Y_test_hat)