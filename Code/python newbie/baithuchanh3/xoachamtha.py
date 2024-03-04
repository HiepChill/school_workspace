s = str(input('Nhap S: '))
a = ''
b = '!'

for i in s:
    if i not in b:
        a = a + i
print('Chuoi S sau khi loai bo dau cham than:',a)

