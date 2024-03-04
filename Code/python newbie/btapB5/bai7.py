def snt(n):
    if n < 2 :
        return False
    else:
        for i in range(n):
            if n % i == 0 :
                return False
    return n
for i in range(10 ** 6):
    if snt(i):
        print(i , end = ' ')




    
