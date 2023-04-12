#pragma once
#include <iostream>

//Need user input validation in order to check if user input is valid
void addFunc();
char userSelectedOperator; 
int x;
int y;

void userInput() {
	std::cout << "Please enter a number: ";
	std::cin >> x;
	std::cout << "Please enter your operation +,-,/,*: ";
	std::cin >> userSelectedOperator;
	std::cout << "Please enter another number: ";
	std::cin >> y;
}

void addFunc()
{

	std::cout << "Your answer is: " << x + y << std::endl;
}

void subFunc()
{
	std::cout << "Your answer is: " << x - y << std::endl;
}

void divFunc() //Prints quotient and remainder
{
	int leftOver = x % y;
	std::cout << "Your answer is: " << x / y << std::endl;
	if (leftOver > 0) {
		std::cout << "Remainder is: " << leftOver;
	}
}

void mulFunc()
{
	std::cout << "Your answer is: " << x * y << std::endl; 
}

void arithmeticFunc() //Does math operation based on selected operator
{
	if (userSelectedOperator == '+') {
		 addFunc();
	}
	else if (userSelectedOperator == '-') {
		 subFunc();
	}
	else if (userSelectedOperator == '*') {
		 mulFunc();
	}
	else if (userSelectedOperator == '/') {
		 divFunc();
	}
}

/*userInput Validation function here*/
