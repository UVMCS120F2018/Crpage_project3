//
// Created by Cecily Page on 10/2/18.
//

#include "Tank.h"

/*CONSTRUCTORS*/
Tank ::Tank(double depth, double height, double width) {
}

/*GETTERS*/
double Tank :: get_depth(){
    return depth;
}

double Tank :: get_height() {
    return height;
}

double Tank :: get_width() {
    return width;
}

vector<Octopus> Tank ::get_inhabitants() {
    return inhabitants;
}

/*METHODS*/

double Tank ::calculate_volume() {
    return depth*height*width;
}

void Tank ::add_octopus(Octopus oct) {
    inhabitants.push_back(oct);
}