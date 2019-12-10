// Program Name: Rockstar Simulator
// Purpose: Rockstar Simulator is a "Choose your own adventure" game in which
// the player makes decisions as a musicianl, hoping to be successful
// Author: Mia Buchanan
// Date Last Modified: 12-09-19

#include <iostream>
using namespace std;

int main()
{
    char bandName;
    char choice;
    cout << "Welcome to Rockstar Simulator" << endl;
    cout << "Your friends Lil (guitarist), Matty (drummer), Casey (bassist), and Sydney (keys) ask you to join their band!" << endl;
    cout << "Help your band reach their goal of going on tour" << endl;
    cout << "As the new vocalist, you get to help name the band. What are you guys called?" << endl;
    cin >> bandName;

    cout << "In order to buy new equipment, each band member pitches in $50 to the band fund" << endl;
    cout << "Band fund is now $250." << endl; 
    


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
        }
        case 'N':
        {
            cout << bandName << " plays it safe, and continues to practice." << endl;
            cout << "Band fund is $250." << endl;
        }
    }
    
    cout << "Lil's uncle offered her a van that the band could use. However, it won't run, and will cost $700 to fix." << endl;
    cout << "A local bar is having battle of the bands, and " << bandName << " has been invited. The winner will receive $150." << endl;


    
    return 0;
}