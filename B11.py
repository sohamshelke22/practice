stud_list=[10,20,30,40]
target=int(input("Ënter the roll number of student to check."))

def linearsearch(arr,target): #-----------------------------------------------------------------time complexity=O(n)
    flag=0
    for i in range(len(arr)):
        if(arr[i]==target):
            flag=1
            break
    if(flag==1):
        print("Student found at index: ",i)
    else:
        print("Student not found")

    
def sentinelsearch(arr,target):
    n=len(arr)
    last=arr[n-1]
    arr[n-1]=target
    i=0
    while(arr[i]!=target):
        i+=1
    arr[n-1]=last
    if(i<n-1 or arr[n-1]==target):
        print("Student found at index: ",i)
    else:
        print("Student not found")

def binarysearch(arr,low,high,target):
    n=len(arr)
    flag=0
    if(low<=high):
        mid=(low+high)//2
        if(arr[mid]==target):
            return mid
        elif(target<arr[mid]):
            return binarysearch(arr,low,mid-1,target)
        else:
            return binarysearch(arr,mid+1,high,target)
    return -1

def fibonacciisearcch(arr,target,n):
    n=len(arr)
    fib2=0
    fib1=1
    fib=fib2+fib1
    while(fib<n):
        fib2=fib1
        fib1=fib
        fib=fib2+fib1
    offset=-1

    while(fib>1):
        i=min(offset+fib2,n-1)
        if arr[i] < target:

            fib=fib1
            fib1=fib2
            fib2=fib-fib1
            offset=i

        elif arr[i] > target:

            fib=fib2
            fib1=fib1-fib2
            fib2=fib-fib1

        else:
            return i

    if fib1 and offset+1<n and arr[offset+1]==target:
        return offset+1
    
    return -1

        
    

ch=int(input("----------------------MENU-----------------------\n1.Linear Search.\n2.Sentinel search.\n3.Binary search.\n4.fibonaci search\n5.exit"))
if(ch==1):
    linearsearch(stud_list,target)
elif(ch==2):
    sentinelsearch(stud_list,target)
elif(ch==3):
    print("Student found at index: ",binarysearch(stud_list,0,len(stud_list)-1,target))
elif(ch==4):
    print(fibonacciisearcch(stud_list,target,len(stud_list)))
elif(ch==5):
    print("Exiting...")



