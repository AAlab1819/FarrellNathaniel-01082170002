'''
a = Yellow Crystal
b = Blue Crystal
P = Yellow Ball
Q = Green Ball
R = Blue Ball
'''

a, b = list(map(int, input().split()))
P, Q, R = list(map(int, input().split()))

# the problem states that P = 2a | Q = ab | R = 3b 

print(max(2*P+Q-a,0)+max(3*R+Q-b, 0))
