
my_dict = {}

def add_entry(key, value):
    my_dict[key] = value

# Function to display the dictionary
def display_dict():
    print("Dictionary Contents:")
    for key, value in my_dict.items():
        print(f"{key}: {value}")

# Add key-value pairs to the dictionary
add_entry('name', 'John')
add_entry('age', 30)
add_entry('city', 'New York')

# Print the dictionary
display_dict()
