def count_ways_to_partition(K):
    # Tạo mảng DP để lưu số cách phân tích từng số
    dp = [0] * (K + 1)
    dp[0] = 1  # Có một cách để phân tích số 0: không chọn số nào

    # Lặp qua các số từ 1 đến K
    for i in range(1, K + 1):
        # Lặp qua các số nguyên dương có thể sử dụng để phân tích i
        for j in range(i, K + 1):
            dp[j] += dp[j - i]

    return dp[K]

# Nhập số nguyên dương K từ người dùng
K = 7

# Gọi hàm và in kết quả
result = count_ways_to_partition(K)
print(f"Số cách phân tích {K} thành tổng các số nguyên dương khác nhau là: {result}")
