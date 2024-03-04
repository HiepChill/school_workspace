# BAI 1
with open('D:\workspace\Code\python newbie\ thigiuaky.py',encoding= 'utf-8') as f:
   b = f.readlines()
   if(len(b) > 5): 
       print(i for i in b[0:5])
   else:
       print(*b)
# BAI 2
# with open('E:/Python/Bailam/file.txt',encoding= 'utf-8') as f:
# with open('E:/Python/Bailam/file.txt','r',encoding= 'utf-8') as f:
#     b = f.readlines()
#     for i in b[-5:-1]:
#         print(i,end='')
#     print(b[-1])
# BAI 3
# with open('E:/Python/Bailam/file.txt',encoding= 'utf-8') as f:
#     b = f.readlines()
#     max = 0
#     value = []
#     for i in b:
#         if max < len(i):
#             max = len(i)
#     for i in b:
#         if max == len(i):
#             value.append(i)
#     print(value)
# BAI 5
# with open('E:/Python/Bailam/file.txt',encoding= 'utf-8') as f:
#     b = f.readlines()
#     for s in b:
#         print({w:s.count(w) for w in s})
# BAI 6
# with open('E:/Python/Bailam/file.txt',encoding= 'utf-8') as f:
#     b = f.readlines()
#     A = []
#     for s in b:
#         s = s.split()
#         A += s
#     M = {w : A.count(w) for w in sorted(A)}
#     M ={w: i for w,i in sorted(M.items(), key = lambda x: x[1], reverse=True)} 
#     for i in M:
#         print(i, "\t", M[i])
# BAI 7
# f = open('E:/Python/Bailam/file.txt',mode = 'w',encoding= 'utf-8')
#     b =f.readlines()

# f.close()
# BAI 4
# with open('E:/Python/Bailam/file.txt',encoding= 'utf-8') as f:
#     b = f.readlines()
#     a = ' '.join(b).replace("\n",'')
#     c = max(list(map(len,a.split())))
#     for i in a.split():
#         if len(i) == c:
#             print(i)