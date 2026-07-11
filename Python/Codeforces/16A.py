nm=input()
n,m=map(int,nm.split())
NO=False
grid=[]


for i in range(n):
    row =input()
    if len(row)!=m:
        break
    else:
        grid.append(row)
    for k in range(m):
        if row[0]!= row[k]:
            NO=True
            break


for x in range(n):
    if x != n-1:
        if grid[x]==grid[x+1]:
            NO=True
if NO:
    print("NO")
else:
    print("YES")