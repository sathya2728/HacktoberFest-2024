def insertion_sort(arr):
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
        key = arr[i]  # The element to be inserted
        j = i - 1

        # Move elements of arr[0..i-1], that are greater than key, to one position ahead
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]  # Shift element to the right
            j -= 1
        arr[j + 1] = key  # Insert the key at the correct position

        # Print the current state of the array
        print(f"After inserting {key}: {arr}")

# Example usage
if __name__ == "__main__":
    sample_array = [12, 11, 13, 5, 6]
    print("Original array:", sample_array)
    insertion_sort(sample_array)
    print("Sorted array:", sample_array)
