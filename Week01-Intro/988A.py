# n = amount of students in a class, k = size of the Diverse Team, a = ratings of students

n, k = list(map(int, input().split()))
a = list(map(int, input().split()))
team = list(set(a))
if len(team) < k:
    print("NO")
else:    
    print("YES")
    for i in range(k):
        print(a.index(team[i])+1, end=" ")
