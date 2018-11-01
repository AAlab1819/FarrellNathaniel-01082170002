n = int(input())
a = [int(x) for x in input().split()]
b = sorted(a)
p = [] + a
q = [] + b

m = int(input())

for i in range(1,len(a)):
     a[i] += a[i-1]
     b[i] += b[i-1]
    
while(m > 0):
     t, l, r = map(int,input().split())
     if(t == 1):
          print(a[r-1]-a[l-1]+p[l-1])
     else:
          print(b[r-1]-b[l-1]+q[l-1])
     m -= 1
