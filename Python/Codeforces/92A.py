nm = input()
n,m=map(int, nm.split())
number=1


while number<=m:
    m -= number
    number += 1
    if number == n+1:
        number-=n


print(m)