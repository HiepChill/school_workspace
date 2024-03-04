n = int(input('N = '))
tong1 = 0
for i in range (1 , n + 1 , 2):
    tong1 = tong1 + i ** 2
print('P(%d) = %d' %(n , tong1))