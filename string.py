def longest_word(input_string):
    words = input_string.split()
    return max(words, key=len)
def char_frequency(input_string, char):
    return input_string.count(char)
def is_palindrome(input_string):
    return input_string == input_string[::-1]
def first_appearance(input_string, substring):
    return input_string.find(substring)
def word_occurrences(input_string):
    words = input_string.split()
    word_count = {}
    for word in words:
        word_count[word] = word_count.get(word, 0) + 1
    return word_count
input_string = "Python programming is fun and python is easy"
print("Longest word:", longest_word(input_string))
print("Frequency of 'p' in the string:", char_frequency(input_string, 'p'))
print("Is the string a palindrome:", is_palindrome(input_string))
print("Index of 'is':", first_appearance(input_string, 'is'))
print("Word occurrences:", word_occurrences(input_string))