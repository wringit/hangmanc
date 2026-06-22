#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// static = current file only


struct Game {
    char *word;
    char *guessedWord;
    char *wrongLetters;
    int guesses;
};


int main() {
    printf("Hi welcome to my amazing hangman game");
    const char *words[] = {"stuck", "mask", "clocking", "strappy", "plums"};
    return 0;
}

bool newGame(char* words[]) {
    struct Game game;
    game.word = chooseWord(words);
    while (strcmp(game.word,game.guessedWord) != 0){
        game.guessedWord = calloc(sizeof(game.word)/sizeof(game.word[0]),sizeof(game.word[0]));
        char guess[20];

        printf("Guess a letter or letter(s)");
        
        fgets(guess, sizeof(guess),stdin);
    }
    return false;
}

char *chooseWord(char *words[]) {
    int numberOfWords = sizeof(words)/sizeof(words[0]);
    int wordIndex = rand()%numberOfWords;
    char *word = words[wordIndex];
    return word;
}