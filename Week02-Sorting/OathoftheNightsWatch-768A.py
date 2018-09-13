def next_gap(gap):
    gap = (gap * 10)//13
    if gap < 1:
        return 1
    return gap
def comb_sort(arr):
    n = len(arr)
    gap = n 
    swapped = True
    while gap !=1 or swapped:
        gap = next_gap(gap)
        swapped = False
        for i in range(0, n-gap):
            if arr[i] > arr[i + gap]:
                arr[i], arr[i + gap]=arr[i + gap], arr[i]
                swapped = True
                
amountStewards = int(input())
valueSteward = list(map(int, input().split()))
comb_sort(valueSteward)
unsupportableStewards = 0 

for i in valueSteward:
    if i == valueSteward[0]:
        unsupportableStewards = unsupportableStewards + 1
    else:
        break
        
for i in reversed(valueSteward):
    if i == valueSteward[len(valueSteward)-1]:
        unsupportableStewards = unsupportableStewards + 1
    else:
        break

if amountStewards - unsupportableStewards >= 0:
    print(amountStewards - unsupportableStewards)
else:
    print(0)
