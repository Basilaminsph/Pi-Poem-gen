import random

def generate pi:
    pi = "3.14159265"
     return pi


def load_words(filename):
    with open(filename, 'r') as file:
        words = file.readlines()
    return [word.strip() for word in words]


def generate_poem(words, pi_digits):
    poem = []
    for digit in pi_digits:
        word = random.choice(words)
        while len(word) != int(digit):
            word = random.choice(words)
        poem.append(word)
    return " ".join(poem)

if __name__ == "__main__":
   
    words = load_words("words.txt")
    
    # Generate digits of pi
    pi_digits = generate_pi()
    
    # Generate poem
    poem = generate_poem(words, pi_digits)
    print(poem)
