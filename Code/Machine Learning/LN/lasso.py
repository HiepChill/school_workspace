import pandas as pd
from sklearn.metrics import r2_score
from sklearn.linear_model import Lasso
from sklearn.model_selection import train_test_split
import numpy as np

data = pd.read_csv('USA_Housing.csv')
dt_Train, dt_Test = train_test_split(data, test_size=0.3, shuffle=True)

X_train = dt_Train.iloc[:, :5]
Y_train = dt_Train.iloc[:, 5]
X_test = dt_Train.iloc[:, :5]
Y_test = dt_Train.iloc[:, 5]


alpha = 1.0
ridge_reg = Lasso(alpha=alpha).fit(X_train, Y_train)

ridge_reg.score(X_test, Y_test)
print('W=', ridge_reg.coef_)
print('W0=', ridge_reg.intercept_)
y_pred = ridge_reg.predict(X_test)
y = np.array(Y_test)
print("Coefficient of determination (R^2): %.2f" % r2_score(Y_test, y_pred))
print("Thuc te       Du doan              Chenh lech")
for i in range(0, len(y)):
    print("%.2f" % y[i], "  ", y_pred[i], "  ", abs(y[i] - y_pred[i]))
