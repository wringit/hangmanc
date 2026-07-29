#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
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

// Method that modifies game.guessedWord
void checkUpdateGuess(struct Game game, char* guess) {
    char* wordSegment = game.word;
    for (int i = 0; guess[i] != NULL; i++) {
        while (wordSegment != NULL) {
            wordSegment = strchar(wordSegment, guess[i]);
            game.guessedWord[wordSegment-game.word] = guess[i];
        }
    }
}

char* chooseWord(char *words[]) {
    int numberOfWords = sizeof(words)/sizeof(words[0]);
    int wordIndex = rand()%numberOfWords;
    char *word = words[wordIndex];
    return word;
}