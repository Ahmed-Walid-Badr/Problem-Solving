n=int(input())
integer=False
for i in range(501):
    if ((i**2)+i-2*n)== 0:
        integer = True
        break

if integer:
    print("YES")
else:
    print("NO")