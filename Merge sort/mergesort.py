
def merge(arrX,arrY,array):
    i=0
    while len(arrX) and len(arrY):
        x=arrX[0]
        y=arrY[0]
        if x<y:
            array[i]=x
            arrX.pop(0)
        else:
            array[i]=y
            arrY.pop(0)
        i+=1
    for j in arrX:
        array[i]=j
        i+=1
    for j in arrY:
        array[i]=j
        i+=1    
    return array

def mergeSort(array):
    length=len(array)
    if length<2:
        return array
    arrX=mergeSort(array[:length//2])
    arrY=mergeSort(array[length//2:])
    return merge(arrX,arrY,array)


print(mergeSort([8,7,6,5,4,3,12]))
#print(merge([1,2,8],[1,4,6],[9,10,11,12,13,14]))