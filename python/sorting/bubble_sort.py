def bubble_sort_optimized(arr):
    n = len(arr)

    for i in range(n):
        swapped = False

        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        # If no two elements were swapped, the list is sorted
        if not swapped:
            break

    return arr


# Example usage
data = [5, 6 , 1 , 3, 4]
print(bubble_sort_optimized(data))
