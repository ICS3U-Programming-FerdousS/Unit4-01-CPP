// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: April. 19, 2022
// This program asks the user to enter a positive number
// and then uses a loop to calculate and display the sum
// of all numbers from 0 until that number also, displaly invlid input


#include <iostream>

#include <string>

int main() {
  // initialize the loop counter and sum
  int counter = 0;
  int sum = 0;
  std::string user_num_string;
  int user_num_int;

  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> user_num_string;
  std::cout << std::endl;

  // convert user input from string to integer
  try {
        user_num_int = std::stoi(user_num_string);
         // run loop
         while (counter <= user_num_int) {
           sum = sum + counter;
           std::cout << "Tracking " << counter << " times through the loop.\n";
           counter = counter + 1;
  }
  // display the sum to the user
  std::cout << "\nThe sum of the numbers from 0 to " <<user_num_int
  <<" is: " << sum << std::endl;
}
  // catch invalid input
  catch (std::invalid_argument) {
      std::cout <<"Invalid input" << std::endl;
}
        // check if user input number is above positve or negative
        if (user_num_int < 0) {
            std::cout <<"input was not a positive number" << std::endl;
        }
}
