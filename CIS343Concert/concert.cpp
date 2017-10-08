//
// Created by Saxton Stafford on 10/4/2017.
//

#include "concert.h"

// Default constructor.
Concert::Concert()
{
    concertName = "";
    friends = {};
    desire = 0;
    date = std::tm();
}

// Alternate constructor.
Concert::Concert(std::string concertName, std::vector<std::string> &friends,
                 int desire, std::tm &date)
{
    this->concertName = concertName;
    this->friends = friends;
    this->desire = desire;
    this->date = date;
}

// Overloaded < operator. First compares by year, then month, then day, then desire.
bool Concert::operator<(const Concert& other) const
{
    if(date.tm_year < other.date.tm_year)
        return true;
    else if(date.tm_year > other.date.tm_year)
        return false;
    else
    {
        if(date.tm_mon < other.date.tm_mon)
            return true;
        else if(date.tm_mon > other.date.tm_mon)
            return false;
        else
        {
            if(date.tm_mday < other.date.tm_mday)
                return true;
            else if(date.tm_mday > other.date.tm_mday)
                return false;
            else
            {
                return (desire < other.desire);
            }
        }
    }
}

// Overloaded ostream operator (got help from http://www.cplusplus.com/forum/beginner/118439/).
std::ostream &operator<<(std::ostream& stream, const Concert &c)
{
    stream << c.concertName << " on ";
    stream << c.date.tm_mon + 1 << "/" << c.date.tm_mday + 1 << "/" << c.date.tm_year + 1900 << " with ";
    for (int i = 0; i < c.friends.size(); i++)
    {
        stream << c.friends[i] << " ";
        if (i + 1 != c.friends.size()) {
            stream << "and ";
        }
    }

    stream << "       Desire: " << c.desire;
    return stream;
}