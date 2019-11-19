#include <iostream>
#include <string>
#include "Maximum_Function_Template.h"
#include "Add_Function_Template.h"
#include "Min_Function_Template.h"
#include "Multiply_Function_Template.h"
#include "Swap_Function_Template.h"

using namespace std;

int main() {
  unsigned int a=15,b=200;
  char j='a', k='z';
  string t = ("tyson");
  string m =("mcmillian ");
  int *pointer1,*pointer2;

  cout << "\nMaximum: " << endl;
  cout << "int: " << maximum(4, 5) << endl;//integer
  cout << "double :" << maximum(100.2, 5.5) << endl;//double 
  cout << "char: " << maximum('a','z') << endl; // char
  cout << "char: " << maximum(j,k) << endl;//char as variable
  cout <<"bool: " << maximum(true, false) << endl;//bool
  cout << "float:" << maximum(2.5,4.555) << endl;//float
  cout <<"unsigned int: " << maximum(a,b) << endl;//unsigned in passvariables as parameters
  cout << "string: " << maximum("tyson", "mcmillan") << endl; //string literal
  cout << "string: " << maximum(t,m) << endl; // string by variable


  cout << "\nAddition: " << endl;
  cout << "int: " << CAddition(4, 5) << endl;//integer
  cout << "double :" << CAddition(100.2, 5.5) << endl;//double 
  cout << "char: cannot be added." << endl; // char
  cout << "char: cannot be added." << endl;//char as variable
  cout << "bool: " << CAddition(true, false) << endl;//bool
  cout << "float:" << CAddition(2.5,4.555) << endl;//float
  cout << "unsigned int: " << CAddition(a,b) << endl;//unsigned in passvariables as parameters
  cout << "string: cannot be added." << endl; //string literal
  cout << "string: cannot be added." << endl; // string by variable
 
  
  cout << "\nMinimum: " << endl;
  cout << "int: " << CMin(4, 5) << endl;//integer
  cout << "double :" << CMin(100.2, 5.5) << endl;//double 
  cout << "char: " << CMin('a','z') << endl; // char
  cout << "char: " << CMin(j,k) << endl;//char as variable
  cout << "bool: " << CMin(true, false) << endl;//bool
  cout << "float:" << CMin(2.5,4.555) << endl;//float
  cout << "unsigned int: " << CMin(a,b) << endl;//unsigned in passvariables as parameters
  cout << "string: " << CMin("tyson", "mcmillan") << endl; //string literal
  cout << "string: " << CMin(t,m) << endl; // string by variable

  cout << "\nMultiply: " << endl;
  cout << "int: " << CMultiply(4, 5) << endl;//integer
  cout << "double :" << CMultiply(100.2, 5.5) << endl;//double 
  cout << "char: cannot be multiplied."<< endl; // char
  cout << "char: cannot be multiplied." << endl;//char as variable
  cout << "bool: " << CMultiply(true, false) << endl;//bool
  cout << "float:" << CMultiply(2.5,4.555) << endl;//float
  cout << "unsigned int: " << CMultiply(a,b) << endl;//unsigned in passvariables as parameters
  cout << "string: cannot be multiplied." << endl; //string literal
  cout << "string: cannot be multiplied." << endl; // string by variable
}