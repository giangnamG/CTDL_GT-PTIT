# loi IR
t = int(input())
for _ in range(t):
    n,k = int(input()),int(input())
    a = []
    for _ in range(k):
        a.append(int(input()))
    i = k-1
    while a[i]==n-k+i+1:
        i-=1
    if i>= 0:
        a[i]+=1
        for j in range(i+1,k):
            a[j] = a[j-1] + 1
    else:
        a[0]=1
        for j in range(1,k):
            a[j] = a[j-1] + 1
    for j in range(k):
        print(a[j],end=' ')
    print(end='\n')