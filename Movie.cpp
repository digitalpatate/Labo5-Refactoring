#include "Movie.h"

const RegularPriceState Movie::REGULAR_PRICE;
const ChildrenPriceState Movie::CHILDREN_PRICE;
const NewReleasePriceState Movie::NEW_RELEASE_PRICE;

double Movie::getPrice(int nbDayRented) const{
    return priceState->calculatePrice(nbDayRented);
}

int Movie::getRenterBonus() const {
    return rentalPoint;
}

void Movie::setPriceState(const PriceState *priceState) {
    this->priceState = priceState;
}

Movie::Movie(const std::string& title, const PriceState *priceState, int rentalPoint)
: _title(title), priceState(priceState),rentalPoint(rentalPoint) {}

ChildrenMovie::ChildrenMovie(const std::string &title) : Movie(title, &CHILDREN_PRICE, 0) {}

NewReleaseMovie::NewReleaseMovie(const std::string &title) : Movie(title, &NEW_RELEASE_PRICE, 1) {}
