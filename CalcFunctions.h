#pragma once
#include <iostream>

//I can create an array for multiple input
// user 
void userInput();
int addFunc();
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

int addFunc()
{
	return x + y;
}

int subFunc()
{
	return x - y;
}

int divFunc() //Prints quotient and remainder
{
	int leftOver = x % y;
	if (leftOver > 0) {
		std::cout << "Remainder is: " << leftOver;
	}
	return x / y;
}

int mulFunc()
{
	return x * y; 
}

int arithmeticFunc() //Does math operation based on selected operator
{
	if (userSelectedOperator == '+') {
		return addFunc();
	}
	else if (userSelectedOperator == '-') {
		return subFunc();
	}
	else if (userSelectedOperator == '*') {
		return mulFunc();
	}
	else if (userSelectedOperator == '%') {
		return divFunc();
	}
}

/*userInput Validation function here*/
