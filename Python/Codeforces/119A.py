# بسم الله
a, b, n = map(int, input().split())
div_a = None
div_b = None

while n >= 0:
    div_a = 1
    for i in range(100):
        if a % (i + 1) == 0 and n % (i + 1) == 0:
            div_a = i + 1
    n = n - div_a
    if n < 0:
        print(1)
        break
    div_b = 1
    for i in range(100):
        if b % (i + 1) == 0 and n % (i + 1) == 0:
            div_b = i + 1
    n = n - div_b
    if n < 0:
        print(0)
        break