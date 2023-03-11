#Bubble sort
# run the code 
#input the number list to be sorted with spaces


#---------------------------------------------
#import time
#start_time = time.time()


def bubbleSort(arr):
    while True:
        count=0
        for i in range(1,len(arr)):
            if arr[i-1]>arr[i]:
                arr[i],arr[i-1]=arr[i-1],arr[i]
                count=1       
        if not count :
            break 
    return arr



#optimized version

def bubbleSort2(arr):
    nonSortedArea=len(arr)
    while True:
        count=0
        for i in range(1,nonSortedArea):
            if arr[i-1]>arr[i]:
                arr[i],arr[i-1]=arr[i-1],arr[i]
                count=1
                limit = i
        nonSortedArea=limit        
        if not count :
            break 
    return arr



list1=list(map(int,input().strip().split()))
print(*bubbleSort2(list1))



#print("--- %s seconds ---" % (time.time() - start_time))
