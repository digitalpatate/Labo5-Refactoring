//
//  PriceState.h
//  Labo4
//
//  Created by Nohan Budry on 16.06.19.
//

#ifndef PriceState_h
#define PriceState_h

class PriceState {
    
protected:
    
    const double BASE_PRICE;
    const int NB_DAY_BASE_PRICE;
    const double ADDITIONAL_PRICE;
    
public:
    
    PriceState(double basePrice, int nbDayBasePrice, double additionalPrice);
    
    double calculatePrice(int nbDayRented) const;
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
