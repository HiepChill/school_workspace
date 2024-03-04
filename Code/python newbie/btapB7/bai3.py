dic = {'a' : 1 , 'b' : 2 , 'c' : 3 , 'd' : 4 , 'e' : 5}
dic = sorted(dic , key = dic.values() , reverse = True)[:3] 
print(dic)