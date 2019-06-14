#include "Movie.h"

double Movie::getPrice(int nbDayRented) const{
    double price = 2;
    if ( nbDayRented > 2 )
        price += ( nbDayRented - 2 ) * 1.5 ;

    return price;
}

int Movie::getRenterBonus() const {
    return 0;
}

ChildrenMovie::ChildrenMovie(const std::string &title) : Movie(title) {}

double ChildrenMovie::getPrice(int nbDayRented) const{
    double price = 1.5;
    if ( nbDayRented > 3 )
        price += ( nbDayRented - 3 ) * 1.5 ;

    return price;
}

NewReleaseMovie::NewReleaseMovie(const std::string &title) : Movie(title) {}

double NewReleaseMovie::getPrice(int nbDayRented) const{
    return nbDayRented * 3;
}

int NewReleaseMovie::getRenterBonus() const {
    return 1;
}

