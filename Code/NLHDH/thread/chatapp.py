import queue
import threading
import tkinter as tk
from queue import Queue

class ChatApp:
    instances = []

    def __init__(self, master, username, shared_queue):
        # Khởi tạo một thể hiện của Ứng dụng Chat
        self.master = master
        self.master.title(f"Ứng dụng Chat - {username}")

        self.username = username
        self.shared_queue = shared_queue

        # Tạo giao diện người dùng (UI) 
        self.create_ui()

        # Theo dõi các thể hiện
        ChatApp.instances.append(self)

    def create_ui(self):
        # Tạo các phần tử UI cho cửa sổ chat
        self.chat_box = tk.Text(self.master, state=tk.DISABLED, height=15, width=50)
        self.message_entry = tk.Entry(self.master, width=50)
        self.send_button = tk.Button(self.master, text="Gửi", command=self.send_button_clicked)

        # Đóng gói các phần tử UI
        self.chat_box.pack(padx=10, pady=10)
        self.message_entry.pack(pady=10)
        self.send_button.pack(pady=10)

    def send_button_clicked(self):
        # Được gọi khi nút "Gửi" được nhấn
        message = self.message_entry.get()
        if message:
            # Đặt tin nhắn vào hàng đợi chung
            self.shared_queue.put((self.username, message))
            # Xóa nội dung trong ô nhập tin nhắn
            self.message_entry.delete(0, tk.END)

    def update_chat(self, user, message):
        # Cập nhật hộp chat với tin nhắn mới
        self.chat_box.configure(state=tk.NORMAL)
        self.chat_box.insert(tk.END, f"{user}: {message}\n")
        self.chat_box.configure(state=tk.DISABLED)

    def check_messages(self):
        try:
            while True:
                # Thử lấy một tin nhắn từ hàng đợi chung
                user, message = self.shared_queue.get_nowait()
                # Cập nhật chat cho tất cả các thể hiện
                for instance in ChatApp.instances:
                    instance.update_chat(user, message)
        except queue.Empty:
            pass

        # Lên lịch để phương thức check_messages chạy lại sau 100 mili giây
        self.master.after(100, self.check_messages)

    def start_threads(self):
        # Khởi động một luồng riêng biệt để chạy phương thức check_messages
        receive_thread = threading.Thread(target=self.check_messages)
        receive_thread.daemon = True  # Luồng sẽ thoát khi chương trình chính thoát
        receive_thread.start()

class LoginApp:
    def __init__(self, master, shared_queue):
        # Khởi tạo một thể hiện của Ứng dụng Đăng nhập
        self.master = master
        self.master.title("Đăng nhập")

        self.shared_queue = shared_queue
        self.create_ui()

    def create_ui(self):
        # Tạo các phần tử UI cho cửa sổ đăng nhập
        self.label = tk.Label(self.master, text="Nhập tên của bạn:", font=("Arial", 12))
        self.username_entry = tk.Entry(self.master, font=("Arial", 12))
        self.login_button = tk.Button(self.master, text="Đăng nhập", command=self.login, font=("Arial", 12))

        # Đóng gói các phần tử UI
        self.label.pack(pady=10)
        self.username_entry.pack(pady=10)
        self.login_button.pack(pady=10)

    def login(self):
        # Được gọi khi nút "Đăng nhập" được nhấn
        username = self.username_entry.get()
        if username:
            # Mở một cửa sổ chat mới cho người dùng
            chat_app = tk.Toplevel(self.master)
            app = ChatApp(chat_app, username, self.shared_queue)
            # Khởi động luồng để kiểm tra tin nhắn
            app.start_threads()
            # Xóa nội dung trong ô nhập tên người dùng
            self.username_entry.delete(0, tk.END)
        else:
            # Hiển thị cảnh báo nếu không nhập tên người dùng
            tk.messagebox.showwarning("Cảnh báo", "Vui lòng nhập tên của bạn.")

def main():
    # Tạo một hàng đợi chung
    shared_queue = Queue()

    # Khởi tạo cửa sổ chính Tkinter
    root = tk.Tk()
    root.title("Ứng dụng Chat")

    # Tạo một thể hiện của Ứng dụng Đăng nhập
    login_app = LoginApp(root, shared_queue)

    # Khởi động vòng lặp chính của Tkinter
    root.mainloop()

if __name__ == "__main__":
    # Chạy hàm main nếu mã lệnh được thực thi trực tiếp
    main()
