n = int(input('Nhap so nguyen duong N = '))
# for i in range (1 , n):
#     if n % i == 0 :
#         print(i , end = ' ')

print({i for i in range (1 , n) if n % i == 0})