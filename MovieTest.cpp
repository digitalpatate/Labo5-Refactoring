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

TEST(RegularMovieTest, checkRenterPoint) {
    Movie movie("Jack's potatoes");

    ASSERT_EQ(movie.getRenterBonus(), 0);
}

TEST(ChildrenMovieTest, checkRenterPoint) {
    ChildrenMovie movie("Jack's potatoes");

    ASSERT_EQ(movie.getRenterBonus(), 0);
}

TEST(NewReleaseMovie, checkRenterPoint) {
    NewReleaseMovie movie("Jack's potatoes");

    ASSERT_EQ(movie.getRenterBonus(), 1);
}

#endif //LABO4_CUSTOMERTEST_CPP
