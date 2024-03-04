from sklearn import preprocessing
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier, plot_tree
import numpy as np
import matplotlib.pyplot as plt

data = pd.read_csv('mushrooms.csv')

le = preprocessing.LabelEncoder()
data = data.apply(le.fit_transform)
dt_train, dt_test = train_test_split(data, test_size=0.3, shuffle=True)

x_train = dt_train.iloc[: , 1 : 23]
y_train = dt_train.iloc[: , 0]
x_test = dt_test.iloc[: , 1 : 23]
y_test = dt_test.iloc[: , 0]

clf = DecisionTreeClassifier(criterion='entropy').fit(x_train, y_train)

y_pred = clf.predict(x_test)
y_test = np.array(y_test)

count = 0
for i in range(0, len(y_pred)):
    if(y_test[i] == y_pred[i]):
        count = count + 1

print(count/len(y_pred))

# plt.figure(figsize=(20, 10))
# plot_tree(clf, filled=True, feature_names=list(x_train.columns), class_names=["edible", "poisonous"])
# plt.show()