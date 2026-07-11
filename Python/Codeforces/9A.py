YW=input()
Y,W= map( int, YW.split(" "))
possibilities = 0
larger = True
denum=0


if Y > W:
    larger = Y
else:
    larger = W


for i in range(6):
    if larger <= i+1:
        possibilities += 1


if 6 % possibilities == 0:
    denum = 6 // possibilities
    print("1/",denum, sep="")
elif possibilities == 4:
    print("2/3")
else:
    print(possibilities,"/6", sep="")