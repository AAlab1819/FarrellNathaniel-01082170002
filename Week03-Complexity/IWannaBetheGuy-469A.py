n = int(input())

x = input()
x = x.split(' ')[1:]

y = input()
y = y.split(' ')[1:]

xy = x + y

if len(set(xy)) == n:
    print("I become the guy.")  
else: 
    print("Oh, my keyboard!")
