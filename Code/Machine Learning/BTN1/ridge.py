import pandas as pd
from sklearn.metrics import r2_score
from sklearn.linear_model import Ridge
from sklearn.model_selection import train_test_split
import numpy as np

data = pd.read_csv('winequality-red.csv')
dt_Train, dt_Test = train_test_split(data, test_size=0.3, shuffle=False)

X_train = dt_Train.iloc[:, :11]
Y_train = dt_Train.iloc[:, 11]
X_test = dt_Train.iloc[:, :11]
Y_test = dt_Train.iloc[:, 11]

alpha = 0.1
ridge_reg = Ridge(alpha=alpha).fit(X_train, Y_train)

ridge_reg.score(X_test, Y_test)
y_pred = ridge_reg.predict(X_test)
y = np.array(Y_test)
print("Coefficient of determination (R^2): %.2f" % r2_score(Y_test, y_pred)) #0.37
print("Thuc te           Du doan           Chenh lech")
for i in range(0, 20):
    print("%.2f" % y[i], "  ", y_pred[i], "  ", abs(y[i] - y_pred[i]))
