from math import sqrt


n = int(input('N = '))
sum1 = 0
sum2 = 0
for i in range (1 , n + 1):
    sum1 = sum1 + i
    sum2 = sum2 + sqrt(sum1)
print("F(%d) = %.7f" %(n,sum2))
