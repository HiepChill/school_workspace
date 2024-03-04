def tongGiaiThua( n ):
    tong = 0
    giaithua = 1
    for i in range(1 , n + 1):
        giaithua = giaithua * i
        tong = tong + giaithua
    return tong
n = int( input( 'Nhap N = '))
tonggt = tongGiaiThua(n)
print('F(n) = ',tonggt)

#Cấu trúc dữ liệu và phân tích thuật toán trong C++