import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn import preprocessing

class Perceptron:
    def __init__(self, num_inputs, learning_rate=0.01, num_epochs=100):
        self.num_inputs = num_inputs
        self.learning_rate = learning_rate
        self.num_epochs = num_epochs
        self.weights = np.zeros(num_inputs + 1)

    def predict(self, inputs):
        summation = np.dot(inputs, self.weights[1:]) + self.weights[0]
        return 1 if summation > 0 else 0

    def fit(self, training_data, labels):
        for _ in range(self.num_epochs):
            errors = 0
            for i in range(len(training_data)):
                prediction = self.predict(training_data[i])
                error = labels[i] - prediction
                self.weights[0] += self.learning_rate * error
                self.weights[1:] += self.learning_rate * error * training_data[i]
                errors += abs(error)
            if errors == 0:
                break

data = pd.read_csv('riceClassification.csv')
le = preprocessing.LabelEncoder()
data = data.apply(le.fit_transform)
dt_train , dt_test = train_test_split(data , test_size = 0.3 , shuffle = True)
#print(data)

x_train = dt_train.iloc[: , : 11]
y_train = dt_train.iloc[: , 11]
x_test = dt_test.iloc[: , : 11]
y_test = dt_test.iloc[: , 11]

pla = Perceptron(num_inputs=2)
pla.fit(x_train , y_train)
y_predict = pla.predict(x_test)
count = 0
y_test = np.array(y_test)
for i in range (0 , len(y_predict)):
    if (y_test[i] == y_predict[i]):
        count += 1

print('Tỷ lệ dự đoán đúng: %.2f' %(count / len(y_predict)))

