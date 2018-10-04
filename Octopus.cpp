//
// Created by Cecily Page on 10/2/18.
//

#include "Octopus.h"

/*CONSTRUCTORS*/

Octopus ::Octopus(size beak_size, int legs) {
    iq = 50;
    is_dead = false;
}

/*GETTERS*/
int Octopus ::get_legs() {
    return legs;
}

int Octopus ::get_iq() {
    return iq;
}

size Octopus ::get_beak_size() {
    return beak_size;
}

/*METHODS*/
void Octopus ::loose_leg() {
    legs = legs - 1;
    if (legs <= 0){
        is_dead = true;
    }
}

void Octopus ::grow_leg() {
    if (legs < 8){
        legs = legs + 1;
    }
}

void Octopus ::read_book() {
    if (iq < 100){
        iq = iq +7;
        cout << "Your octopus just got smarter!" << endl;
    }
}

void Octopus ::open_box() {
    if (iq > 80){
        cout << "Your Octopus is smart enough to open a box and get the food!" << endl;
    }else{
        cout << "Sorry, your Octopus needs to read more books" << endl;
    }
}