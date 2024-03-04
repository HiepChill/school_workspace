a = [6 , 5 , 8 , 2 , 9 , 7]
b = len(a)
for i in range (b , 2 , -1):
    a [i] = a [i - 1]
    a [3] = 10
    b = b + 1
print(a)