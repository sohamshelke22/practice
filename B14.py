# arr=[2,7,9,1,99,55]
# n=len(arr)

arr=[]
n=int(input("Enter number of elements."))
print("Enter elements: ")
for ele in range(0,n):
    ele=float(input())
    arr.append(ele)
print(arr)


def bubblesort(arr):                               #O(n^2)     
    for j in range(n):
        for i in range(n-1):
            if(arr[i]>arr[i+1]):
                arr[i],arr[i+1]=arr[i+1],arr[i]
    return arr



def selectionsort(arr):
    for i in range(n-1):                            #O(n^2)
        min=i
        
        for j in range (i+1,n):
            if(arr[j]<arr[min]):
                min=j
        if(min!=i):
            arr[i],arr[min]=arr[min],arr[i]
    return arr

def insertionsort(arr):
    for i in range(1,n):
        key=arr[i]
        j=i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=key
    return arr

def shellsort(arr):
    gap=n//2
    while gap>0:
        for i in range(gap,n):
            temp=arr[i]
            j=i
            while j>=gap and arr[j-gap]>temp:
                arr[j]=arr[j-gap]
                j=j-gap
            arr[j]=temp
        gap=gap//2
    return arr

def top5(arr):
    print("Top 5 scores: ")
    for ele in range(-1,-6,-1):
        print(arr[ele])


        




print(bubblesort(arr))
print(selectionsort(arr))
print(insertionsort(arr))
a=shellsort(arr)
print(a)
top5(a)