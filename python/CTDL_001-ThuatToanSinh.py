n = int(input())
a = [0] * n

def In():
    tmp = ''
    for i in a:
        tmp += str(i)
    if tmp == tmp[::-1]:
        for i in a:
            print(i,end=' ')
        print('\n')
        

def Try(i):
    for j in range(0,2):
        a[i]=j
        if i == n-1:
            In()
        else:
            Try(i+1)

Try(0)
