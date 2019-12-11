// Program Name: Rockstar Simulator
// Purpose: Rockstar Simulator is a "Choose your own adventure" game in which
// the player makes decisions as a musicianl, hoping to be successful
// Author: Mia Buchanan
// Date Last Modified: 12-09-19

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int bandName;
    char choice;
    double bandFund;
    double money;
    
    cout << "Welcome to Rockstar Simulator" << endl;
    cout << "Your friends Lil (guitarist), Matty (drummer), Casey (bassist), and Syd (keys) ask you to join their band!" << endl;
    cout << "Help your band reach their goal of going on tour" << endl;
    cout << "As the new vocalist, you get to help name the band. What are you guys called?" << endl;
    cin >> bandName;

    cout << "In order to buy new equipment, each band member pitches in $50 to the band fund" << endl;
    cout << "Band fund is now $250." << endl; 
    bandFund = 250;
    


    cout << "One of your friends asks " << bandName << " to play at their party, but you've only been practicing for a few weeks." << endl;
    cout << "Does " << bandName << " wish to play the party? Enter 'Y' for yes or 'N' for no." << endl; 
    cin >> choice;

    switch(choice)
    {
        case 'Y':
        {
            cout << "Even though " << bandName << " missed a few notes, you guys rocked the party." << endl;
            cout << "The host pays you $50" << endl;
            cout << "Band fund is now $300" << endl;
            money = bandFund + 50;
        }
        case 'N':
        {
            cout << bandName << " plays it safe, and continues to practice." << endl;
            cout << "Band fund is $250." << endl;
            money = bandFund;
        }
        default:
        {
            cout << "Invalid answer. Please try again." << endl;
            return 1;
        }
    }
    
    cout << "Lil's uncle offered her a van that the band could use. However, it won't run, and will cost $700 to fix." << endl;
    cout << "If " << bandName << " is able to fix the van, you can go on tour!" << endl;
    
    cout << "A local bar is having battle of the bands, and " << bandName << " has been invited. The winner will receive $150." << endl;
    cout << "Does " << bandName << "wish to compete? Enter 'Y' for yes, and 'N' for no." << endl;
    cin >> choice;

    switch(choice)
    {
        case 'Y':
        {
            cout << bandName << " won Battle of the Bands!" << endl;
            money = bandFund + 150;
            cout << "Band fund is now " << money << endl;
        }
        case 'N':
        {
            cout << bandName << "didn't compete in Battle of the Bands." << endl;
            cout << "Band fund is now " << money << endl;
        }
        default:
        {
            cout << "Invalid answer. Please try again." << endl;
            return 1;
        }
    }

    cout << "Syd's sister has asked " << bandName << " to play her birthday party." << endl;
    cout << "If you play the gig, " << bandName << "will recieve $250." << endl;
    cout << "Enter 'Y' to play the gig, or 'N' to skip it." << endl;
    cin >> choice;

    switch(choice)
    {
        case 'Y':
        {
            cout << bandName << "rocked the gig!" << endl;
            money = bandFund + 250;
            cout << "band fund is now " << money << endl;
        }
        case 'N':
        {
            cout << bandName << "skiped the gig." << endl;
            cout << "band fund is " << money << endl;
        }
        default:
        {
            cout << "Invalid answer. Please try again." << endl;
            return 1;
        }
    }

    if (money == 700)
    {
        cout << "Congrats! " << bandName << " was able to repair the band, and you head on tour." << endl;
        cout << "You win!" << endl;
    }
    else if (money != 700)
    {
        cout << bandName << "didn't raise the money to fix the van, and the tour was cancelled." << endl;
        cout << "Try again next time!" << endl;
    }

    cout << "Thanks for playing Rockstar Simulator!" << endl;

    return 0;
}