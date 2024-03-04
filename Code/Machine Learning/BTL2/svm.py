import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
from sklearn import preprocessing

data = pd.read_csv('riceClassification.csv')
le = preprocessing.LabelEncoder()
data = data.apply(le.fit_transform)
dt_train , dt_test = train_test_split(data , test_size = 0.3 , shuffle = True)
#print(data)

x_train = dt_train.iloc[: , : 11]
y_train = dt_train.iloc[: , 11]
x_test = dt_test.iloc[: , : 11]
y_test = dt_test.iloc[: , 11]

pla = SVC(kernel='linear', C=10, gamma=0.2)
pla.fit(x_train , y_train)
y_predict = pla.predict(x_test)
count = 0
y_test = np.array(y_test)
for i in range (0 , len(y_predict)):
    if (y_test[i] == y_predict[i]):
        count += 1

print('Tỷ lệ dự đoán đúng: %.2f' %(count / len(y_predict)))