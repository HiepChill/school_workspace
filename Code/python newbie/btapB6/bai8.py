n = int(input('N = '))
s = set()
for i in range (1 , n  + 1):
    a = input('Bo 6 so cua nguoi thu %d la: ' %i)
    s.add(a)
count = 0
q = set(input('Nhap bo so cua giai dac biet: '))
for i in s:
    if len(s & q) >= 5:
        count = count + 1
print('Co %d trung giai dac biet !' %count)
