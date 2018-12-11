
/* 
 * File:   main.cpp
 * Author: iaphanemekki-felix
 *
 * Created on 6 novembre 2018, 12:23
 */

#include <cstdlib>
#include "GameMap.h"

using namespace std;


int main(int argc, char** argv) {
    
    // debug mouvement unit
    Perso monPetitPerso("Mydude", "teamMinou");
    GameMap world;
    vector<int> size = {10, 10};
    
    world.mapInit(size);
    world.placeUnit({0,1}, &monPetitPerso);
    world.moveUnit({3,1}, {0,1}, &monPetitPerso);
    
    world.getTile({3,1})->getUnit()->consolePrint();
    
    return 0;
}

