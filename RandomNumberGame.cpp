/*
 * RandomNumberGame.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: Djharts
 */

//File: guess me
//Description: random number game
//Programmer: Alec Goldenberg
//Date: 2/16/2017
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;
using std::cout;

int main()
{
   srand(time(NULL));

   //initalize variables
   int lives = 5;
   int range = 15 - 1 + 1;
   int randNum = rand() % range + 1;
   std::string input = "0";
   int guess = 0;
   int difficulty = 0;

   do {
      cout << "\nWhat difficulty would you like to play at?" << endl;
      cout << "Easy (1-15)" << endl;
      cout << "Medium (1-30)" << endl;
      cout << "Hard (1-50)" << endl;
      cin >> difficulty;

      if (difficulty < 1)
      {
         cout << "\nThat's not a valid difficulty level" << endl;
      } else if (difficulty > 3) {
         cout << "\nThat's not a valid difficulty level" << endl;
      } else if (difficulty == 1) {
         goto Level1;
      } else if (difficulty == 2) {
         goto Level2;
      } else if (difficulty == 3) {
         goto Level3;
      }
   } while (difficulty < 1 || difficulty > 3);

   Level1:
   while (guess != randNum) {
   start1:
      cout << "\nYou have " << lives << " chances to live" << endl;

      cout << " \nGuess a number between 1 and 15 " << endl;
      cin >> input;

      if (input == "dog")
      {
         cout << "\nBark" << endl;
         goto start1;
      }

      stringstream convert(input);
      convert >> guess;

      if (guess < 1)
      {
         cout << "\nThat number is impossible" << endl;
      } else if (guess > 15) {
         cout << "\nThat number is impossible" << endl;
      } else if (guess != randNum){
         lives--;
         cout << "\nThat is incorrect." << endl;
      }

      if (guess < randNum)
      {
         cout << "\nTry higher" << endl;
      } else if (guess > randNum) {
         cout << "\nTry lower" << endl;
      }

      if (lives == 0)
      {
         goto end1;
      }
   }



   end1:
   if (guess != randNum) {
      if (lives == 0){
         cout << "\nYou failed, you suck" << endl;
         guess = randNum;
      } else {
         cout << "\nYou are correct!" << endl;
         cout << "\nGAME OVER" << endl;
         guess = randNum;
      }
   }

   Level2:
   while (guess != randNum) {
   randNum = rand() % 30 + 1;
   start2:
      cout << "\nYou have " << lives << " chances to live" << endl;

      cout << " \nGuess a number between 1 and 30 " << endl;
      cin >> input;

      if (input == "dog")
      {
         cout << "\nBark" << endl;
         goto start2;
      }

      stringstream convert(input);
      convert >> guess;

      if (guess < 1)
      {
         cout << "\nThat number is impossible" << endl;
      } else if (guess > 30) {
         cout << "\nThat number is impossible" << endl;
      } else if (guess != randNum){
         lives--;
         cout << "\nThat is incorrect." << endl;
      }

      if (guess < randNum)
      {
         cout << "\nTry higher" << endl;
      } else if (guess > randNum) {
         cout << "\nTry lower" << endl;
      }

      if (lives == 0)
      {
         goto end2;
      }


   }

   end2:
   if (guess != randNum) {
      if (lives == 0){
         cout << "\nYou failed, you suck" << endl;
         guess = randNum;
      } else {
         cout << "\nYou are correct!" << endl;
         cout << "\nGAME OVER" << endl;
         guess = randNum;
      }
   }
   Level3:
   while (guess != randNum) {
   randNum = rand() % 50 + 1;
   start3:
      cout << "\nYou have " << lives << " chances to live" << endl;

      cout << " \nGuess a number between 1 and 50 " << endl;
      cin >> input;

      if (input == "dog")
      {
         cout << "\nBark" << endl;
         goto start3;
      }

      stringstream convert(input);
      convert >> guess;

      if (guess < 1)
      {
         cout << "\nThat number is impossible" << endl;
      } else if (guess > 50) {
         cout << "\nThat number is impossible" << endl;
      } else if (guess != randNum){
         lives--;
         cout << "\nThat is incorrect." << endl;
      }

      if (guess < randNum)
      {
         cout << "\nTry higher" << endl;
      } else if (guess > randNum) {
         cout << "\nTry lower" << endl;
      }

      if (lives == 0)
      {
         goto end3;
      }


   }

   end3:
   if (guess != randNum) {
      if (lives == 0){
         cout << "\nYou failed, you suck" << endl;
         guess = randNum;
      } else {
         cout << "\nYou are correct!" << endl;
         cout << "\nGAME OVER" << endl;
         guess = randNum;
      }
   }


   return 0;
}




