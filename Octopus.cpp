//
// Created by Cecily Page on 10/2/18.
//

#include "Octopus.h"

/*CONSTRUCTORS*/

Octopus ::Octopus(size beak_size) {
    iq.intelegence = 50;
    iq.fights_won = 0;
    iq.books_read = 0;
    is_dead = false;
    legs = 8;
    this -> beak_size = beak_size;
}

/*GETTERS*/
int Octopus ::get_legs() {
    return legs;
}

int Octopus ::get_iq() {
    return iq.intelegence;
}

int Octopus ::get_books_read() {
    return iq.books_read;
}

int Octopus ::get_fights_won() {
    return iq.fights_won;
}

size Octopus ::get_beak_size() {
    return beak_size;
}

/*METHODS*/
void Octopus ::loose_leg() {
    if (legs <= 1){
        is_dead = true;
    }else{
        legs = legs-1;
    }
}

void Octopus ::grow_leg() {
    if (legs < 8){
        legs = legs + 1;
    }
}

void Octopus ::read_book() {
    if (iq.intelegence < 100){
        iq.intelegence = iq.intelegence + 7;
        cout << "Your octopus just got smarter!" << endl;
        iq.books_read = iq.books_read +1;
    }
}

void Octopus ::open_box() {
    if (iq.intelegence > 80){
        cout << "Your Octopus is smart enough to open a box and get the food!" << endl;
    }else{
        cout << "Sorry, your Octopus needs to read more books" << endl;
    }
}

void Octopus ::win_fight() {
    iq.fights_won = iq.fights_won +1;
}

int Octopus ::iq_stat() {
    int overall = iq.intelegence + iq.books_read + iq.fights_won;
    return overall;
}
