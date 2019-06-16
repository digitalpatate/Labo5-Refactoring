// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

#include "PriceState.h"



class Movie {
public:
    
    static const RegularPriceState REGULAR_PRICE;
    static const ChildrenPriceState CHILDREN_PRICE;
    static const NewReleasePriceState NEW_RELEASE_PRICE;

    explicit Movie(const std::string& title);

    std::string getTitle() const;
    double getPrice(int nbDayRented) const ;
    virtual int getRenterBonus() const;
    void setPriceState(const PriceState *priceState);
    
protected:
    Movie( const std::string& title, const PriceState *priceState);

private:
    std::string _title;
    const PriceState *priceState;
};


inline Movie::
Movie(const std::string& title)
: Movie(title, &REGULAR_PRICE) {}

inline std::string Movie::
getTitle() const { return _title; }

class ChildrenMovie : public Movie{
public:
    explicit ChildrenMovie(const std::string &title);
};

class NewReleaseMovie : public Movie{
public:
    explicit NewReleaseMovie(const std::string &title);
};



#endif // MOVIE_H
