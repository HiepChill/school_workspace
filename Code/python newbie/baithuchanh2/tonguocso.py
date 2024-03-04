# n = int(input('N = '))
# sum = 0
# for i in range (1 , n + 1):
#     if n % i == 0:
#         sum = sum + i
# print('Tong cac uoc so cua %d la %d' %(n , sum))


import math

n = int(input('N = '))
s  = 0
for i in range(1,int(math.sqrt(n))+1):
    if n %i ==0:
        j = n//i
        if(i ==j): s += i
        else: s = s + i + j
print(f'Tong cac uoc so cua {n} la',s)