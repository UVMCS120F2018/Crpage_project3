//
// Created by Cecily Page on 10/2/18.
//

#ifndef CRPAGE_PROJECT3_OCTOPUS_H
#define CRPAGE_PROJECT3_OCTOPUS_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

enum size {SMALL, MEDIUM, LARGE};
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

public:
    Octopus(size beak_size);

    /*GETTERS*/
    int get_legs();
    int get_iq();
    int get_books_read();
    int get_fights_won();
    size get_beak_size();
    bool is_octopus_dead();


    /*SETTERS*/

    /*METHODS*/
    /*!
     * leg decreases in value by 1
     * if legs is 0, wont remove, but is_dead turns true;
     */
    void loose_leg();

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
    bool open_box();

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

    /*OVERLOADING OPERATOR*/
    /*!
     * Makes two octopus fight. Depending on which one has a higher inegrated iq or beak size
     * that octopus will win
     * @param oct1 Octopus
     * @param oct2 Octopus
     */
    friend void operator * (Octopus &oct1, Octopus &oct2);

    /*!
     * Prints the stats of an octopus
     * @param print
     * @param oct1 Octopus
     * @return statement printed out
     */
    friend ostream& operator << (ostream& print, const Octopus& oct1);

    /*!
     * Returns true if octopus have the same beak size, false if not.
     * @param oct1 Octopus
     * @param oct2 Octopus
     * @return Bool
     */
    friend bool operator == (Octopus &oct1, Octopus& oct2);

    /*!
     * Makes both Octopus read a book.
     * @param oct1 Octopus
     * @param oct2 Octopus
     */
    friend void operator + (Octopus &oct1, Octopus &oct2);

};


#endif //CRPAGE_PROJECT3_OCTOPUS_H
