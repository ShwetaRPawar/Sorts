n=input("num:")
l=[]
for i in range(0,n):
	num=input("numbers:")
	l.append(num)
print(l)

for i in range(0,n):
	for j in range(0,n-1):
		if(l[j]>l[j+1]):
			temp=l[j+1]
			l[j+1]=l[j]
			l[j]=temp
print("sorted array:")
for i in range(0,n):
	print(l[i])
