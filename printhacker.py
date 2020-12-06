t=int(input())
s=list(input())
l=[]
n=[]
c=0
s.sort()
x=['a','a','c','e','e','h','h','k','r','r','t']
for i in s:
    if i in ('a','c','e','h','k','r','t'):
        l.append(i)
    else:
        pass
while len(l)>0:
    for i in x:
        for j in l:
            if i==j:
                n.append(j)
                l.remove(j)
                break
        if n==x:
            c+=1
            n.clear()
print(c)  
