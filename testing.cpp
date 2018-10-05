//
// Created by Cecily Page on 10/4/18.
//
#include <string>
#include <iostream>
#include <vector>
using namespace std;

#include "Tank.h"

/* TESTING TANK */


bool test_tank_volume(){
    bool passed = true;
    Tank test = Tank (1,2,3);
    if (test.calculate_volume() != 6){
//        cout<< test.calculate_volume() << endl;
        passed = false;
    }
    return passed;
}

bool test_add_octopus(){
    bool passed = true;
    Octopus henry = Octopus(SMALL);
    Tank test = Tank(12,32,54);
    test.add_octopus(henry);
    vector <Octopus> inhab = test.get_inhabitants();
    if (inhab.size() != 1){
        passed = false;
    }
    return passed;
}

/* TESTING OCTOPUS */
bool test_loose_leg(){
    bool passed = true;
    Octopus frank = Octopus(SMALL);
    frank.loose_leg();
    if (frank.get_legs() != 7){
        passed = false;
    }
    return passed;
}

bool test_loose_leg_1(){
    bool passed = true;
    Octopus frank = Octopus(SMALL);
    for (int i; i<10; i++){
        frank.loose_leg();
    }
    if (frank.get_legs() != 0){
        passed = false;
    }
    return passed;
}

bool test_read_book(){
    bool passed = true;
    Octopus frank = Octopus(SMALL);
    for (int i; i<8; i++){
        frank.read_book();
    }
    if (frank.get_books_read() != 7){
        passed = false;
    }
    return passed;
}

bool test_open_box(){
    bool passed = true;
    Octopus frank = Octopus(SMALL);
    for (int i; i<50; i++){
        frank.read_book();
    }
    if (!frank.open_box()){
        passed = false;
    }
    return passed;
}





int main(){
    cout << "Tank Tests:" << endl;
    cout << "Volume : " << (test_tank_volume()? "Passed" : "Failed") << endl;
    cout << "Add Octopus : " << (test_add_octopus()? "Passed" : "Failed") << endl;
    cout << endl;

    cout << "Octopus Tests: "<< endl;
    cout << "leg : " << (test_loose_leg()? "Passed" : "Failed") << endl;
    cout << "Leg 1: " << (test_loose_leg_1()? "Passed" : "Failed") << endl;
    cout << "book : " << (test_read_book()? "Passed" : "Failed") << endl;
    cout << "Box : " << (test_open_box()? "Passed" : "Failed") << endl;

}