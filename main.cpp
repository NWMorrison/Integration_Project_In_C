#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// I use "std::" as practice in my code even though I am "using namespace std".

// Integration Project in C++
// Knowledge in C++: Under a Week
// Took my Integration Project from Python and brought it over to C++
  // For practice going into Programming 1 next semester.


// Improvements:
    // Work on the While loop in "initial_greeting() function"
       //* Figure out how to work around validating all inputs from user.

    // See if my code can be cleaned up at all.
      // Are there any glaring errors I am already making??
      // Could I be doing anything for QOA improvements?

void initial_greeting() {
    std::cout << "Hello! Welcome to Marty's Magical Carnival!\n";
    std::string x; // Assignment of a string to a value of "x".
    std::cout << "What is your name?";
    std::cin >> x; // Asks for user input to assign the typed in value to "x".
    std::cout << "Hello, " << x << " and welcome!\n"; // Uses user input to greet the user.
    std::cout << "Let us first buy you a ticket!\n" << "Depending on your age depends on how much your ticket costs.\n";
    std::cout << "Ages 25 and under and 65 and over are Free!\n" << "Ages 26-64 costs $1!\n";
    std::cout << "Ages 9 and under are not allowed in.\n";
    int y; // Assignment of an integer to the value of "y".
    std::cout << "How old are you?: \n";
    std::cin >> y; // Asks for user input to assign the typed in value to "y".

    // Want to go back and work on this loop as I learn more in C++, There are obvious errors in the code.
    while (y >= 0) {
        std::cout << "You may enter the carnival!\n";
        if (y > 65) {
            std::cout << "Your ticket is free!\n";
            break;}
        else if (y >= 25 and y <= 65) {
            std::cout << "Your ticket is $1.\n";
            break;}
        else if (y < 10) {
            std::cout << "Oh no! You are not old enough to enter.\n" << "Shh.. It will be our little secret :)\n";
            break;}}

    std::cout << "To be allowed inside my carnival, you must first solve a handful of math problems!\n";
    }

// Function for the first question of my math game.
void question_1() {
    int number_1 = 1;
    int number_2 = 3;
    int sum_question_1 = 4;
    std::string answer_1;
    cout << "Question 1\n" << "What is 3 + 1? " << "Type the appropriate uppercase letter. \n";
    cout << "A) 2   B) 3   C) 4   D) 5: ";
    std::cin >> answer_1;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_1 != "C") {
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 2   B) 3   C) 4   D) 5: \n";
        std::cin >> answer_1;}
    std::cout << number_1 + number_2 << " = " << sum_question_1 << "\n";
    std::cout << "Yes! The correct answer is C, 4!\n";
    }

void question_2() {
    int number_1 = 2;
    int number_2 = 3;
    int sum_question_2 = 6;
    std::string answer_2;
    std::cout << "Question 2\n" << "What is 3 x 2? " << "Type the appropriate uppercase letter. \n";
    std::cout << "A) 2   B) 4   C) 8   D) 6:";
    std::cin >> answer_2;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_2 != "D"){
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 2   B) 4   C) 8   D) 6:\n";
        std::cin >> answer_2;}
    std::cout << number_1 * number_2 << " = " << sum_question_2 << "\n";
    std::cout << "Yes! The correct answer is D, 6!\n";
    }

void question_3() {
    int number_1 = 2;
    int number_2 = 3;
    int sum_question_3 = 8;
    std::string answer_3;
    std:: cout << "Question 2\n" << "What is 2 to the power of 3? " << "Type the appropriate uppercase letter. \n";
    std::cout << "A) 8   B) 6   C) 5   D) 1: ";
    std::cin >> answer_3;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_3 != "A"){
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 8   B) 6   C) 5   D) 1:\n";
        std::cin >> answer_3;}
    pow(number_1, number_2);
    std::cout << "Yes! The correct answer is A, " << sum_question_3 << "!\n";
    }

void question_4() {
    int number_1 = 4;
    int number_2 = 16;
    std:: string answer_4;
    std::cout << "Question 4:\n" << "What is 16 divided by 4?" << "Type the appropriate uppercase letter. \n";
    std::cout << "A) 4   B) 8   C) 12   D) 16: ";
    std::cin >> answer_4;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_4 != "A"){
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 4   B) 8   C) 12   D) 16: \n";
        std::cin >> answer_4;}
    std::cout << number_2 / number_1 << "\nYes! The correct answer is A, 4!\n";
    }

