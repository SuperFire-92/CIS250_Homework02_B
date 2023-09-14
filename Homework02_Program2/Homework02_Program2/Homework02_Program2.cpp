//=====================================
//Name: Nicolaas Dyk
//Date: 02-27-2023
//Desc: Create a Circle Class and let
//      the user see various details
//      of the circle based off their
//      radius input
//=====================================

#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

double userInput();
bool validNumber(string&);

int main()
{
    //Declare variables
    double rad;

    rad = userInput();

    Circle circle(rad);
    
    cout << endl;
    cout << "Area          : " << circle.getArea() << endl;
    cout << "Diameter      : " << circle.getDiameter() << endl;
    cout << "Circumference : " << circle.getCircumference() << endl;
}

//Gets the user's input
double userInput()
{
    string num;
    bool valid = false;
    while (!valid)
    {
        //Get the user's input
        cout << "Enter a radius: ";
        getline(cin, num);
        //If it is a proper number, break the while loop
        if (validNumber(num))
        {
            valid = true;
        }
        //Else, inform the user that their input was invalid and retry
        else
        {
            cout << "Invalid number. Try again." << endl;
        }
    }
    return stod(num);
}

bool validNumber(string& num)
{
    int numberOfDecimalPoints = 0;
    bool valid = true;
    for (int i = 0; i < num.length() && valid == true; i++)
    {
        //Test to see if the current character is a number
        if (isdigit(num.at(i)))
        {
            //valid remains true
        }
        //Test to see if the current character is a decimal, and if it is the only decimal, and if it is not the last character in the string
        else if (num.at(i) == '.' && numberOfDecimalPoints == 0 && i != num.length() - 1)
        {
            //valid remains true
            numberOfDecimalPoints++;
        }
        //Test to see if it's a negative number
        else if (i == 0 && num.at(i) == '-' && num.length() > 1)
        {
            //valid remains true
        }
        else
        {
            valid = false;
        }
    }
    if (num.at(0) == '.')
    {
        num = "0" + num;
    }
    return valid;
}