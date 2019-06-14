// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:

    explicit Movie( const std::string& title );

    std::string getTitle() const;
    double getPrice(int nbDayRented) const ;
    virtual int getRenterBonus() const;

protected:
    Movie( const std::string& title, double basePrice,int nbDayBasePrice, double additionalPrice, int rentalPoint);

private:
    std::string _title;
    const double basePrice;
    const int nbDayBasePrice;
    const double additionalPrice;
    const int rentalPoint;
};


inline Movie::
Movie( const std::string& title )
        : Movie(title,2,2,1.5,0)
{

}

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