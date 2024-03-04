n = int(input('Nhap N duong: '))
times = 1
sum = 0
for i in range (1 , n  + 1):
    times = times * i
    sum = sum + times
print('F(%d) = %d' %(n , sum))