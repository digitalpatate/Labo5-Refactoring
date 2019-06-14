// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:

    Movie( const std::string& title );

    std::string getTitle() const;
    virtual double getPrice(int nbDayRented) const ;
    virtual int getRenterBonus() const;




private:
    std::string _title;
};

inline Movie::
Movie( const std::string& title )
        : _title( title )
{}

inline std::string Movie::
getTitle() const { return _title; }

class ChildrenMovie : public Movie{

public:
    ChildrenMovie(const std::string &title);

    virtual double getPrice(int nbDayRented) const;


};

class NewReleaseMovie : public Movie{

public:
    NewReleaseMovie(const std::string &title);

    virtual double getPrice(int nbDayRented) const;
    virtual int getRenterBonus() const;



};



#endif // MOVIE_H