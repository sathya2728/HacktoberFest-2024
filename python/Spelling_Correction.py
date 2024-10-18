from textblob import TextBlob

def convert_to_list(string):
    """Convert a string into a list of words."""
    return list(string.split())

# Get input from the user
input_string = input("Enter your sentence: ")
words = convert_to_list(input_string)
corrected_words = []

# Correct each word
for word in words:
    corrected_words.append(str(TextBlob(word).correct()))

# Display the results
print("Original words: ", words)
print("Corrected words: ", corrected_words)
