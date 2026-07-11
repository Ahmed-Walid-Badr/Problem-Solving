n=int(input())
s=input().split()
solution=""
mn=1000

for i in range(n):
    for j in range(n):
        if i!=j:
            if ((i==0 and j==n-1) or (j==0 and i==n-1)) or (j==i+1 or j==i-1):
                if int(s[i]) >= int(s[j]):
                    if int(s[i]) - int(s[j]) < mn:
                        mn = int(s[i]) - int(s[j])
                        solution = str(i + 1) + " " + str(j + 1)



print(solution)