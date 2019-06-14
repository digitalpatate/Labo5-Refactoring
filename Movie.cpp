#include "Movie.h"

double Movie::getPrice(int nbDayRented) const{
    double price = basePrice;
    if ( nbDayRented > nbDayBasePrice )
        price += ( nbDayRented - nbDayBasePrice ) * additionnalPrice ;

    return price;
}

int Movie::getRenterBonus() const {
    return 0;
}

Movie::Movie(const std::string &title, double basePrice, int nbDayBasePrice, double additionnalPrice)
: _title(title), basePrice(basePrice),nbDayBasePrice(nbDayBasePrice),additionnalPrice(additionnalPrice){

}

ChildrenMovie::ChildrenMovie(const std::string &title) : Movie(title,1.5,3,1.5) {}

NewReleaseMovie::NewReleaseMovie(const std::string &title) : Movie(title,3,1,3) {}


int NewReleaseMovie::getRenterBonus() const {
    return 1;
}

