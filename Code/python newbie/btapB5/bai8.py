n = int(input('N = '))
k = 0
X = {'()'}
while k != len(X):
    k = len(X)
    for a in X:
        if len(a) + 2 < n:
            X.add('('+ a + ')')
    for a in list(X):
        if len(a) + len(b) < n:
            X.add(a + b)
            