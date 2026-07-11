n=int(input())
half1=0
half2=0
if n%2==0:
    num = input()
    for i in range (n):
        if num[i]=='4' or num[i]=='7':
            if  i < (n // 2):
                half1 += int(num[i])
            else:
                half2 += int(num[i])
        else:
            half1 = half2 = 0
            break
    if half1 != 0 and half2 != 0:
        if half1 == half2:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")