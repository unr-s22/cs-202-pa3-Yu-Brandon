#include "Money.h"

Money::Money(int dollars, int cents){
    allCents = (dollars * 100) + cents;
}

std::ostream& operator<< (std::ostream& os, const Money& money){
    os << "$" << money.allCents * 0.01;
}

Money::Money(){
    allCents = 0;
}

Money Money::operator+ (const Money& m){
        Money temp;
        temp.allCents = allCents + m.allCents;
        return temp;
}

Money Money::operator -(const Money& m){
    Money temp;
    temp.allCents = allCents - m.allCents;
    return temp;
}

bool Money::operator ==(const Money& m){
    return allCents == m.allCents;
}

bool Money::operator !=(const Money& m){
    return allCents != m.allCents;
}

bool Money::operator >=(const Money& m){
    return allCents >= m.allCents;
}

bool Money::operator <=(const Money& m){
    return allCents <= m.allCents;
}

bool Money::operator <(const Money& m){
    return allCents < m.allCents;
}

bool Money::operator >(const Money& m){
    return allCents > m.allCents;
}