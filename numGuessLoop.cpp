// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/15/2023
// This program generates a random
// number between 0 and 9.
// It uses a wile (true) loop to
// continue asking the user to guess
// the number, until they guess correctly.

#include<iostream>
#include<random>

int main() {
    // Initializing counter to 0.
    int counter = 0;

    // Declaring variables.
    int randomNumber;
    std::string userNumberAsString;

    // Generating a random number between 0 & 9.
    srand((unsigned)time(NULL));
    randomNumber = rand() % 9 + 0;

    // Explaining my program to the user.
    std::cout << "My program will generate a random number between 0 and 9.\n";
    std::cout << "Try to guess the correct number!\n";

    // Initiating while (true) loop.
    while (true) {
        // Get input from the user.
        std::cout
            << "Please enter your guess: ";
        std::cin >> userNumberAsString;

        // Initiating try catch.
        try {
            // Converting user input from a string to an integer.
            int userNumberAsInt = std::stoi(userNumberAsString);

            // Using an if statement to check if
            // the number guessed is in range of 0-9.
            if (userNumberAsInt>= 0 && userNumberAsInt <= 9) {
                // Using an if statement to see if the user guessed correctly.
                if (userNumberAsInt == randomNumber) {
                    std::cout <<
                    "You guessed correctly! The number was " << randomNumber;

                    // Using a break statement to exit the loop.
                    break;
                // Else tell the user their guess is wrong.
                // Display the times the loop ran.
                } else {
                    std::cout <<
                    "You guessed wrong. Guess again!\n";

                    // Incrementing the counter.
                    counter = counter + 1;

                    std::cout << "Tracking " <<
                    counter << " times through the loop.\n";

                }
            // Else tell the user that their number is not within the range.
            } else {
                std::cout << "Your number is not within the range of 0 to 9.";
                std::cout << " Please try again.";
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid input.";
        }
    }
}
