import math
def find(a,b,c):
    """
    d1 = (a[0] - b[0])**2 +(a[1]-b[1])**2
    d2 = (a[0] - c[0])**2 +(a[1]-c[1])**2
    d3 = (c[0] - b[0])**2 +(c[1]-b[1])**2
    #print(d1,d2,d3)
    """
    #if (d1 == d3+d2):
    if (a[0] - b[0])**2 +(a[1]-b[1])**2 == (a[0] - c[0])**2 +(a[1]-c[1])**2 + (c[0] - b[0])**2 +(c[1]-b[1])**2 :  
        return True
    

    

test_case = int(input()) 
while test_case > 0 :
    n,m = map(int,input().split(" "))
    x = map(int,input().split(" "))
    y = map(int,input().split(" "))
    x=list(x)
    y=list(y)
    xpositive = []
    xnegative = []
    ypositive = []
    ynegative = []
    no_of_triangles = 0
    for e1 in x:
        if e1 >0:
            xpositive.append([e1,0])
        elif e1 < 0 :
            xnegative.append([e1,0]) 
    for e2 in y:   
        if e2 > 0:
            ypositive.append([0,e2])
        elif e2 < 0:
            ynegative.append([0,e2])  


#d1==d2+d3 or d2 ==d1+d3 or d3==d1+d2):
    for p in xnegative:
        for q in xpositive:
            for r in ypositive:
                if find(p,q,r) == True:
                    no_of_triangles -=-1
                    break 

    
    for p in xnegative:
        for q in xpositive:
            for r in ynegative:
                if find(p,q,r) == True:
                    no_of_triangles -=-1
                    break

    for p in ypositive :
        for q in ynegative:
            for r in xpositive:
                if find(p,q,r) == True:
                    no_of_triangles -=-1
                    break                

    for p in ypositive :
        for q in ynegative:
            for r in xnegative:
                if find(p,q,r) == True:
                    no_of_triangles -=-1 
                    break
    #print(xpositive,xnegative,ypositive,ynegative,end = "\n")
    """point= []
    for i in range(n):
        point.append([x[i],0])

    for i in range(m):
        point.append([0,y[i]])    
   
    tr = []
    """
   
    """
    for p in point:
        for q in point:
            for r in point:
                if p!=r and p!=q and q!=r:
                    if [p,q,r] not in tr and [r,p,q] not in tr and [q,p,r] not in tr and [p,r,q] not in tr and [r,q,p] not in tr and [q,r,p] not in tr:
                        tr.append([p,q,r])
                        
    
    for p in tr:
        if find(p[0],p[1],p[2]) == True:
            no_of_triangles-=-1
    #print(tr[0],tr[1],tr[2])
    print(no_of_triangles)
    #print(tr)
    
    """
    print(no_of_triangles)  

            
                    

    #print(point)
    
    

    
           

    test_case -=1    
        