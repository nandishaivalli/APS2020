#find e^x
x = 5
e = 1
f = 1
for i in range(1,10):
    f=f*i
	tmp = tmp*x/f
    s = s+tmp
print(s)    
    