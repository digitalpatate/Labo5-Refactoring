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

class RentalMock : public Rental {
public:

    RentalMock(const Movie& m, int n) : Rental(m, n) {}
    MOCK_CONST_METHOD0(statement, std::string());
    MOCK_CONST_METHOD0(getPrice, double());
    MOCK_CONST_METHOD0(getRenterPoint, int());
};

TEST(CustomerTest, checkStatement) {
    
    Customer customer("Jack");
    RentalMock rental(Movie("Movie"), 1);
    customer.addRental(&rental);

    EXPECT_CALL(rental, statement()).WillRepeatedly(Return("Rental\n"));
    EXPECT_CALL(rental, getPrice()).WillRepeatedly(Return(10.0));
    EXPECT_CALL(rental, getRenterPoint()).WillRepeatedly(Return(5));
    
    ASSERT_EQ(customer.statement(),
            "Rental Record for Jack\nRental\nAmount owed is 10\nYou earned 5 frequent renter points"
    );
}




#endif //LABO4_CUSTOMERTEST_CPP
