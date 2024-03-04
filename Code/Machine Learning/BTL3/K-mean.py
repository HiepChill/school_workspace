import pandas as pd
import numpy as np
from sklearn.cluster import KMeans
from sklearn.model_selection import train_test_split
from sklearn.metrics import silhouette_score, davies_bouldin_score
import tkinter as tk

# Read data
data = pd.read_csv("WholesaleCustomersData.csv")

# Create the main form
form = tk.Tk()
form.title("Phân cụm")
form.geometry("300x500")

# Create label and entry widgets
label_entries = {}
labels = ["Channel:", "Region:", "Fresh:", "Milk:", "Grocery:", "Frozen:", "Detergents:", "Delicassen"]
for i, label_text in enumerate(labels, start=2):
    label = tk.Label(form, text=label_text)
    label.grid(row=i, column=1, pady=10)
    entry = tk.Entry(form)
    entry.grid(row=i, column=2)
    label_entries[label_text] = entry

# Create a result label
result_label = tk.Label(form, text="", wraplength=300)
result_label.grid(row=11, column=2, padx=20)

# Display results function
def display_results():
    # Get values from entry widgets
    input_data = [label_entries[label].get() for label in labels]

    # Convert to a numpy array
    kmeans_input = np.array(input_data).reshape(1, -1)

    # Train the model
    dt_train, dt_test = train_test_split(data, test_size=0.3, shuffle=True)
    kmeans = KMeans(n_clusters=5, init='k-means++', random_state=42, n_init=10)
    # n_clusters:

        # Đây là số lượng cụm mà bạn muốn thuật toán K-means tạo ra từ dữ liệu. Trong trường hợp của bạn, n_clusters = 2 có nghĩa là bạn muốn tạo ra 2 cụm từ dữ liệu của mình.
    # init:

        # Tham số này xác định cách bạn khởi tạo các điểm trọng tâm ban đầu cho từng cụm. 'k-means++' là một phương pháp khởi tạo thông minh, nó cố gắng đảm bảo rằng các trọng tâm ban đầu được chọn cách xa nhau và khỏi trạng thái hội tụ nhanh chóng.
    # random_state:

        # Đây là một giá trị ngẫu nhiên (seed) để đảm bảo tính nhất quán và lặp lại của thuật toán. Sử dụng một giá trị cố định cho random_state giúp bạn có thể lặp lại kết quả nếu cần thiết, đặc biệt khi bạn muốn so sánh kết quả giữa các lần chạy khác nhau.
    # n_init:

        # Đây là số lần chạy K-means với các trạng thái ban đầu (initialization) khác nhau. Mỗi lần chạy, thuật toán sẽ chọn các trọng tâm ban đầu khác nhau dựa trên phương thức đã chọn ('k-means++' trong trường hợp này). Sau đó, thuật toán sẽ tìm trạng thái hội tụ tốt nhất (cụm tốt nhất) từ trạng thái ban đầu đó. Kết quả cuối cùng sẽ là cụm tốt nhất trong số các lần chạy n_init này.
    kmeans.fit(dt_train)
    cluster_labels = kmeans.predict(dt_test)
    silhouette_avg = silhouette_score(dt_test, cluster_labels)
    db_score = davies_bouldin_score(dt_test, cluster_labels)

    # Classify and display the results
    kmeans_output = kmeans.predict(kmeans_input)
    kmeans_text = "Loại: " + ", ".join(map(str, kmeans_output))

    result_text = f"{kmeans_text}\nSilhouette Score: {silhouette_avg:.2f}\nDavies-Bouldin Score: {db_score:.2f}"
    result_label.config(text=result_text)

# Create a button to display results
result_button = tk.Button(form, text="Show Results", command=display_results)
result_button.grid(row=10, column=2, pady=20)

form.mainloop()