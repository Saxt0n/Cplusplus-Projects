//
// Created by Saxton Stafford 10/5/17
//

#include <iostream>
#include "concert.h"
#include <algorithm> //sort()

int main() {
    // List of friends to bring
    std::vector<std::string> f = {"Drew", "Sandy", "Shelby"};

    // Initializing various dates to use
    // Novemeber 8, 2017
    std::tm d1 = std::tm();
    d1.tm_year = 117;
    d1.tm_mon = 10;
    d1.tm_mday = 7;

    // Novemeber 15, 2017
    std::tm d2 = std::tm();
    d2.tm_year = 117;
    d2.tm_mon = 10;
    d2.tm_mday = 14;

    // December  8, 2017
    std::tm d3 = std::tm();
    d3.tm_year = 117;
    d3.tm_mon = 11;
    d3.tm_mday = 7;

    // Decemeber 25, 2017
    std::tm d4 = std::tm();
    d4.tm_year = 117;
    d4.tm_mon = 11;
    d4.tm_mday = 24;

    // January 1, 2018
    std::tm d5 = std::tm();
    d5.tm_year = 118;
    d5.tm_mon = 0;
    d5.tm_mday = 0;

    // Initializing 10 different concerts
    Concert c1 = Concert("Modest Mouse", f, 9, d1);
    Concert c2 = Concert("Two Door Cinema Club", f,7, d2);
    Concert c3 = Concert("Smashing Pumpkins", f, 3, d3);
    Concert c4 = Concert("Counting Crows", f, 7, d4);
    Concert c5 = Concert("Dirty Heads", f, 8, d5);
    Concert c6 = Concert("Vampire Weekend", f, 7, d1);
    Concert c7 = Concert("Childish Gambino", f, 5, d2);
    Concert c8 = Concert("Red Hot Chili Peppers", f, 9, d3);
    Concert c9 = Concert("The Killers", f, 4, d4);
    Concert c10 = Concert("Streetlight Manifesto", f, 6, d5);

    std::vector<Concert> concertList = {c1,c2,c3,c4,c5,c6,c7,c8,c9,c10};


    std::cout << "Before sorting:\n" << std::endl;
    for (int i = 0; i < concertList.size(); i++)
    {
        std::cout << concertList[i] << std::endl;
    }

    std::cout << "\nSorting... \n" << std::endl;

    // Sorting vector of all 10 concerts
    std::sort(concertList.begin(), concertList.end());

    // Printing the sorted vector
    for (int i = 0; i < concertList.size(); i++)
    {
        std::cout << concertList[i] << std::endl;
    }
}
