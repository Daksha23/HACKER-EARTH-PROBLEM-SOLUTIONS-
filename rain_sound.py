def sol(a):
    r=a.pop(2)
    for i in range (1,y[1]+1):
        x=i*r
        if x>=y[0] and x<=y[1]:
            l.append(i)
    return l
t=int(input())
for i in range(t):
    l=[]
    y=list(map(int,input().split(' ')))
    x=sol(y)
    d=len(x)-1
    print('{} {}'.format(x[0],x[d]))         
