# def ucln(a,b):
#     return a if b == 0 else ucln(b , a % b)
# def bcnn(a,b):
#     return a / ucln(a,b) * b

n = int(input('N = '))
u = v = n
from math import gcd, lcm

while True:
    n = int(input('N = '))
    if n <= 0:
        break
        u = gcd(u,n)
        v = lcm(u,n)
print(u,v)