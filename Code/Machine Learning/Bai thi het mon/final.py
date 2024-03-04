import pandas as pd
import numpy as np
import tkinter as tk
from sklearn.model_selection import KFold
#from sklearn.linear_model import Perceptron
from sklearn.svm import SVC
from tkinter import messagebox
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

# Định nghĩa lớp Perceptron
class Perceptron:
    # Hàm khởi tạo của lớp Perceptron
    def __init__(self, learning_rate=0.01, num_epochs=100):
        # Tham số tỉ lệ học
        self.learning_rate = learning_rate
        # Tham số số lượt huấn luyện
        self.num_epochs = num_epochs
    # Hàm dự đoán đầu ra cho một mẫu đầu vào dựa trên trọng số của mô hình
    def predict(self, inputs):
        # Dự đoán là 1 nếu tổng trọng số nhân với đầu vào và tham số điều chỉnh lớn hơn 0, ngược lại là 0
        return np.where(np.dot(inputs, self.weights[1:]) + self.weights[0] > 0, 1, 0)

    # Hàm huấn luyện
    def fit(self, training_data, labels):
        # Chuyển đổi dữ liệu thành mảng numpy
        training_data = np.array(training_data)
        labels = np.array(labels)
        # Xác định số lượng đầu vào dựa trên kích thước của dữ liệu huấn luyện
        self.num_inputs = training_data.shape[1]
        # Khởi tạo trọng số cho mô hình, bao gồm trọng số ngưỡng (self.weights[0]) và các trọng số cho các đầu vào (self.weights[1:])
        self.weights = np.zeros(self.num_inputs + 1)

        for _ in range(self.num_epochs):
            errors = 0
            for i in range(len(training_data)):
                # Dự đoán đầu ra cho mẫu dữ liệu huấn luyện
                prediction = self.predict(training_data[i])
                # Tính lỗi dự đoán bằng sự khác biệt giữa nhãn thực tế và dự đoán
                error = labels[i] - prediction
                # Cập nhật trọng số của mô hình để cải thiện dự đoán
                self.weights[0] += self.learning_rate * error
                self.weights[1:] += self.learning_rate * error * training_data[i]
                # Tổng hóa các lỗi tuyệt đối để kiểm tra việc học
                errors += np.abs(error).sum()
            # Nếu không còn lỗi, dừng việc huấn luyện sớm
            if errors == 0:
                break

# Đọc dữ liệu từ tệp CSV vào một DataFrame của Pandas
data = pd.read_csv('riceClassification.csv')

X = data.drop(['Class', 'id'], axis=1)
y = data['Class']

k = 5
kf = KFold(n_splits=k, shuffle=True)

# Hàm error, dùng để tính train error và validation error
def error(y, y_pred):
    return sum(abs(y - y_pred)) / len(y)

# Khởi tạo các mô hình Perceptron và SVM
per = Perceptron(learning_rate=0.01, num_epochs=100)
    #learning_rate: Đây là tốc độ học của thuật toán Perceptron, tức là mức độ điều chỉnh trọng số sau mỗi lần huấn luyện. 
    # Tham số này quyết định bước cập nhật trọng số và có thể ảnh hưởng đến tốc độ hội tụ của mô hình. 
    # Giá trị thường được chọn từ khoảng (0, 1) và là một số dương.
    
    #num_epochs: Đây là số lượng lần huấn luyện (épochs) mà mô hình sẽ thực hiện để tìm cách tối ưu hóa các trọng số. 
    # Mỗi epoch bao gồm việc xử lý tất cả các mẫu huấn luyện một lần. 
    # Giá trị này xác định số lần mà mô hình sẽ được cập nhật trọng số để học từ dữ liệu.
svm = SVC(kernel="rbf", C=10, gamma=0.2)
    #kernel: Đây là hạt nhân mà bạn sử dụng trong SVM. 
    # là một trong những kernel phổ biến trong SVM. 
    # Kernel RBF có thể xử lý các dữ liệu không tách biệt tuyến tính bằng cách ánh xạ chúng vào không gian chiều cao hơn.
    
    #C: Tham số này là siêu tham số đối với SVM và được gọi là hệ số điều chỉnh biên mềm (soft margin parameter). 
    # Nó quyết định độ phạt cho việc vi phạm sai lệch của các điểm dữ liệu từ ranh giới quyết định. 
    # Giá trị C càng lớn, mô hình sẽ cố gắng phân loại tất cả dữ liệu đúng đắn và có thể dẫn đến overfitting. 
    # Ngược lại, giá trị C nhỏ sẽ làm cho mô hình chấp nhận sai lệch nhiều hơn.
    
    #gamma: Đây là một tham số đối với kernel radial basis function (RBF) và không có tác dụng trong kernel tuyến tính. 
    # Nó quyết định độ co giãn của kernel RBF và ảnh hưởng đến độ phức tạp của mô hình.
min_per = float('inf')
min_svm = float('inf')

