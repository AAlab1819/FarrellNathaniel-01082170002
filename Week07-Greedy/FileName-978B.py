n = int(input())
name = input()
count = 0
ans = 0
for i in range(n):
    if name[i] != 'x':
        count = 0
    else:
        count += 1
        if count > 2:
            ans += 1
print(ans)
