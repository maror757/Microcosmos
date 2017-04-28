//
//  MicroCosmos.hpp
//  MicroCosmos
//
//  Created by Johan Eriksson on 2017-04-22.
//
//

#pragma once
#ifndef MicroCosmos_hpp
#define MicroCosmos_hpp

#include <stdio.h>
#include "poNodeContainer.h"
#include "VirtualCard.hpp"
#include "cinder/Xml.h"
#include "RealCard.h"

class MicroCosmos;
typedef std::shared_ptr<MicroCosmos> MicroCosmosRef;

class MicroCosmos
: public po::scene::NodeContainer
{
public:
    static MicroCosmosRef create();
    
    void setup();
    
    void uniqueCategories(const char *file, std::vector<std::string> &categories);
    bool stringInVector(std::string category, std::vector<std::string> categories);
	void initStandby();
    
protected:
    
private:
    
    //std::vector<VirtualCardRef> cards;
    std::vector<RealCardRef> rcards;

	std::vector<uint32_t> touchId;
	std::vector<po::scene::TouchEvent> events;
    
    void onTouchDown(po::scene::TouchEvent &event);
    
    //	Touch up event handler
    void onTouchUp(po::scene::TouchEvent &event);

	po::scene::ShapeRef standByFig;
	po::scene::TextBoxRef standbyContent;
    
    
};





#endif /* MicroCosmos_hpp */
