//
// Created by Cecily Page on 10/2/18.
//

#include "Tank.h"
#include <iostream>
#include <string>
Octopus henry = Octopus(SMALL);
Octopus george = Octopus(MEDIUM);

void tank_options(){
    bool box_is_open = false;
    string choice;

    cout << "There are two Octopi in the tank, Henry and George, and a mysterious box." << endl;
    cout << "Henry has " << henry.get_legs() << " legs, a small beak, and an integrated iq of " << henry.iq_stat()<< endl;
    cout << "George has " << george.get_legs() << " legs, a small beak, and an integrated iq of " << george.iq_stat()<< endl;
    cout << "If Either Henry or George Die, the game is over." << endl;

    while (!box_is_open & !henry.is_octopus_dead() & !george.is_octopus_dead() ){

        cout << endl;
        cout << "What would you like to do? choose the corresponding letter to the option." << endl << endl;
        cout << "a. Henry Should Read a Book" << endl;
        cout << "b. George Should Read a Book" << endl;
        cout << "c. Henry and George Should fight" << endl;
        cout << "d. Henry should try to open the box" << endl;
        cout << "e. George should try to open the box" << endl;
        cout << "f. Print out stats of George" << endl;
        cout << "g. Print out stats of Henry" << endl;

        cin >> choice;

        if (choice == "a" | choice == "A"){
            henry.read_book();

        }else if (choice == "b" | choice == "B"){
            george.read_book();

        }else if (choice == "c" | choice == "C"){
            henry * george;

        }else if (choice == "d" | choice == "D"){
            box_is_open = henry.open_box();

        }else if (choice == "e" | choice == "E"){
            box_is_open = george.open_box();

        }else if (choice == "f" | choice == "F"){
            cout << george;

        }else if (choice == "g" | choice == "G"){
            cout << henry;

        }else{
            cout << "That's not a valid response, please try again." << endl;
        }


    }

    cout << "Thanks For Playing! I hope you had fun!  -- Cecily" << endl;
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
            tank_options();
            valid = true;

        } else if (begin == "n") {
            cout << "Well, that's all folks! See ya next time!" << endl;
            valid = true;
        } else {
            cout << "That wasn't a valid answer" << endl;
        }
        cin.clear();

    }


}

