// Rental.h
#ifndef RENTAL_H
#define RENTAL_H

#include <sstream>
#include "Movie.h"

class Rental {
public:
    Rental( const Movie& movie, int daysRented );

    int getDaysRented() const;
    const Movie& getMovie() const;

    double getPrice() const ;


    std::string statement()const;

private:
    Movie _movie;
    int _daysRented;
};

inline Rental::
Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

inline int Rental::
getDaysRented() const { return _daysRented; }

inline const Movie& Rental::
getMovie() const { return _movie; }

inline std::string Rental::statement() const{
    std::ostringstream stream;
    stream << "\t" << getMovie().getTitle() <<"\t" << getPrice() <<"\n";
    return stream.str();
}

#endif // RENTAL_H