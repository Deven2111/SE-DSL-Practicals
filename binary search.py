def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == target:
            return True
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return False
def fibonacci_search(arr, target):
    def fibonacci_numbers(n):
        fib = [0, 1]
        while fib[-1] < n:
            fib.append(fib[-1] + fib[-2])
            return fib
    fib = fibonacci_numbers(len(arr))
    offset = -1
    while fib:
        i = min(offset + fib.pop(), len(arr) - 1)
        if arr[i] < target:
            fib.pop()
            offset = i
        elif arr[i] > target:
            continue
        else:
            return True
        return False
student_roll_numbers = [10, 20, 30, 40, 50, 60, 70, 80, 90]
student_to_find = 40
found_binary = binary_search(student_roll_numbers, student_to_find)
found_fibonacci = fibonacci_search(student_roll_numbers, student_to_find)
if found_binary:
 print(f"Binary_Search: Student with roll number {student_to_find} attended the training program ")
else:
 print(f"Binary_Search: Student with roll number {student_to_find} did not attend the training program")
if found_fibonacci:
 print(f"Fibonaaci_Search: Student with roll number {student_to_find} attended the training program.")
else:
 print(f"Fibonaaci_Search: Student with roll number {student_to_find} did not attend the training program.")