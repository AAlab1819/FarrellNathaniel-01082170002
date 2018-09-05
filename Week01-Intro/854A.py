x = int(input())
if x % 4 == 0:
    print(x//2 - 1, x//2 + 1)
else:
    if x % 4 == 2:
        print(x//2 - 2, x//2 + 2)
    else:
        print((x-1)//2, (x+1)//2)
