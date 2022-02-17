##### FUNCTIONS #####
def ranking(words, wordslist):
    words_qty = len(wordslist)
    chars_qty = len(words)
    average = (chars_qty//words_qty) if words_qty != 0 else 0

    if average <= 3:
        return 250

    elif average == 4 or average == 5:
        return 500

    else:
        return 1000


def word_analysis(word):
    if word.endswith("."):
        word = word[:len(word)-1]

    if word.count(".") > 1:
        return false

    elif word.isalpha():
        return True


def filter(wordslist):
    new_wordslist = [word for word in wordslist if word_analysis(word)]
    return new_wordslist


def main():
    problem = input()

    wordslist = problem.split(" ")
    wordslist = filter(wordslist)
    words = "".join(wordslist)
    rank = ranking(words, wordslist)
    print(f"{rank}\n")


##### MAIN #####
while True:
    try:
        main()
    except EOFError:
        break
