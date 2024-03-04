a = ['0','1','2','3','4','5','6','7','8','9']
b = ''
for i in input('Nhap chuoi:'):
    if i not in a :
        b = b + i
    else:
        b = b + '?'
print(b)


        