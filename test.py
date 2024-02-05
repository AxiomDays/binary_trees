#!/usr/bin/python3
def find_longest_word(filename):
    with open(filename) as file:
        comp = ""
        words = file.read().split()
        for word in words:
            if len(word) > len(comp):
                comp = word
        return (comp)
    print(comp)

print(find_longest_word("file1.txt"))
