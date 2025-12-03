def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        # Assume the current position has the minimum
        min_index = i

        # Find the index of the minimum element
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap only if needed (optimization)
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr


# Example usage
data = [64, 25, 12, 22, 11]
sorted_data = selection_sort(data)
print("Sorted array:", sorted_data)
