a=[]
num=int(input("Enter Total Number Of Students: "))
for i in range(num):
    value=int(input("Enter The Student's Percentage:"))
    a.append(value)
    b=list(a)
for i in range(num-1):
    for j in range(num-i-1):
        if(a[j]>a[j+1]):
            temp1=a[j]
            a[j]=a[j+1]
            a[j+1]=temp1
for i in range(len(a)):
    for j in range(i+1,len(b)):
        if(b[i]>b[j]):
            temp2=b[i]
            b[i]=b[j]
            b[j]=temp2
print("The Result Of Students In BubbleSort Is:",a)
print("The Result Of Students In SelectionSort Is:",b)
print("Top Five Marks are:")
print(*a[::-1],sep="->")