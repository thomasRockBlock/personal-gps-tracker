#include <iostream>
#include <string>

int main(){
  int number = 12;
  std::cout << number;

  //hello this is a comment

  int integerType = 67;
  double doubleType = 123.45678;
  float floatType = 123.45678f;

  std::cout.precision(10);
  std::cout << integerType << '\n';
  std::cout << doubleType << '\n';
  std::cout << floatType << '\n';

  char charType = 'H';
  std::string stringType = "Hello";

  std::cout << charType << '\n';
  std::cout << stringType << '\n';

  int number1, number2;

  std::cout << "Enter number 1:" << '\n';
  std::cin >> number1;
  std::cout << "Enter number 2:" << '\n';
  std::cin >> number2;

  int sum = number1 + number2;
  std::cout << "here is the sum of your 2 numbers" << '\n' << sum << '\n';

  int difference = number1 - number2;
  std::cout << "here is the difference" << '\n' << difference << '\n';

  int product = number1 * number2;
  std::cout << "here is the product" << '\n' << product << '\n';

  double quotient = static_cast<double>(number1) / number2;
  std::cout << "here is the quotient" << '\n' << quotient << '\n';

  int singleDigit;

  std::cout << "Enter a single digit" << '\n';
  std::cin >> singleDigit;

  if (singleDigit > 0) {
    std::cout << "Your value is positive" << '\n';
  }
  else if (singleDigit == 0) {
    std::cout << "Your value is 0" << '\n';
  }
  else {
    std::cout << "Your value is negative" << '\n';
  }

  //q4
  for (int i = 1; i <= 10; i++) {
    std::cout << i << '\n';
  }

  //q5
  int userInputNumber;

  std::cout << "Enter a number" << '\n';
  std::cin >> userInputNumber;

  while (userInputNumber != 0) {
    std::cout << userInputNumber << '\n';
    std::cout << "Enter a number" << '\n';
    std::cin >> userInputNumber;
  }

  std::cout << "Your number = 0" << '\n';

  //q6
  int howManyNumbers;

  std::cout << "How many numbers do you want to sum" << '\n';
  std::cin >> howManyNumbers;

  int total = 0;

  for (int i = 1; i <= howManyNumbers; i++) {
    int newNumber;
    std::cout << "Enter number to add" << '\n';
    std::cin >> newNumber;

    total = total + newNumber;
  }

  std::cout << "Your total is " << total << '\n';

  return 0;
}