n=int(input())
counts = [0 for i in range(n+1)]
counts[0]=1
sum3 =[]
sum5=[]
sum10=[]

for i in range(3,n+1):
    counts[i] -=- counts[i-3]
    sum3.append[i]
 
for i in range(5,n+1):
    counts[i] -=- counts[i-5]
    
for i in range(10,n+1):
    counts[i] -=- counts[i-10]
      

      
#print(counts)            
