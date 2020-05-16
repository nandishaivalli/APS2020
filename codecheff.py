#https://www.codechef.com/APRIL20B/problems/CARSELL
try :
    for _ in range(int(input())):
        input()
        arr = map(int,input().split())
        arr = list(arr)
        arr.sort(reverse = True)
        ss = 0
        ii = 0
        while len(arr) > 0 :
            aa = arr[0] - ii
            if aa > 0:
                ss = ss + aa
            arr.remove(arr[0])
            ii = ii + 1
        print(ss%1000000007)    
except Exception :
    pass