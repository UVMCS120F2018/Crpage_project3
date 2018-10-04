//
// Created by Cecily Page on 10/2/18.
//

#ifndef CRPAGE_PROJECT3_OCTOPUS_H
#define CRPAGE_PROJECT3_OCTOPUS_H

#include <string>
#include <iostream>
using namespace std;

enum size {SMALL, MEDUIM, LARGE};
struct Leg {
    double length;
    int viability;

};

class Octopus {
    int legs;
    int iq;
    size beak_size;
    bool is_dead;

public:
    Octopus(size beak_size, int legs);

    /*GETTERS*/
    int get_legs();
    int get_iq();
    size get_beak_size();

    /*SETTERS*/

    /*METHODS*/
    /*!
     * leg decreases in value by 1
     * if legs is 0, wont remove, but is_dead turns true;
     */
    void loose_leg();

    /*!
     * leg increases in value by 1
     * if legs = 8 wont add more
     */
    void grow_leg();

    /*!
     * increases iq level by 7
     * if iq is already 100 wont increase
     */
    void read_book();

    /*!
     * octopus attempts to open box.
     * if the iq is below 80 it wont open.
     */
    void open_box();

};


#endif //CRPAGE_PROJECT3_OCTOPUS_H
