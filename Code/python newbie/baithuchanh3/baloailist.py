n = int(input("Nhap N: "))
a = []
b = []
c = []
d = []
for i in range(1 , n + 1):
    nhap = input("Nhap gia tri thu %d: " % i)
    try:
        x = int(nhap)
        a.append(x)
    except ValueError:
        try:
            x = float(nhap)
            b.append(x)
        except ValueError:
            try:
                if nhap.isascii(): c.append(nhap)
            except ValueError:
                d.append(x)
print("A =",sorted(a,reverse = True))
print("B =",sorted(b,reverse = True))
print("C =",sorted(c,reverse = True))