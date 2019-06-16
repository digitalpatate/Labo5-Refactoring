// Rental.h
#ifndef RENTAL_H
#define RENTAL_H

#include <sstream>
#include "Movie.h"

class Rental {
public:
    Rental(const Movie& movie, int daysRented);
    
    int getDaysRented() const;
    const Movie& getMovie() const;
    
    double getPrice() const ;
    
    std::string statement()const;
    int getRenterPoint() const;
    
private:
    const Movie& _movie;
    int _daysRented;
};

inline Rental::
Rental(const Movie& movie, int daysRented)
: _movie(movie), _daysRented(daysRented) {}

inline int Rental::
getDaysRented() const { return _daysRented; }

inline const Movie& Rental::
getMovie() const { return _movie; }

inline std::string Rental::statement() const{
    std::ostringstream stream;
    stream << "\t" << getMovie().getTitle() <<"\t" << getPrice() <<"\n";
    return stream.str();
}

inline int Rental::getRenterPoint() const {
    return 1 + ( getDaysRented() > 1 ? getMovie().getRenterBonus() : 0) ;
}

#endif // RENTAL_H
