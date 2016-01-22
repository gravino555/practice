#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <window.h>

using namespace std;

double celsius = 0;
double fahrenheit = 0;

 int main(){
     char catChoice[0];
     cout << "Welcome to the practice app" <<endl;
     cout<<endl;
     cout << "Let's do a Celsius to Fahrenheit convertion app" << endl;
     cout<<endl;
     cout<<endl;
     cout << "Begin by entering if you want to convert from Fahrenheit to Celsius by pressing \"f\" or vice versa by typing \"c\": " << endl;
     cin >> catChoice;

     if (stricmp ("f", catChoice) == 0 || ("F", catChoice)) {
         cout << "Please enter the temperature in Fahrenheit that you would like to convert to Celsius: " << endl;
         cin >> fahrenheit;
         celsius = (fahrenheit - 32) * 5/9;
         cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius."<< endl;
     }
     else if (stricmp ("c", catChoice) == 0 || ("C", catChoice)) {
         cout << "Please enter the temperature in Celsius that you would like to convert to Fahrenheit: " << endl;
         cin >> celsius;
         fahrenheit = (celsius + 32) * 9/5;
         cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit."<< endl;
     }

    else {
         cout << "Option selected does not exist" << endl;

       return 0;
     }
 }
