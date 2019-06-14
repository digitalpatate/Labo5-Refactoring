#include "Movie.h"

double Movie::getPrice(int nbDayRented) const{
    double price = basePrice;
    if ( nbDayRented > nbDayBasePrice )
        price += ( nbDayRented - nbDayBasePrice ) * additionalPrice ;

    return price;
}

int Movie::getRenterBonus() const {
    return rentalPoint;
}

Movie::Movie(const std::string &title, double basePrice, int nbDayBasePrice, double additionalPrice, int rentalPoint)
: _title(title), basePrice(basePrice),nbDayBasePrice(nbDayBasePrice),additionalPrice(additionalPrice),rentalPoint(rentalPoint){

}

ChildrenMovie::ChildrenMovie(const std::string &title) : Movie(title,1.5,3,1.5,0) {}

NewReleaseMovie::NewReleaseMovie(const std::string &title) : Movie(title,3,1,3,1) {}
