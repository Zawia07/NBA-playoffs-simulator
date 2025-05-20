// NBA Playoffs simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string wcTeams[15] = {
        "Denver Nuggets", "Phoenix Suns", "Golden State Warriors", 
        "Los Angeles Lakers", "Los Angeles Clippers", "Sacramento Kings", 
        "Minnesota Timberwolves", "Dallas Mavericks", "New Orleans Pelicans", 
        "Oklahoma City Thunder", "Memphis Grizzlies", "Houston Rockets", 
        "San Antonio Spurs", "Utah Jazz", "Portland Trail Blazers"
    };

string wcPlayoffTeams[8];
string wcR2PlayoffTeams[4];
string WcfPlayoffTeams[2];

string ecTeams[15] = {
        "Boston Celtics", "Milwaukee Bucks", "Philadelphia 76ers", 
        "Cleveland Cavaliers", "New York Knicks", "Miami Heat", 
        "Atlanta Hawks", "Toronto Raptors", "Chicago Bulls", 
        "Indiana Pacers", "Brooklyn Nets", "Charlotte Hornets", 
        "Detroit Pistons", "Orlando Magic", "Washington Wizards"
    };

string ecPlayoffTeams[8];
string ecR2PlayoffTeams[4];
string ecfPlayoffTeams[2];

string playoffFinalsTeams[2];

void WcUserInput()
{
    // Print teams 0 to 14
    for (int i = 0; i < 15; i++) {
        
        cout << "No." << i + 1 << " " << wcTeams[i] << endl;
        
    }

    cout << "\nChoose 8 teams (by number 1-15) to advance to the Western Conference playoffs:\n";

    for (int count = 0; count < 8; count++) {
        int choice;
        cout << "Team " << (count + 1) << ": ";
        cin >> choice;

        while (choice < 0 || choice >= 15) {
            cout << "Invalid input. Try again (1-15): ";
            cin >> choice;
        }

        wcPlayoffTeams[count] = wcTeams[choice];
    }

    cout << "\nYou chose these teams:\n";
    for (int i = 0; i < 8; i++) {
        cout <<"No." << i+1 << " " << wcPlayoffTeams[i] << endl;
    }

    cout << "\nChoose 4 teams (by number 1-8) to advance to the Western Conference playoffs' second round:\n" << endl;

    for (int i = 0; i < 4; i++)
    {
        int choice;
        cout << "Team No." << i+1 << ": ";
        cin >> choice;

        while (choice < 1 || choice >= 9) {
            cout << "Invalid input. Try again (1-8): ";
            cin >> choice;
        }

        wcR2PlayoffTeams[i]=wcPlayoffTeams[choice-1];
    }

    cout << "The teams progressing to the Western Conference 2nd round are: \n" << endl;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << "Team No." << i+1 << " " << wcR2PlayoffTeams[i] << endl;
    }

    cout << "\nChoose 2 teams (by number 1-4) to advance to the Western Conference Finals\n" << endl;
    
    for (int i = 0; i < 2; i++)
    {
        int choice;
        cout << "Team No." << i+1 << ": ";
        cin >> choice;

        while (choice < 0 || choice >= 5) {
            cout << "Invalid input. Try again (1-4): ";
            cin >> choice;
        }

        WcfPlayoffTeams[i]=wcR2PlayoffTeams[choice-1];
    }
    
    cout << "\nThe teams playing for a finals spot are \n";

    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout << "Team No." << i+1 << " " << WcfPlayoffTeams[i] << endl;
    }

    int answer;
    cout << "The team progressing to the finals is ";
    cin >> answer;
    
    playoffFinalsTeams[0] = WcfPlayoffTeams[answer -1];

    cout << endl << "The team progressing to the NBA finals is: " << playoffFinalsTeams[0];
    

}
void EcUserInput()
{
    cout << "Below are all the teams in the ECF\n" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "Team No." << i + 1 << " " << ecTeams[i] << endl;
    }

    int answer;
    cout << "\nWhich of these teams would you like to progress to the first round?\n";

    for (int i = 0; i < 8; i++)
    {
        cout << "ECF team No." << i + 1 << ": ";
        cin >> answer;

        while (answer < 1 || answer > 15)
        {
            cout << "Invalid input, friend. The NUMBER should be between 1 and 15. Try again: ";
            cin >> answer;
        }

        ecPlayoffTeams[i] = ecTeams[answer - 1];
    }

    cout << "\nThe teams moving to the first round are:\n";
    for (int i = 0; i < 8; i++)
    {
        cout << "No." << i + 1 << " " << ecPlayoffTeams[i] << endl;
    }

    cout << "\nChoose the teams moving to the second round:\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "Choose winner No." << i + 1 << " (1-8): ";
        cin >> answer;

        while (answer < 1 || answer > 8)
        {
            cout << "Invalid input. Please choose a number between 1 and 8: ";
            cin >> answer;
        }

        ecR2PlayoffTeams[i] = ecPlayoffTeams[answer - 1];
    }

    cout << "\nTeams moving to the second round:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "No." << i + 1 << " " << ecR2PlayoffTeams[i] << endl;
    }

    cout << "\nChoose the teams moving to the Eastern Conference Finals:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "Choose winner No." << i + 1 << " (1-4): ";
        cin >> answer;

        while (answer < 1 || answer > 4)
        {
            cout << "Invalid input. Please choose a number between 1 and 4: ";
            cin >> answer;
        }

        ecfPlayoffTeams[i] = ecR2PlayoffTeams[answer - 1];
    }

    cout << "\nEastern Conference Finalists:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "No." << i + 1 << " " << ecfPlayoffTeams[i] << endl;
    }

    cout << "\nNow choose the team that will move on to the NBA Finals:\n";
    cout << "Enter 1 for " << ecfPlayoffTeams[0] << " or 2 for " << ecfPlayoffTeams[1] << ": ";
    cin >> answer;

    while (answer < 1 || answer > 2)
    {
        cout << "Invalid input. Enter 1 or 2: ";
        cin >> answer;
    }

    playoffFinalsTeams[1] = ecfPlayoffTeams[answer - 1];

    cout << "\nCongrats to " << playoffFinalsTeams[1] << " for dominating the East and making it to the NBA Finals!\n";
}

int main()
{
    
    string wcPlayoffTeam[8];
    string ecPlayoffTeam[8];


    int q1_answe;
    bool loopCondition = true;

    cout << "do you want to manually simulate who progresses in the playoff tournament? \n";
    cout << "1.y 2.n \n";
    cin >> q1_answe;

    while (loopCondition == true)
    {
        if (q1_answe ==1)
        {
            int i = 0;
            int maxTeams = 7;
            for (i = 0; i < maxTeams;)
            {
                //have the user choose the 8 teams that will be nominated
                cout<< "\n";
                // WcUserInput();
                EcUserInput();
                loopCondition = false;
                break;
                
                //update the list
                //display the list to show the user the teams advancing
            }
            break;
        }
       
    }
}

