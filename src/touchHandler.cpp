//
// Created by Ingela Rossing on 27/03/17.
//

#include "touchHandler.h"



void touchHandler::addFinger(SDL_TouchFingerEvent & tfe)
{
    vec.push_back(tfe);

    //if placed on virtual card
    if( 1 == 0) {
        // Add touchpoint to VirtualCard?
    }
    else if( 1 == 1 ) { //Belongs to real card
        // Show RealCard with updated position for card and virtual cards
    }
    std::cout << "Added id " << tfe.fingerId << std::endl;
}


void touchHandler::updateFinger(SDL_TouchFingerEvent &tfe)
{
    //update in x,y,dx and dy in vector for tfe
    for(size_t i = 0; i < vec.size(); i++)
    {
        if(tfe.fingerId == vec[i].fingerId)
        {
            vec[i].dx = tfe.dx;
            vec[i].dy = tfe.dy;
            vec[i].x = tfe.x;
            vec[i].y = tfe.y;

            //std::cout << "Updated id " << tfe.fingerId << std::endl;
            return;
        }
    }
    // If not connected to real or virtual card: poll next event

    //If connected to virtual card:
    // check rotation, scaling and translation...
    //break;

    //If connected to real card:
    //move real card and its virtual cards

}

void touchHandler::removeFinger( SDL_FingerID fid) {

    // If the finger is linked to a card: (inside touchHandler?)
    // remove touchpoint from virtual card?
    // or check if real card is removed (and remove real card)

    vec.erase(
            std::remove_if(vec.begin(), vec.end(), [&](SDL_TouchFingerEvent const & f) {
                return f.fingerId == fid;
            }),
            vec.end());
    std::cout << "Removed id " << fid << std::endl;
}