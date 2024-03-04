import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn import preprocessing

df = pd.read_csv('mushrooms.csv')
le = preprocessing.LabelEncoder()
data = df.apply(le.fit_transform)

# print(data)

dt_train, dt_test = train_test_split(data, test_size=0.3, shuffle=True)

x_train = dt_train.iloc[:, 1:23]
y_train = dt_train.iloc[:, 0]
x_test = dt_test.iloc[:, 1:23]
y_test = dt_test.iloc[:, 0]

pla = DecisionTreeClassifier(criterion='entropy')
pla.fit(x_train, y_train)
y_predict = pla.predict(x_test)
y_test = np.array(y_test)
count = 0
print("y_test   y_predict")
for i in range (0, len(y_predict)):
  print(y_test, "   ", y_predict)
  if (y_test[i] == y_predict[i]):
    count = count + 1

print('Ty le du doan dung: ', count/len(y_predict))