def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]          # element to be inserted
        j = i - 1

        # Move elements greater than key to one position ahead
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

    return arr
print(insertion_sort([5, 2, 9, 1, 5, 6]))
