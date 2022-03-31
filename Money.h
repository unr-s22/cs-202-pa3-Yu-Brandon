#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>
#include <sstream>

class Money{
public:
    int allCents;

    Money();
    Money(int dollars, int cents);

    friend std::ostream& operator <<(std::ostream&, const Money&);

    Money operator +(const Money&);
    Money operator -(const Money&);
    bool operator ==(const Money&);
    bool operator !=(const Money&);
    bool operator >=(const Money&);
    bool operator <=(const Money&);
    bool operator >(const Money&);
    bool operator <(const Money&);

    ~Money();

};

#endif
