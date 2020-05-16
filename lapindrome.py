

for i in range(int(input())):
    n=input()
    f=n[0:len(n)//2:]
    if(len(n)&0==0):
        a=len(n)//2
    else:
        a=(len(n)//2)+1
    s=n[a:len(n)]
    dict1={}
    dict2={}
    for i in f:
        if i in dict1:
            dict1[i]+=1
        else:
            dict1[i]=1
    for i in s:
        if i in dict2:
            dict2[i]+=1
        else:
            dict2[i]=1
    if (dict1.items()==dict2.items()):
        print("YES")
    else:
        print("NO")
            
            
