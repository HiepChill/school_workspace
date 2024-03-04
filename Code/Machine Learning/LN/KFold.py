import pandas as pd
from sklearn.metrics import r2_score
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import KFold
from sklearn.model_selection import train_test_split
import numpy as np

data = pd.read_csv('USA_Housing.csv')
dt_Train, dt_Test = train_test_split(data, test_size=0.3, shuffle=False)

k = 5
kf = KFold(n_splits=k , random_state=None)

X_train = dt_Train.iloc[:, :5]
Y_train = dt_Train.iloc[:, 5]
X_test = dt_Train.iloc[:, :5]
Y_test = dt_Train.iloc[:, 5]

alpha = 1.0

def error(y , y_pred):
    I = []
    for i in range (0 , len(y)):
        I.append(np.abs(np.array(y[i : i + 1]) - np.array(y_pred[i : i + 1])))
    return np.mean(I)


reg = LinearRegression().fit(X_train , Y_train)
y_pred = reg.predict(X_test)
y = np.array(Y_test)
print("Coefficient of determination (R^2): %.2f" % r2_score(Y_test, y_pred))
print("Thuc te  Du doan  Chenh lech")
for i in range(0, len(y)):
    print("%.2f" % y[i], "  ", y_pred[i], "  ", abs(y[i] - y_pred[i]))
