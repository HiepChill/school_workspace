import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier, plot_tree
from sklearn import preprocessing
import matplotlib.pyplot as plt

df = pd.read_csv('mushrooms.csv')
pe = preprocessing.LabelEncoder()
data = df.apply(pe.fit_transform)

# print(data)

dt_train, dt_test = train_test_split(data, test_size=0.3, shuffle=True)

x_train = dt_train.iloc[:, 1:]
y_train = dt_train.iloc[:, 0]
x_test = dt_test.iloc[:, 1:]
y_test = dt_test.iloc[:, 0]

pla = DecisionTreeClassifier(criterion='gini')
pla.fit(x_train, y_train)
y_predict = pla.predict(x_test)
y_test = np.array(y_test)
count = 0
# print("y_test   y_predict")
for i in range (0, len(y_predict)):
    # print(y_test, "   ", y_predict)
    if (y_test[i] == y_predict[i]):
        count = count + 1

print('Ty le du doan dung: ', count/len(y_predict))

# plt.figure(figsize=(20, 10))
# plot_tree(pla, filled=True, feature_names=list(x_train.columns), class_names=["edible", "poisonous"])
# plt.show()