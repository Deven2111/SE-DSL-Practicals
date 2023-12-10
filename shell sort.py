def shellSort(array, n):
    interval = n // 2
    while interval > 0:
        for i in range(interval, n):
            temp = array[i]
            j = i
            while j >= interval and array[j - interval] > temp:
                array[j] = array[j - interval]
                j -= interval
            array[j] = temp
            interval //= 2
arr = []
m = int(input("Enter number of students : "))
for i in range(0, m):
    ele = int(input())
    arr.append(ele)
size = len(arr)
print("Array Of Marks Before Sorting : ")
for i in range (size):
    print(arr[i])
shellSort(arr,size)
print("Array Of Marks After Sorting : ")
for i in range (size):
    print(arr[i])
arrMax = arr
arrMax.reverse()
print("Top 5 Marks In Class : ")
for i in range (0,5):
    print(arrMax[i])