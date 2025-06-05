// Copyright (C) Chanella All rights reserved
// Created by Chanella
// Created on : June 1 2025
// This program counts the number of words in a sentence

# include <iostream>  // for input and output
# include <string>  // for using strings

int countwords(std::string sentence) {  // function to count words in a sentence
    int count = 0; // variable to hold the count of words 
    bool inword = false;  // to check if we are inside a word

    for (char letter : sentence) {  // counts each word in a sentence 
        if (letter != ' ' && inword == false) {  // if the letter is not a space and we are not in aword
            inword = true;  // we are in a word
            count += 1;  // increment the word count
        } else if (letter == ' ') {  // if the letter is a space
            inword = false;  //  now it's correct
        }
    }
    return count;  // return the total count of words
}
int main() {
    std::string sentence;  // it holds the input sentence
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);  // using getline to allow spaces
    // to read the entire sentence
    int wordcount = countwords(sentence);  // call the function to count words
    std::cout << "The number of words in the sentence is: " 
              << wordcount << std::endl;  // output the word count
} 