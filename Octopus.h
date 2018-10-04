//
// Created by Cecily Page on 10/2/18.
//

#ifndef CRPAGE_PROJECT3_OCTOPUS_H
#define CRPAGE_PROJECT3_OCTOPUS_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

enum size {SMALL, MEDUIM, LARGE};
struct IQ {
    int intelegence;
    int books_read;
    int fights_won;

};

class Octopus {
    int legs;
    IQ iq;
    size beak_size;
    bool is_dead;
    bool is_hungry;

public:
    Octopus(size beak_size);

    /*GETTERS*/
    int get_legs();
    int get_iq();
    int get_books_read();
    int get_fights_won();
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
     * adds one to number of books read
     */
    void read_book();

    /*!
     * octopus attempts to open box.
     * if the iq is below 80 it wont open.
     */
    void open_box();

    /*!
     * iq is raised 20 points
     * if a leg is not viable regains viability
     */
    void win_fight();

    /*!
     * adds intelegence, books read, and fights won together.
     * @return integer value of intelegence
     */
    int iq_stat();

};


#endif //CRPAGE_PROJECT3_OCTOPUS_H
