/*
Jonathon Irizarry
COSC-1436-57001
Repl.it IDE
This program takes a number input from a user and then does multiple calculations while keeping track of the amount of times the program runs with a counter. The number negative one will exit the program.
 */

#include <iostream>
#include<iomanip>
#include "Input_Validation_Extended.h"

#include<string>
#include<sstream> 
using namespace std;

int main() {
  int counter = 0; //counter var
  double num = 0.0; 

  while(num != -1.0)//exit condition
  {
    cout << "\nEnter a number with or without decimals (-1 exits the program): ";//output
    num = validateDouble(num);//input and below is output
    if(num == -1.0){ //Condition used to exit before calculation of -1
      break;
    } else {
      /*Using the input number, "0" results in the second calculation (division) to output -nan or character "J" resulting in std::exception: Invalid input.*/
      cout << num << " x " << num << " = " << num * num << "\n";
      cout << num << " / " << num << " = " << num / num << "\n";
      cout << "(" << num << " + " << "3)/5" << " = " << (num + 3) / 5 << "\n";
      cout << "[(" << num << " + " << "3)/5)" << " + ";
      cout << "(" << num << " + " << "7)/2)]" << " = " << (((num + 3) / 5) + ((num + 7) / 2)) << "\n";

      counter++;//increment counter
    }
  }
cout << "\nThis program ran a total of " << counter << " times!" << endl;//amount ran output
}