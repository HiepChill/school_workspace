# s = input('Nhap chuoi: ')
# dai = 1
# for i in s.split(): 
#     if len(i) > dai: 
#         dai = len(i)
# for i in s.split():
#     if len(i) == dai: 
#         print(i)


a = input("Nhap vao chuoi: ").split()
max = max(len(n) for n in a)
for n in a:
    if len(n) == max: 
        print(n)
