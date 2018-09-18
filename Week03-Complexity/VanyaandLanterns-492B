n, l = map(int,input().split())
a = sorted(list(map(int,input().split())))
d = min(a) if min(a) > l - max(a) else l - max(a)
for i in range(n-1):
    if (a[i+1] - a[i])/2 > d: d = (a[i+1] - a[i])/2
print(d)
