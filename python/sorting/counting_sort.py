def counting_sort(arr):
    if not arr:
        return arr

    # 1. Find the max element
    max_val = max(arr)

    # 2. Create a count array of size (max_val + 1)
    count = [0] * (max_val + 1)

    # 3. Count each element
    for num in arr:
        count[num] += 1

    # 4. Build the sorted output
    sorted_arr = []
    for i in range(len(count)):
        sorted_arr.extend([i] * count[i])

    return sorted_arr


# Example
arr = [4, 2, 2, 8, 3, 3, 1]
print("Original:", arr)
print("Sorted:", counting_sort(arr))
