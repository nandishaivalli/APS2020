test_case = int(input())

#nandish

for _ in range(test_case):

    a=list(map(int,input().split()))
    l = list(map(int,input().split(" ")))
    s=0
    for i in l:
        s+=i
    print(s%a[1])