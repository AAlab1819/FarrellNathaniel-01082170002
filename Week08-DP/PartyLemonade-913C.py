n, L = map(int,input().split())
a = [int(x) for x in input().split()]
for i in range(0,n-1):
    a[i+1]=min(a[i+1],2*a[i])
s=0
ans=1000**1000
for i in range(n-1,-1,-1):
    d = L // (1<<i)
    s += d*a[i]
    L -= d<<i;
    
    ans = min(ans,s+(L>0)*a[i])
    
print(ans)
