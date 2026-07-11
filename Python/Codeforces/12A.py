row1=input()
row2=input()
row3=input()


if row1 == row3[::-1] and row2[0] == row2[2]:
    print("YES")
else:
    print("NO")
