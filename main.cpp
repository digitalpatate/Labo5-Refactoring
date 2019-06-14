#include <iostream>

#include "Customer.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( NewReleaseMovie( "Avengers: Endgame" ), 5));
    customer.addRental( Rental( ChildrenMovie("Snow White"), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}