//*****************************************************************************************************
//the purpose of this code is to be a letter guessing game as project 2 in cmps 301.
//the user will be prompted to input how many games they would like to play and the requested amount
//will run. the program will indicate if the players letter guessed is too high or too low in the 
//alphabet. the player will have 5 guesses per game to win each game.
//*****************************************************************************************************

#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main() 
{
//declare variables///
    const int NUMBER_OF_GUESSES = 5; //constant number of chances player is allowed to guess per game
    int numOfGames = 0;
    int guessCountOne = 0; //guess count per game number
    int guessCountTwo = 0;
    int guessCountThree = 0;
    int guessCountFour = 0;
    char guess;
    char gameOne = 'J'; 
    char gameTwo = 'N';
    char gameThree = 'K';
    char gameFour = 'H';
    bool exitGame = false;
 
//introduction explaining the rules///
    cout << "Welcome to the Letter Guessing Game" << endl;
    cout << "You will enter the number of games you want to play (1-4 games)" << endl;
    cout << "You have 5 changes to guess each letter" << endl;
    cout << "Let's begin:" << endl;
    cout << "***************************************************************" << endl;
    cout << "Please enter the number of games you wish to play (1-4): ";
    cin >> numOfGames;
    cout << endl;

//GAME ONE///
    while ((guessCountOne <= 5) && (!exitGame))
    {
        cout << "********************" << endl;
        cout << "Game one" << endl;
        cout << "********************" << endl;
        cout << "Enter your guess: ";
        cin >> guess; // input players guess into guess variable
        guess = toupper(guess); //change user input to uppcase
        cout << endl;

        guessCountOne++; //add each input to the guess count
    
        if (guess == gameOne) //if guessed right player wins the individual game
        {
            cout << "Winner! You guess the correct letter." << endl;
            exitGame = true;
        }
    
        else if (guess < gameOne) //if the guess comes before the correct answer in the alphabet, give hint to player
            cout << "The correct letter comes after your guess in the alphabet, try again." << endl;
    
        else //if the guess comes after the correct answer in the alphabet, give hint to player
            cout << "The correct letter comes before your guess in the alphabet, try again." << endl;
    
        if ((guessCountOne == NUMBER_OF_GUESSES) && (guess != gameOne)) //if the guess count reached the max allowed guesses and did not guess correct: game over
        {
            cout << "Sorry you ran out of guesses. The correct answer is " << gameOne << "." << endl;
            exitGame = true;
        
        }

    }
//GAME TWO///

    exitGame = false; //set the exitGame function back to false to continue with loops as needed

    while ((guessCountTwo <= 5) && (!exitGame) && numOfGames > 1) //if the guess count is less than or equal to 5, the game did not exit, and the number of games request is more than 1: loop
    {   
        cout << "********************" << endl;
        cout << "Game Two" << endl;
        cout << "********************" << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        cout << endl;

        guessCountTwo++;
    
        if (guess == gameTwo)
        {
            cout << "Winner! You guess the correct letter." << endl;
            exitGame = true;
        }
    
        else if (guess < gameTwo)
            cout << "The correct letter comes after your guess in the alphabet, try again." << endl;
    
        else
            cout << "The correct letter comes before your guess in the alphabet, try again." << endl;
    
        if ((guessCountTwo == NUMBER_OF_GUESSES) && (guess != gameTwo))
        {
            cout << "Sorry you ran out of guesses. The correct answer is " << gameTwo << "." << endl;
            exitGame = true;
        }
    }

    exitGame = false;

//GAME THREE/// 
    while ((guessCountThree <= 5) && (!exitGame) && numOfGames > 2) //if the guess count is less than or equal to 5, the game did not exit, and the number of games request is more than 2: loop
    {   
        cout << "********************" << endl;
        cout << "Game Three" << endl;
        cout << "********************" << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        cout << endl;

        guessCountThree++;
    
        if (guess == gameThree)
        {
            cout << "Winner! You guess the correct letter." << endl;
            exitGame = true;
        }
    
        else if (guess < gameThree)
            cout << "The correct letter comes after your guess in the alphabet, try again." << endl;
    
        else
            cout << "The correct letter comes before your guess in the alphabet, try again." << endl;
    
        if ((guessCountThree == NUMBER_OF_GUESSES) && (guess != gameThree))
        {
            cout << "Sorry you ran out of guesses. The correct answer is " << gameThree << "." << endl;
            exitGame = true;
        }
    }

//GAME FOUR///
    exitGame = false;

    while ((guessCountFour <= 5) && (!exitGame) && numOfGames > 3) //if the guess count is less than or equal to 5, the game did not exit, and the number of games request is more than 3: loop
    {   
        cout << "********************" << endl;
        cout << "Game Four" << endl;
        cout << "********************" << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        cout << endl;

        guessCountFour++;
    
        if (guess == gameFour)
        {
            cout << "Winner! You guess the correct letter." << endl;
            exitGame = true;
        }
    
        else if (guess < gameFour)
            cout << "The correct letter comes after your guess in the alphabet, try again." << endl;
    
        else
            cout << "The correct letter comes before your guess in the alphabet, try again." << endl;
    
        if ((guessCountFour == NUMBER_OF_GUESSES) && (guess != gameFour))
        {
            cout << "Sorry you ran out of guesses. The correct answer is " << gameFour << "." << endl;
            exitGame = true;
        }
    }

    return 0;

}
