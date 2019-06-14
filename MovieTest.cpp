//
// Created by dpage on 07.06.19.
//

#ifndef LABO4_CUSTOMERTEST_CPP
#define LABO4_CUSTOMERTEST_CPP

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Customer.h"
#include "Movie.h"
#include "Rental.h"

TEST(RegularMovieTest, checkPrice) {
    Movie movie("Jack's potatoes");

    ASSERT_EQ(movie.getPrice(1),2 );
    ASSERT_EQ(movie.getPrice(2),2 );
    ASSERT_EQ(movie.getPrice(3),3.5 );
    ASSERT_EQ(movie.getPrice(4),5 );
}

TEST(ChildrenMovieTest, checkPrice) {
    ChildrenMovie movie("Jack's potatoes");

    ASSERT_EQ(movie.getPrice(1),1.5 );
    ASSERT_EQ(movie.getPrice(2),1.5 );
    ASSERT_EQ(movie.getPrice(3),1.5 );
    ASSERT_EQ(movie.getPrice(4),3 );
}

TEST(NewReleaseMovie, checkPrice) {
    NewReleaseMovie movie("Jack's potatoes");

    ASSERT_EQ(movie.getPrice(1),3 );
    ASSERT_EQ(movie.getPrice(2),6 );
    ASSERT_EQ(movie.getPrice(3),9 );
    ASSERT_EQ(movie.getPrice(4),12);
}




#endif //LABO4_CUSTOMERTEST_CPP
