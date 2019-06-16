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

using ::testing::Return;
using ::testing::_;

class MovieMock : public  Movie{
public:

    MOCK_CONST_METHOD1(getPrice,double(int nbDayRented));
    explicit MovieMock(const std::string& title) : Movie(title){}
};


TEST(RentalTest, checkStatement) {

    MovieMock movie("Sans aucun GEN");
    Rental rental(movie,5);
    EXPECT_CALL(movie,getPrice(_)), Return(10.0);


    ASSERT_EQ(movie.getPrice(1111),21.0);
    //ASSERT_EQ(rental.statement(),"\tSans aucun GEN\t10\n");
}




#endif //LABO4_CUSTOMERTEST_CPP
