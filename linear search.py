def linear_search(arr, target):
    for i, roll_number in enumerate(arr):
        if roll_number == target:
            return i # Found
    return -1 # Not found
def sentinel_search(arr, target):
    n = len(arr)
    last_element = arr[-1]
    arr[-1] = target # Set senƟnel value
    i = 0
    while arr[i] != target:
        i += 1
        arr[-1] = last_element # Restore the original last element
    if i < n - 1 or arr[n - 1] == target:
        return i # Found
    return -1 # Not found
roll_numbers = [101, 102, 105, 107, 109, 112, 115]
target_roll = 107
linear_result = linear_search(roll_numbers, target_roll)
sentinel_result = sentinel_search(roll_numbers, target_roll)
if linear_result != -1:
    print(f"Linear Search: Student with roll number {target_roll} attended the training program at index{linear_result}")
else:
    print(f"Linear Search: Student with roll number {target_roll} did not attend the training program.")
if sentinel_result != -1:
    print(f"SenƟnel Search: Student with roll number {target_roll} attended the training program at index{sentinel_result}")
else:
    print(f"SenƟnel Search: Student with roll number {target_roll} did not attend the training program.")