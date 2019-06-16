//
//  PriceStateTest.cpp
//  Labo4_test
//
//  Created by Nohan Budry on 16.06.19.
//

#include <stdio.h>

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "PriceState.h"

TEST(RegularPriceTest, checkPrice) {
    RegularPriceState priceState;
    
    ASSERT_EQ(priceState.calculatePrice(1), 2);
    ASSERT_EQ(priceState.calculatePrice(2), 2);
    ASSERT_EQ(priceState.calculatePrice(3), 3.5);
    ASSERT_EQ(priceState.calculatePrice(4), 5);
}

TEST(ChildrenPriceTest, checkPrice) {
    ChildrenPriceState priceState;
    
    ASSERT_EQ(priceState.calculatePrice(1), 1.5);
    ASSERT_EQ(priceState.calculatePrice(2), 1.5);
    ASSERT_EQ(priceState.calculatePrice(3), 1.5);
    ASSERT_EQ(priceState.calculatePrice(4), 3);
}

TEST(NewReleasePriceTest, checkPrice) {
    NewReleasePriceState priceState;
    
    ASSERT_EQ(priceState.calculatePrice(1),3 );
    ASSERT_EQ(priceState.calculatePrice(2),6 );
    ASSERT_EQ(priceState.calculatePrice(3),9 );
    ASSERT_EQ(priceState.calculatePrice(4),12);
}
