from math import lcm


def ucln(a , b):
    if a == 0 or b == 0:
        return a + b
    while(a != b):
        if(a > b):
            a = a - b
        else:
            b = b - a
    return a

a = int(input('A = '))
b = int(input('B = '))
print("Ước chung lớn nhất của 2 số A và B là: ",ucln(a , b))
print("Bội chung nhỏ nhất của 2 số A và b là: ",lcm(a , b))
