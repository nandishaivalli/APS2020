#https://www.hackerrank.com/challenges/leonardo-and-prime/problem
prime=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
for i in range(int(input())):
    count,result=0,1
    n=int(input())
    for j in prime:
        result*=j
        if(result<=n):
            count+=1
    print(count)
