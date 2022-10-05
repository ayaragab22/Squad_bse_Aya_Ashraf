import random
wordsList = ['potato','watermelon','banana','dog',
             'panda','monday','penguin']
word = random.choice(wordsList)
guess = [] #array that contains the letters of the word in each index
length = len(word)
limit=8 #number of tries
display=[] #ely haytna2al feeha el guesses el sa7 w hayt3mlha print
guessedletters=[] #array feeha kol el letters ely btd5ol 3shan el user mayd5lsh haga marteen
for i in word:
    guess.append(i)
for i in range(length):
    display.append("_")
while limit >= 1 :
    print(display)
    flag2 =True
    letter=input("Enter a letter: ")
    """if len(letter)>1:
        raise Exception("Please enter only one letter")""" #Exception bas bywa2af el code 5ales
    letter = letter.lower()
    if letter in guessedletters:
        print("you already entered this letter, try another one")
        continue
    else:
        guessedletters.append(letter)
        for i in guess:
            if letter==i:
                flag2 = False
                index = guess.index(i)
                display[index]=letter
                guess[index] = 0
                length-=1
    if flag2:
        limit -=1
        print("Wrong guess, you have " + str(limit) + " guesses left")
    if length==0:
        print("Congrats, you guessed the word " + word + " Correctly !")
        break
if limit <=0:
    print("You have ran out of guesses!")