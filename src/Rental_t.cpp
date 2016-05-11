/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"

int main() {

    // TODO:  Add test cases

	Video v = new Video("Captain America", Video::NEW_RELEASE);
    Rental r = new Rental(v, 5);

    return 0;
}
