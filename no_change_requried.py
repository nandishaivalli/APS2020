# cook your dish here
# cook your dish here
t = int(input())

for _ in range(t):
    n,price = map(int,input().split(" "))
    #denom = [0 for i in range(n)]
    denom = input()
    denom = map(int ,denom.split(" "))
    denom = list(denom)
    flag = 0
    for i in denom:
        if(price)%(i)==0:
            flag-=-1
       
    if flag==int(n):
        print("NO")
    else:
        print("YES")
        



        
    