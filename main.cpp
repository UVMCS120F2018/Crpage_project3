//
// Created by Cecily Page on 10/2/18.
//

#include "Tank.h"
#include <iostream>
Octopus henry = Octopus(SMALL);
Octopus george = Octopus(MEDIUM);

void tank_options(){
    bool box_is_open = false;
    cout << "There are two Octoupus in the tank, Henry and George, and a mysterious box." << endl;
    cout << "Henry has " << henry.get_legs() << " legs, a small beak, and an integrated iq of " << henry.iq_stat()<< endl;
    cout << "George has " << george.get_legs() << " legs, a small beak, and an integrated iq of " << george.iq_stat()<< endl;
    cout << "If Either Henry or George Die, the game is over." << endl;
    cout << "What would you like to do? choose the corresponding letter to the option." << endl;
    cout << "a. Henry Should Read a Book" << endl;
    cout << "b. George Should Read a Book" << endl;
    cout << "c. Henry and George Should fight" << endl;
    cout << "d. Henry should try to open the box" << endl;
    cout << "e. George should try to open the box" << endl;

    while(!box_is_open & !henry.get_is_dead & !george.get_is_dead ){
        if c
    }
}



int main() {



    Tank octopus_tank = Tank(50, 50, 70);
    bool valid = false;
    cout << "There's an empty tank! Wouldn't it be great if there were Octopuses in there?" << endl;

    while (!valid) {
        cout << "Enter y for yes! or n for Nah, I'll pass" << endl;
        string begin;
        cin >> begin;
        if (begin == "y") {
            valid = true;

            while
            tank_options();

        } else if (begin == "n") {
            cout << "Well, that's all folks! See ya next time!" << endl;
            valid = true;
        } else {
            cout << "That wasn't a valid answer" << endl;
        }
        cin.clear();

    }


}

