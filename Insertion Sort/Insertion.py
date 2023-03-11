#Insertion sort
# run the code 
#input the number list to be sorted with spaces



def insertionSort(arr):
    for i in range (1,len(arr)):
        key=arr[i]
        point=i-1
        while point>=0 and arr[point]>key:
            arr[point+1]=arr[point]
            point-=1
        arr[point+1]=key

    return arr



list1=list(map(int,input().strip().split()))
print(insertionSort(list1))