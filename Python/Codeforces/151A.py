#بسم الله
n, k, l, c, d, p, nl, np=map(int, input().split())
total_l=k*l
total_d=c*d
toast=min(total_l//nl,total_d,p//np)


print(toast//n)