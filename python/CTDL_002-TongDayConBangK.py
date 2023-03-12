n = int(input())
k = int(input())
a = n*[0]
dem = 0
for i in range(0,n):
    a.append(int(input()))

Bin = n*[0]
def process():
    sum = 0
    for i in range(0,n):
        if Bin[i] == 1:
           sum += a[i]
    if sum == k:
        dem +=1
        for i in range(0,n):
            if Bin[i] == 1:
                print(a[i],end=' ')
def In():
    for i in Bin:
        print(i,end=' ')   
    print('\n')
def Try(i):
    for j in range(0,2):
        Bin[i] = j
        if i==n-1:
            process()
        else:
            Try(i+1)

Try(0)