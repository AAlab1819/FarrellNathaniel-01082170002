n, l = map(int, input().split())
a = sorted(map(int, input().split()))
d = max(min(a), l - max(a))
for i in range (n-1):
    d = max(d, (a[i+1] - a[i]) / 2)
print(d)