# Thực hiện kiểm tra chéo k-fold để chọn mô hình tốt nhất
for train_index, validation_index in kf.split(X):
    X_train, X_validation = X.iloc[train_index], X.iloc[validation_index]
    y_train, y_validation = y.iloc[train_index], y.iloc[validation_index]

    y_train, y_validation = np.array(y_train), np.array(y_validation)

    # Huấn luyện mô hình Perceptron
    per.fit(X_train, y_train)
    y_train_pred_per, y_validation_pred_per = per.predict(X_train), per.predict(X_validation)

    # Huấn luyện mô hình SVM
    svm.fit(X_train, y_train)
    y_train_pred_svm, y_validation_pred_svm = svm.predict(X_train), svm.predict(X_validation)

    # Tính tổng lỗi cho từng mô hình, chọn ra mô hình tối ưu nhất
    sum_error_per = error(y_train,y_train_pred_per) + error(y_validation, y_validation_pred_per)
    if (sum_error_per < min_per):
        min_per, best_per = sum_error_per, per
        #rate_per = sum(y_validation_pred_per == y_validation) / len(y_validation)*100
    sum_error_svm = error(y_train,y_train_pred_svm) + error(y_validation, y_validation_pred_svm)
    if (sum_error_svm < min_svm):
        min_svm, best_svm = sum_error_svm, svm
        #rate_svm = sum(y_validation_pred_svm == y_validation) / len(y_validation)*100

# Chia dữ liệu thành tập huấn luyện và tập kiểm thử cho các mô hình đã chọn
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.1 , shuffle = True)

# Dự đoán trên tập kiểm thử bằng các mô hình đã chọn
y_pred_per = best_per.predict(X_test)
y_pred_svm = best_svm.predict(X_test)

# Tạo một cửa sổ GUI sử dụng tkinter
form = tk.Tk()
form.title("Nhóm 9")
form.geometry("550x650")

# Tạo các nhãn và textbox nhập dữ liệu cho đầu vào của người dùng
lable_ten = tk.Label(form, text = "Nhập thông tin", font=("Arial Bold", 10))
lable_ten.grid(row = 2, column = 2, pady = 10)

label_entries = {}
labels = ["Area:", "MajorAxisLength:", "MinorAxisLength:", "Eccentricity:", "ConvexArea:", "EquivDiameter:", "Extent:", "Perimeter:", "Roundness:", "AspectRation:"]

for i, label_text in enumerate(labels, start=3):
    label = tk.Label(form, text=label_text)
    label.grid(row=i, column=1, pady=8)
    entry = tk.Entry(form)
    entry.grid(row=i, column=3)
    label_entries[label_text] = entry

# Định nghĩa hàm tính các chỉ số đánh giá phân loại
def calculate_metrics(model_name, y_true, y_pred):
    accuracy = accuracy_score(y_true, y_pred)
    precision = precision_score(y_true, y_pred, zero_division=1)
    recall = recall_score(y_true, y_pred, zero_division=1)
    f1 = f1_score(y_true, y_pred, zero_division=1)
    return f"Tỉ lệ dự đoán đúng của {model_name}:\n" f"Accuracy: {accuracy*100:.2f}%\n" f"Precision: {precision*100:.2f}%\n" f"Recall: {recall*100:.2f}%\n" f"F1-score: {f1*100:.2f}%"

# Hiển thị các chỉ số đánh giá phân loại cho mô hình Perceptron và SVM
score_per = tk.Label(form, text=calculate_metrics("Perceptron", y_test, y_pred_per))
score_per.grid(row=13, column=1, padx=20)
score_svm = tk.Label(form, text=calculate_metrics("SVM", y_test, y_pred_svm))
score_svm.grid(row=13, column=3, padx=20)

result_per = tk.Label(form, text="", wraplength=300)
result_per.grid(row=15, column=1, padx=20)
result_svm = tk.Label(form, text="", wraplength=300)
result_svm.grid(row=15, column=3, padx=20)

# Hàm get giá trị nhập vào
def get_input():
    try:
        input_data = [float(label_entries[label].get()) for label in labels]
        input_data = np.array(input_data).reshape(1, -1)
        return input_data
    except Exception as e:
        messagebox.showerror("Error", str(e))

# Hàm hiển thị khi bấm nút
def display_results(model, result_label):
    try:
        input_data = get_input()
        output = model.predict(input_data)
        text = f"Phân loại gạo theo mô hình {model.__class__.__name__}: {output[0]}"
        result_label.config(text=text)
    except Exception as e:
        messagebox.showerror("Error", str(e))

result_button_per = tk.Button(form, text="Dự đoán Perceptron", command=lambda: display_results(best_per, result_per))
result_button_per.grid(row=14, column=1, pady=15, padx=20)
result_button_svm = tk.Button(form, text="Dự đoán SVM", command=lambda: display_results(best_svm, result_svm))
result_button_svm.grid(row=14, column=3, pady=15, padx=20)

form.mainloop()