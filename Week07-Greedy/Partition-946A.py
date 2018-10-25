n = int(input())
a = [int(x) for x in input().split()]
b=0
c=0
for i in range(n):
    if(a[i]>=0):
        b+=a[i]
    else:
        c+=a[i]
print(b-c)
