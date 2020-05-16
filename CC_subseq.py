test_case = int(input())
for _ in range(test_case):
    n,k = input().split(" ")
    array = map(int,input().split(" "))
    array = list(array)
    count=0
    min_sum = 1000000;
    s = 0
    n= int(n)
    binary = [1 for i in range(n)]
    
    
   
    binary = bin(n)
    l = str(binary[2:])
    while(n>0):
        for i in range(len(l)):
            if(l[i]=='1'):
                count-=-1
                s= s +array[i]
        
        if count == k:
            if min_sum > s:
                min_sum = s
        n=n-1
        l = bin(n)

    print(min_sum)





    