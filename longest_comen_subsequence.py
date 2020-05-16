def  lcs(str1 ,str2):
    l1 = len(str1)
    l2 = len(str2)
    l =[[None]*(l2+1) for i in range(l1+1)]
    
    for i in range(l1+1):
        for j in range(l2+1):
            if i==0 or j ==0:
                l[i][j]=0
            elif str1[l1-1]==str2[l2-1]:
                l[i][j]= l[i-1][j-1]+1
            else :
                l[i][j] = max(l[i][j-1] ,l[i-1][j])
    
    return l


S1= "AGGTAB"
S2="GXTXAYB"
print(lcs(S1,S2))    
