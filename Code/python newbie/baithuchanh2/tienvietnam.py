def check(a , b , c , d , e , m , n):
    return a + b + c + d + e <= m and a * 200 + b * 500 + c * 1000 + d * 2000 + e * 5000 == n
n = int(input('N = '))
m = int(input('M = '))
count = 0
if n % 100 != 0:
    count = 0
else:
    for a in range (0 , (n // 200 + 1)):
        for b in range (0 , (n // 500 + 1)):
            for c in range (0 , (n // 100 + 1)):
                for d in range(0 , (n // 2000 + 1)):
                    for e in range(0 , (n // 5000 + 1)):
                        if check(a , b , c , d , e , m , n): 
                            count = count + 1
print('Co',count,'phuong an doi tien')