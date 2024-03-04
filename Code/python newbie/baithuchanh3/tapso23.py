# import bisect
# n=int(input("N = "))
# l=[1]
# for i in range(n):
#     bisect.insort(l,2*l[i]+1)
#     bisect.insort(l,3*l[i]+1)
# print(f"{n} so dau tien cua N23:",*sorted(set(l))[:n])

n = int(input("N = "))
s = [1]
j = k = 0
for i in range (n):
    a = 2*s[j] + 1
    b = 3*s[k] + 1
    if a < b:
        s.append(a)
        j+=1
    elif a > b:
        s.append(b)
        k+=1
    else :
        s.append(a)
        j+=1
        k+=1
print(n,"so dau tien cua N23: ",end="")
print(*s[0:n], sep=" ")