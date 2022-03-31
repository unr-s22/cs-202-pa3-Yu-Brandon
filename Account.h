#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account{
    Money*mon;
    int balance;
    std::vector<Money>deposits;
    std::vector<Money>withdraws;
    bool balanceUpdate = 0;
public:
    Account(Money money);
    
    void makeWithdraw(Money money);
    void makeDeposit(Money money);
    void updateBalance();

    friend std::ostream& operator <<(std::ostream&, const Account&);

    ~Account();
};

#endif