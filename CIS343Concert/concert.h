//
// Created by Saxton Stafford on 10/4/2017.
//

#ifndef CIS343CONCERT_CONCERT_H
#define CIS343CONCERT_CONCERT_H

#include <iostream>
#include <vector>
#include <ctime>

class Concert
{

private:
    // Who will be performing?
    std::string concertName;

    // A list of the people you want to take with you.
    std::vector<std::string> friends;

    // A value from 1-10 concerning how badly you want to see this show.
    int desire;

    // The date of the show.
    std::tm date;

public:
    // Default constructor.
    Concert();

    // Alternate constructor.
    Concert(std::string concertName, std::vector<std::string> &friends,
            int desire, std::tm &date);

    // Overloaded < operator.
    bool operator<(const Concert& other) const;

    // Overloaded ostream operator (got help from http://www.cplusplus.com/forum/beginner/118439/).
    friend std::ostream &operator<<(std::ostream&, const Concert &c);

};

#endif //CIS343CONCERT_CONCERT_H