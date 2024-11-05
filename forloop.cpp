// Chris Coleman
// Loops Lab
// Extra: Switch case that goes into methods

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int num;
string quotes[7]; // array for quote simulator

// Make methods to simplify code
void quoteSim();
void zombieSim();
void lockSim();


int main()
{
        cout << "What would you like to do" << endl;
        cout << "1. Daily Motivation Journal" << endl;
        cout << "2. Zombie Survival Simulator" << endl;
        cout << "3. Code the Lock" << endl;
        cin >> num;
        switch(num) // uses a switch case with for loops
        {
            case 1: quoteSim(); break;
            case 2: zombieSim(); break;
            case 3: lockSim(); break;
            default: cout << "Please enter a number 1 - 3" << endl; return 1;
        }
        return 0;
    
}

void quoteSim()
{
    // Uses for loop to enter each motivational quote
    for(int i = 0; i < 7; i++)
    {
        cout << "Please enter a motivational quote for day " << i << " (no spaces): " << endl;
        cin >> quotes[i];
    }
    // Loops through every element in quotes array Credit: w3 schools
    for (string quote : quotes) {
        cout << quote << endl;
    }
}

void zombieSim()
{
    int energy = 5;
    int supplies = 0;
    bool win = false;
    while(energy > 0 && supplies < 10)
    {
        cout << "ZOMBIE SURVIVAL SIM" << endl;
        cout << "You have " << energy << " energy" << endl;
        cout << "You have " << supplies << " supplies" << endl;
        cout << "Type 1 to search for supplies -1 energy +1 supplies" << endl;
        cout << "Type 2 to rest +2 energy" << endl;
        cin >> num;
        switch(num)
        {
            case 1: energy-=1; supplies+=1; break; // search for supplies
            case 2: energy+=2; break; // rest for energy
            default: energy-=3; break; // punish user for wrong option
        }
    }
    if(energy <= 0)
    {
        cout << "You have failed" << endl;
    }
    else if(supplies >= 10)
    {
        cout << "You have won";
        win = true;
    }
}

void lockSim()
{
    /* initialize random seed: */
    srand (time(NULL));
    int guess = 0;
    int tries = 1; // start tries at 1
    int code = rand() % 900 + 100; // random number between 100 and 999
    do
    {
        if(tries > 0 && guess < code)
        {
            cout << "Guess a higher number" << endl;
        }
        if(tries > 0 && guess > code)
        {
            cout << "Guess a lower number" << endl;
        }
        // Tell them how many tries after first try
        if(tries > 0)
        {
          cout << "This is your " << tries << " attempt" << endl;   
        }
        cout << "Please enter your guess" << endl;
        cin >> guess;
        tries += 1;
    } while(guess != code); // condition after loop
    cout << "You have guessed the correct number " << code << endl;
}