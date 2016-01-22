#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <ostream>
using namespace std;

char catChoice = {0};
double celsius = 0;
double fahrenheit = 0;
string input = "";

int main(){
    bool correctInput = false;
    cout << "Welcome to the practice app" <<endl;
    cout<<endl;
    cout << "Let's do a Celsius to Fahrenheit convertion app" << endl;
    cout<<endl;
    cout<<endl;
    cout << "Begin by entering if you want to convert from Fahrenheit to Celsius by pressing \"f\" or vice versa by typing \"c\": " << endl;
    cin << catChoice ;
    
    if (catChoice == f) {
        cout << "Please enter the temperature in Fahrenheit that you would like to convert to Celsius: " << endl;
        cin << fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius."<< endl;
    }
    else if (catChoice == c) {
        cout << "Please enter the temperature in Celsius that you would like to convert to Fahrenheit: " << endl;
        cin << celsius;
        fahrenheit = (celsius + 32) * 9/5;
        cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit."<< endl;
    }
    else {
        cout << "Option selected does not exist" << endl;
        return 0;
    }
}