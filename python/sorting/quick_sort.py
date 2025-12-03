def quick_sort(arr):
    # Base case: arrays with 0 or 1 element are already sorted
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]  # choose middle element as pivot

    left = [x for x in arr if x < pivot]
    mid  = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    return quick_sort(left) + mid + quick_sort(right)


# Example
arr = [10, 7, 8, 9, 1, 5]
print("Original:", arr)
sorted_arr = quick_sort(arr)
print("Sorted:", sorted_arr)
