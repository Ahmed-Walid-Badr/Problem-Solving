#بسم الله
n=int(input())
maximum=None
s=0

for i in range(n):
    a,b=map(int,input().split())
    s += b - a
    if maximum == None or maximum < s:
        maximum=s
print(maximum)