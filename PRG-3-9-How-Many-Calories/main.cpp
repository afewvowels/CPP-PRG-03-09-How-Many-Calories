//
//  main.cpp
//  PRG-3-9-How-Many-Calories
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A bag of cookies holds 30 cookies. The calorie infornation on the bag claims there are
//  10 "servings" in the bag and that a serving equals 300 calories. Write a program that
//  asks the user to input how many cookies he or she actually ate, then reports how many
//  total calories were consumed.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare and initialize variables
    int intCookiesEaten,
        intCookiesSingleServing = 3,
        // intCookiesPerBag = 30, Unused, calculated cookies per serving beforehand
        intCookiesCaloriesPerServing = 300;
    
    float fltCookiesEatenCalories;
    
    cout << "Please enter the total number of cookies you ate:" << endl;
    cin >> intCookiesEaten;
    while(!cin || intCookiesEaten < 0 || intCookiesEaten > 1000)
    {
        cout << "Please enter a number of cookies between 0 and 1,000 cookies:\n";
        cin.clear();
        cin.ignore();
        cin >> intCookiesEaten;
    }
    
    // Calculate calories based on user input of total cookies eaten
    fltCookiesEatenCalories = (static_cast<float>(intCookiesEaten) / static_cast<float>(intCookiesSingleServing)) * intCookiesCaloriesPerServing;
    
    cout << setprecision(1) << fixed << showpoint;
    
    cout << "The total number of calories you consumed is equal to:" << endl
         << fltCookiesEatenCalories << " calories";
    
    return 0;
}


