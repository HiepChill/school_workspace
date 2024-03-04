import pandas as pd
from sklearn.metrics import r2_score
from sklearn.model_selection import KFold
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
import numpy as np


data = pd.read_csv('riceClassification.csv')
dt_Train, dt_Test = train_test_split(data, test_size=0.3 , shuffle = False)

def error(y,y_pred):
    sum=0
    for i in range(0,len(y)):
        sum = sum + abs(y[i] - y_pred[i])
    return sum/len(y)

min=999999
k = 5
kf = KFold(n_splits=k, random_state=None)
for train_index, validation_index in kf.split(dt_Train):
    X_train, X_validation = dt_Train.iloc[train_index,:11], dt_Train.iloc[validation_index, :11]
    y_train, y_validation = dt_Train.iloc[train_index, 11], dt_Train.iloc[validation_index, 11]

    lr = LinearRegression()
    lr.fit(X_train, y_train)
    y_train_pred = lr.predict(X_train)
    y_validation_pred = lr.predict(X_validation)
    y_train = np.array(y_train)
    y_validation = np.array(y_validation)

    sum_error = error(y_train,y_train_pred)+error(y_validation, y_validation_pred)
    
    if(sum_error < min):
        min = sum_error
        regr=lr

y_test_pred=regr.predict(dt_Test.iloc[:,:11])
y_test=np.array(dt_Test.iloc[:,11])
print(r2_score(y_test , y_test_pred)) #0.289023294695371
print("Thuc te        Du doan              Chenh lech")
for i in range(0,20):
    print(y_test[i],"  ",y_test_pred[i],  "  " , abs(y_test[i]-y_test_pred[i]))
