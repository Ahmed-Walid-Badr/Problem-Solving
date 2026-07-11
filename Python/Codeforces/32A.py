nd = input()
n,d=map(int,nd.split())
s = input().split()
combinations=0
i=0
j=0
while i < len(s):
    j=0
    while j <len(s):
        if i !=j:
            if -d <= int(s[i]) - int(s[j]) <= d:
                combinations += 1
        j+=1
    i+=1
print(combinations)