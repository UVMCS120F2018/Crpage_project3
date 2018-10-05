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

bool Octopus::is_octopus_dead() {
    return is_dead;
}

/*METHODS*/
void Octopus ::loose_leg() {
    if (legs <= 1){
        legs = 0;
        is_dead = true;
    }else{
        legs = legs-1;
    }
}

void Octopus ::read_book() {
    iq.intelegence = iq.intelegence + 7;
//    cout << "Your octopus just got smarter!" << endl;
    iq.books_read = iq.books_read +1;
}

bool Octopus ::open_box() {
    if (iq.intelegence > 80){
//        cout << "Your Octopus is smart enough to open a box and get the food!" << endl;
        return true;
    }else{
//        cout << "Sorry, your Octopus needs to read more books" << endl;
        return false;
    }
}

void Octopus ::win_fight() {
    iq.fights_won = iq.fights_won +1;
}

int Octopus ::iq_stat() {
    int overall = iq.intelegence + iq.books_read + iq.fights_won;
    return overall;
}

/*OVERLOADING OPPERATORS*/

void operator *  (Octopus &oct1, Octopus &oct2) {
    if(oct1.iq_stat() > oct2.iq_stat()){
        oct1.win_fight();
        oct2.loose_leg();
        cout << "Henry Won!" << endl;
    }else if(oct1.iq_stat() < oct2.iq_stat()) {
        oct1.loose_leg();
        oct2.win_fight();
        cout << "George Won!" << endl;
    }else if (oct1.iq_stat() == oct2.iq_stat()){
        if (oct1.get_beak_size() == SMALL){
            oct2.win_fight();
            oct1.loose_leg();
            cout << "George Won!" << endl;
        }else if (oct1.get_beak_size() == MEDIUM & oct2.get_beak_size() == LARGE){
            oct2.win_fight();
            oct1.loose_leg();
            cout << "George Won!" << endl;
        }else if (oct1.get_beak_size() == LARGE){
            oct1.win_fight();
            oct2.loose_leg();
            cout << "Henry Won!" << endl;
        }
    }else{
        cout << "It was a tie." << endl;
    }
}

ostream &operator<<(ostream &print, const Octopus &oct1) {
    print << "Stats:" << endl;
    print << "Legs :" << oct1.legs <<endl;
    print << "Fights Won : " << oct1.iq.fights_won <<endl;
    print << "Books Read : " << oct1.iq.books_read <<endl;
    print << "Inelegance : " << oct1.iq.intelegence <<endl;
    print << "Life Status : " << (oct1.is_dead ? "Dead" : "Alive") << endl;

    return print;
}

bool operator==(Octopus &oct1, Octopus &oct2) {
    return oct1.beak_size == oct2.beak_size;
}

void operator+(Octopus &oct1, Octopus &oct2) {
    oct1.read_book();
    oct2.read_book();
}
