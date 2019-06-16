//
//  PriceState.cpp
//  Labo4
//
//  Created by Nohan Budry on 16.06.19.
//

#include "PriceState.h"

PriceState::PriceState(double basePrice, int nbDayBasePrice, double additionalPrice, int renterPoint)
: BASE_PRICE(basePrice), NB_DAY_BASE_PRICE(nbDayBasePrice), ADDITIONAL_PRICE(additionalPrice), RENTER_POINT(renterPoint) {}

double PriceState::calculatePrice(int nbDayRented) const {
    double price = BASE_PRICE;
    if (nbDayRented > NB_DAY_BASE_PRICE)
        price += (nbDayRented - NB_DAY_BASE_PRICE) * ADDITIONAL_PRICE;
    
    return price;
}

int PriceState::renterPoint() const {
    return RENTER_POINT;
}

RegularPriceState::RegularPriceState()
: PriceState(2, 2, 1.5, 0) {}

ChildrenPriceState::ChildrenPriceState()
: PriceState(1.5, 3, 1.5, 0) {}

NewReleasePriceState::NewReleasePriceState()
: PriceState(3, 1, 3, 1) {}
