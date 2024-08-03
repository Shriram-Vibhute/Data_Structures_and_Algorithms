def insertion_sort(arr: list) -> list:
    
    for i in range(1, len(arr)):
        curr_num = arr[i] # Storing the current number

        j = i - 1
        while j >= 0:
            if curr_num < arr[j]:
                arr[j + 1] = arr[j]
            else:
                arr[j + 1] = curr_num
                break
            j -= 1
        
        if j == -1:
            arr[j + 1] = curr_num
    
    return arr

print(insertion_sort([5,2,3,4,1]))