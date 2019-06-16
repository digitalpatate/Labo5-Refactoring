//
//  PriceState.h
//  Labo4
//
//  Created by Nohan Budry on 16.06.19.
//

#ifndef PriceState_h
#define PriceState_h

class PriceState {
    
    const double BASE_PRICE;
    const int NB_DAY_BASE_PRICE;
    const double ADDITIONAL_PRICE;
    const int RENTER_POINT;
    
public:
    
    PriceState(double basePrice, int nbDayBasePrice, double additionalPrice, int renterPoint);
    
    double calculatePrice(int nbDayRented) const;
    int renterPoint() const;
};

class RegularPriceState : public PriceState {
    
public:
    
    RegularPriceState();
};

class ChildrenPriceState : public PriceState {
    
public:
    
    ChildrenPriceState();
};

class NewReleasePriceState : public PriceState {
    
public:
    
    NewReleasePriceState();
};
    
#endif /* PriceState_h */