void question_5() {
    int number_1 = 5;
    int number_2 = 26;
    std::string answer_5;
    std::cout << "Question 5:\n" << "What is the remainder of 26 divided by 5? ";
    std::cout << "Type the appropriate uppercase letter. \n";
    std::cout << "A) 2   B) 1   C) 3   D) 4: ";
    std::cin >> answer_5;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_5 != "B") {
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 2   B) 1   C) 3   D) 4: \n";
        std::cin >> answer_5;}
    std::cout << number_2 % number_1 << "\nYes! The correct answer is B, 1!\n";}

void question_6() {
    int number_1 = 7;
    int number_2 = 15;
    std:: string answer_6;
    std::cout << "Question 6:\n" << "What is 15 divided by 7 rounded down to the nearest whole number?";
    std::cout << "Type the appropriate uppercase letter\n" << "A) 2   B) 6   C) 5   D) 8: ";
    std::cin >> answer_6;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_6 != "A") {
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 2   B) 6   C) 5   D) 8: ";
        std::cin >> answer_6;}
    std::cout << number_2 / number_1 << "\nYes! The correct answer is A, 2!\n";}

void question_7() {
    int number_1 = 3;
    int number_2 = 4;
    std::string answer_7;
    std::cout <<  "Question 7:\n" << "What is 4 - 3?" << "Type the appropriate uppercase letter\n";
    std::cout << "A) 7   B) 1   C) 12   D) 10: ";
    std::cin >> answer_7;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_7 != "B") {
        std::cout << "That is the incorrect answer, please try again.\n" << "A) 7   B) 1   C) 12   D) 10: ";
        std::cin >> answer_7;}
    std::cout << number_2 - number_1 << "\nYes! The correct answer is B, 1!\n";}

void question_8() {
    int x = 4;
    int y = 4;
    std::string answer_8;
    std::cout << "Question 8:\n" << "X = 4, Y = 5, Z = 4:\n" << "Does X equal Z? ";
    std::cout << "Type the appropriate uppercase letter.\n" << "A) Yes   B) No:";
    std::cin >> answer_8;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_8 != "A") {
        std::cout << "Sorry, that is incorrect. Please try again.\n" << "A) Yes   B) No:";
        std::cin >> answer_8;}
    std::cout << x <<  " = " << y;
    std::cout << "\nYes! They are equal to each other!";}

void question_9() {
    int x = 4;
    int y = 5;
    std::string answer_9;
    std::cout << "Question 9:\n" << "X = 4, Y = 5, Z = 4:\n" << "Does X equal Y? ";
    std::cout<< "Type the appropriate uppercase letter.\n" << "A) Yes   B) No:";
    std::cin >> answer_9;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_9 != "B") {
        std::cout << "Sorry, that is incorrect. Please try again.\n" << "A) Yes   B) No:";
        std::cin >> answer_9;}
    std::cout << x << " Does not equal " << y;
    std::cout << "\nYes! They are not equal to each other!";}

void question_10() {
    int y = 5;
    int z = 6;
    std::string answer_10;
    std::cout << "Question 10:\n" << "X = 4, Y = 5, Z = 6:\n" << "Is X or Y greater than Z? ";
    std::cout << "Type the appropriate uppercase letter.\n" << "A)X is greater then Z   B)Y is greater than Z:";
    std::cin >> answer_10;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (answer_10 != "B") {
        std::cout << "Sorry, that is incorrect. Try again.\n" << "A)X is greater then Z   B)Y is greater than Z:";
        std::cin >> answer_10;}
    std::cout << z << " is greater than " << y << "\nYes! B is the correct answer!\n";}

void end_of_program() {
    std::cout << "Congratulations on passing all of the math questions! " << "You really are a bright cooke!\n";
    std::cout << "Now I am going to say a word associated with the carnival and you are going to fill in the blank.\n";
    string word_1 = "Cotton";
    string word_2 = "Candy";
    std::string cotton_candy_answer;
    std::cout << "When I say " << word_1 << ", you think of?" << "Type the appropriate word starting with uppercase.";
    std::cin >> cotton_candy_answer;
    // While loop to keep the user from incorrectly picking the wrong answer.
    // Asks the user again for the correct answer.
    while (cotton_candy_answer != "Candy") {
        std::cout << "No, that's not the right word. Try again.\n" << "When I say cotton, you think of and type?";
        std::cin >> cotton_candy_answer;}
    std::cout << word_1 + word_2 << "\n";
    std::cout << "\nYou guessed correctly!";
    std::cout << "\nThank you for playing!";}

int main() {
    initial_greeting();
    question_1();
    question_2();
    question_3();
    question_4();
    question_5();
    question_6();
    question_7();
    question_8();
    question_9();
    question_10();
    end_of_program();

    return 0;
}
