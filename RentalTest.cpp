//
//  RentalTest.cpp
//  Labo4
//
//  Created by Nohan Budry on 16.06.19.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Customer.h"
#include "Movie.h"
#include "Rental.h"

using ::testing::Return;

class MovieMock : public Movie {
public:
    
    explicit MovieMock(const std::string& title) : Movie(title) {}
    
    MOCK_CONST_METHOD1(getPrice, double(int nbDayRented));
};

TEST(RentalTest, checkStatement) {
    
    MovieMock movie("Sans aucun GEN");
    Rental rental(movie, 5);
    
    EXPECT_CALL(movie, getPrice(5)).WillRepeatedly(Return(10.0));
    
    ASSERT_EQ(rental.statement(),"\tSans aucun GEN\t10\n");
}
