# https://www.urionlinejudge.com.br/judge/pt/problems/view/1284
##### FUNCTIONS #####
def filter(wordsdict, start):
    return [word for word in wordsdict if word.startswith(start)]


##### MAIN #####
wordsdict = ["hell", "hello", "heaven", "goodbye"]



for word in wordsdict:
    original = word
    pressed = 0
    start = word[0]
    word = word[1:]
    filtered_wordsdict=wordsdict.copy()

    while True:
        filtered_wordsdict = filter(filtered_wordsdict, start)
        pressed += 1
        start += word[0]
        word = word[1:]

        if len(word) == 0:
            break

        if len(filtered_wordsdict) == len(filter(filtered_wordsdict, start)):
            start += word[0]

    print(f"{original} = {pressed}")