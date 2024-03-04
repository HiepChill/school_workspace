a = []
b = []
n = int(input('Nhap N: '))
for i in range (1 , n + 1):
    nhap = input('Nhap gia tri thu %d: ' %i)
    try:
        x = float(nhap)
        a.append(x)
    except ValueError:
        b.append(nhap)
if len(a) > 0:
    print('TBC cua A =' , sum(a) / len(a))
print('B =' , b)