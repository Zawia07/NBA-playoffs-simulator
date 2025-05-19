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
string ecWcfPlayoffTeams[2];

string playoffFinalsTeams[2];

void randomTeams()
{

}
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
void r1EcUserInput()
{
    string ecTeams[15] = {
        "Boston Celtics", "Milwaukee Bucks", "Philadelphia 76ers", 
        "Cleveland Cavaliers", "New York Knicks", "Miami Heat", 
        "Atlanta Hawks", "Toronto Raptors", "Chicago Bulls", 
        "Indiana Pacers", "Brooklyn Nets", "Charlotte Hornets", 
        "Detroit Pistons", "Orlando Magic", "Washington Wizards"
    };

    string ecPlayoffTeams[8];
    int numberOfTeams = 0;
    // Print teams 0 to 14
    for (int i = 0; i < 15; i++) {
        
        cout << "No." << i + 1 << " " << ecTeams[i] << endl;
        
    }

    cout << "\nChoose 8 teams (by number 0-14) to advance to the Eastern Conference playoffs:\n";

    for (int count = 0; count < 8; count++) {
        int choice;
        cout << "Team " << (count + 1) << ": ";
        cin >> choice;

        while (choice < 0 || choice >= 15) {
            cout << "Invalid input. Try again (0-14): ";
            cin >> choice;
        }

        ecPlayoffTeams[count] = ecTeams[choice];
    }

    cout << "\nYou chose these teams:\n";
    for (int i = 0; i < 8; i++) {
        cout << ecPlayoffTeams[i] << endl;
    }
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
                WcUserInput();
                loopCondition = false;
                break;
                
                //update the list
                //display the list to show the user the teams advancing
            }
            break;
        }
       
    }
}

