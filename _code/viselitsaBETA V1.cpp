#include <iostream>
#include <string>
using namespace std;

int main() {
    int mistakes = 0;               //mistake counter
    int word_size = 0;              //word lenght
    cout << "Type the amount of letters in the word you made: "; 
    cin >> word_size; 
    string word = "";
    cout << "Type the word: ";
    cin >> word;
    string guessed_letters = "-";               //Theres guessed letters will appear
    for (int i = 1; i < word_size; i ++) {
        guessed_letters += "-";             //Making the string with needed lenght
    }
    cout << endl << "The acceptable number of errors ─ 10. Game starts now!" << endl << guessed_letters << endl;

    while (mistakes < 10) {             //game ends if you mistake 10 times
        string letter = "";
        cout << "The letter?  "; 
        cin >> letter;
        int position = word.find(letter);             //returns the position of the found letter. 
        if ((0 <= position) and (position < word_size)) {             //if the position is in range, that means there IS the letter
            guessed_letters[position] = word[position];               //inserting the letter in the answer
            cout << "Correct: " << guessed_letters << endl; 
        } else {
            mistakes ++;            //No letter, mistake count increased
            cout << "Theres no such letter! Your mistake count is " << mistakes << endl;
        }
    }
cout << "Game have ended!";
}
