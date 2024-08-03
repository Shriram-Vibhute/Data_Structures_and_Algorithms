def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1, 0, -1):
        '''
        For Descending order 
        for j in range(i + 1, n):
            if arr[j] >= arr[i]:
            arr[i], arr[j] = arr[j], arr[i]
        '''
        for j in range(i-1, -1, -1):
            if arr[i] <= arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
        
    return arr

# Example usage
arr = [4, 3, 1, 2, 89, -45, 56, 98, 100, 10, 87]
sorted_arr = bubble_sort(arr)
print(' '.join(map(str, sorted_arr)))