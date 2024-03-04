s = input('S = ')
k = int(input('k = '))
dem = 0
for i in range (0 , len(s) - k):
    if s[i : i + k] == s[i + k : i + 2 * k]:
        dem = 1
if dem == 1:
    print('Day lap bac',k)
else:
    print('Day khong lap')
