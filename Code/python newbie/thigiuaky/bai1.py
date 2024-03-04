a = int(input('Do dai A ='))
b = int(input('Do dai B ='))
c = int(input('Do dai C ='))
d = int(input('Do dai D ='))
s = [-1]
def exam(a , b , c):
    if (a + b > c and a + c > b and b + c > a and a > 0 and b > 0 and c > 0):
        return True
    else:
        return False
def S(a , b , c):
    p = (a + b + c)/2
    return (p * (p - a) * (p - b) * (p - c)) ** 0.5
def chen(a,b,c):
    if(exam(a,b,c) == True):
        s.append(S(a,b,c))
chen(a,d,b)
chen(a,b,c)
chen(b,c,d)
chen(a,d,c)
if len(s) == 1:
    print('Ket qua =',-1)
else:
    print('Ket qua = %.5f' %sum(s))