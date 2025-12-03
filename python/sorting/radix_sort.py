def counting_sort_for_radix(arr, exp):
    n = len(arr)
    
    # Output array
    output = [0] * n
    
    # Count array for digits (0–9)
    count = [0] * 10

    # Count occurrences of digits
    for num in arr:
        index = (num // exp) % 10
        count[index] += 1

    # Convert count[i] -> position in output
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Build output array (stable sort: traverse from right)
    for i in range(n - 1, -1, -1):
        index = (arr[i] // exp) % 10
        output[count[index] - 1] = arr[i]
        count[index] -= 1

    # Copy back to original array
    for i in range(n):
        arr[i] = output[i]


def radix_sort(arr):
    if not arr:
        return arr

    # Find maximum to know number of digits
    max_val = max(arr)

    # Apply counting sort for each digit place
    exp = 1
    while max_val // exp > 0:
        counting_sort_for_radix(arr, exp)
        exp *= 10


# Example
arr = [170, 45, 75, 90, 802, 24, 2, 66]
print("Original:", arr)
radix_sort(arr)
print("Sorted:", arr)
