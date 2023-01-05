#include <iostream>
#include "Manager.h"
#include "Menus.h"

using namespace std;

int main() {
    Manager manager = Manager();
    string choice;

    do {
        cout
        <<'\n'
        << "###############################################################################\n"
        << "#                              Flight Manager                                 #\n"
        << "###############################################################################\n"
        << "# Please choose an option:                                                    #\n"
        << "# 1. Find shortest path between two locations                                 #\n"
        << "# 2. Find all the possible paths between two locations                        #\n"
        << "# 3. Get information about an airport                                         #\n"
        << "# Q. Quit                                                                     #\n"
        << "###############################################################################\n"
        << "#> ";

        cin >> choice;
        if (choice.size() > 1) {choice.clear(); choice[0] = '?';}
        choice = (char)toupper(choice[0]);

        switch (choice[0]) {
            case '1': {
                flightOptionsMenuOrigin(manager,false);
                break;}
            case '2': {
                flightOptionsMenuOrigin(manager, true);
                break;}
            case '3': {airportInfoMenu(manager); break;}
            case 'Q': break;
            case '?': {cout << endl << "Error: Invalid input. Please enter one character." << endl << endl; break;}
            default : {cout << endl << "Error: Invalid input. Please enter a valid choice." << endl << endl; break;}
        }

    } while (choice[0] != 'Q');

    return 0;
}