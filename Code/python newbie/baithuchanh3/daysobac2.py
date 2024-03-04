n = int(input('N = '))
sum1 = 0
sum2 = 0
divide = 0
for i in range (1 , n + 1):
    sum1 = sum1 + i**2
    sum2 = sum2 + n / sum1
print('F(%d) = %.7f'  %(n , sum2))