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

TEST(CustomerTest, simple) {
    Customer customer("Homer Simpson");
    customer.addRental( Rental( Movie("300"), 1));

    ASSERT_EQ(customer.statement(),
            "Rental Record for Homer Simpson\n\t300\t2\nAmount owed is 2\nYou earned 1 frequent renter points"
    );
}




#endif //LABO4_CUSTOMERTEST_CPP
