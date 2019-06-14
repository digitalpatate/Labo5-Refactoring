// Customer.cpp
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

using namespace std;

string Customer::statement()
{
    double totalAmount = 0;
    int frequentRenterPoints = 0;
    ostringstream result;
    result << "Rental Record for " << getName() << "\n";

    for(const Rental& rental : _rentals){
        frequentRenterPoints += rental.getRenterPoint();
        result << rental.statement();
        totalAmount += rental.getPrice();
    }
    // add footer lines
    result << "Amount owed is " << totalAmount << "\n"
           << "You earned " << frequentRenterPoints << " frequent renter points";

    return result.str();
}