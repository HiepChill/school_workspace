a = input("Nhap vao: ").split()
a = sorted("".join(a))
dem = [a[0] , a.count(a[0])]
print("Cac chu cai trong chuoi vua nhap la:", a[0] , end = " ")
for i in range(0 , len(a)-1):
    if a[i] != a[i + 1]:
        dem.append(a[i + 1]) 
        dem.append(a.count(a[i + 1]))
        print(a[i + 1] , end=" ")
for i in range(0 , len(dem) - 1 , 2):
    print("\nCo" , dem[i + 1] , "ki tu" , dem[i] , end = " ")