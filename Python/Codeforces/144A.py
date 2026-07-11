n=int(input())
h=input().split()
mini=None
mini_sec=1
maxi=None
maxi_sec=1
for i in range(n):
    if mini==None or int(h[-(i+1)]) < int(mini):
        mini=h[-(i+1)]
        mini_sec = i
    elif mini_sec > i and int(h[-(i+1)]) == int(mini):
        mini_sec=i
    if maxi==None or int(h[i]) > int(maxi):
        maxi=h[i]
        maxi_sec = i
    elif maxi_sec > i and int(h[i]) == int(maxi):
        maxi_sec=i
sec = maxi_sec
if n-mini_sec-1 < maxi_sec:
    sec+=mini_sec-1
elif mini_sec != n-1:
    sec+=mini_sec
print(sec)