n = int(input('N = '))
a = 2 ** n
sum = 0  
b = 0 
while(a != 0):
    b = a % 10
    sum = sum + b
    a = a // 10
print('Tong =',sum)
