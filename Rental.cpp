#include "Rental.h"

double Rental::getPrice() const {
    return _movie.getPrice(_daysRented);
}
