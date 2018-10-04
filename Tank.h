//
// Created by Cecily Page on 10/2/18.
//

#ifndef CRPAGE_PROJECT3_TANK_H
#define CRPAGE_PROJECT3_TANK_H

#include "Octopus.h"
#include <vector>

/*!
 * Depth, Height and Width can not be negative
 */
class Tank {
    double depth;
    double height;
    double width;
    vector<Octopus> inhabitants;

public:
    Tank(double depth, double height, double width);

    /*GETTERS*/
    double get_depth();
    double get_height();
    double get_width();
    vector<Octopus> get_inhabitants();

    /*SETTERS*/

    /*METHODS*/
    /*!
     * returns the volume of the tank
     */
    double calculate_volume();
    void add_octopus(Octopus);
};


#endif //CRPAGE_PROJECT3_TANK_H
