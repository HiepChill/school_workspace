s = str(input('Nhap S = '))
n = int(input('Nhap N = '))
def find_max(s):
    ds = []
    for i in range (len(list(s))):
        ds_temp = list(s).copy()
        ds_temp.pop(i)
        ds.append(int(''.join(ds_temp)))
    return str(max(ds))
i = 0
while i < n:
    i = i + 1
    s = find_max(s)
print(s)