#بسم الله
n=int(input())
nums=list(map(int,input().split()))
result=[0]*n

for i in range(n):
    gift_acceptor=nums[i] #gift_acceptor is the current element, i+1 is the position of the current element
    result[gift_acceptor-1]= i+1 #The place of any gift_acceptor is the number of the friend giving the gift
    #So we assign the position of the gift_acceptor to the order of the numerical value the gift_acceptor is holding

print(*result)