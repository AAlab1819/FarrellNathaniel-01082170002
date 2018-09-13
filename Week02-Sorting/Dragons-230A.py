def shellSort(arr):
    n = len(arr)
    gap = n//2
    while gap > 0:
        for i in range(gap,n):
            temp = arr[i]
            j = i
            while  j >= gap and arr[j-gap] >temp:
                arr[j] = arr[j-gap]
                j -= gap
            arr[j] = temp
        gap //= 2
s, n = map(int, input().split())
dragons = []
possible = True
for dragon in range(n):
    dragonStrength, bonusStrength = map(int, input().split())
    dragons.append([dragonStrength, bonusStrength])
shellSort(dragons)
for dragon in dragons:
    if dragon[0] >= s:
        possible = False
    else:
        s += dragon[1]
if possible == True:
    print("YES")
else:
    print("NO")
