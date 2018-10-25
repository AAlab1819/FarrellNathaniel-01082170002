n = int(input())
teams = [int(x) for x in input().split()]
carrying = 0

for i in range(n):
    if teams[i] == 0 and carrying == 1:
        print("NO")
        exit()
    if teams[i] % 2 == 1:
        if carrying == 0:
            carrying = 1
        else:
            carrying = 0
            
if carrying == 0:
    print("YES")
else:
    print("NO")
