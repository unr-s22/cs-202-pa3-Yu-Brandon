#include "Account.h"

Account::Account(Money money){
     balance = money.allCents;
}

void Account::makeWithdraw(Money money){
    withdraws.push_back(money);
    balanceUpdate = 1;
}

void Account::makeDeposit(Money money){
    deposits.push_back(money);
    balanceUpdate = 1;
}

void Account::updateBalance(){
    if(balanceUpdate){
        for(int j = 0; j < deposits.size(); j++){
            balance = balance + deposits[j].allCents;
        }
        for(int i = 0; i < withdraws.size(); i++){
            balance = balance - withdraws[i].allCents;
        }
    }
}

std::ostream &operator <<(std::ostream &os, const Account &account){
    Account::updateBalance;
    os << "Account Details" << std::endl << "--------------------------" << std::endl <<
    "Current Balance:$" << account.balance * 0.01 << std::endl << "--------------------------" << std::endl 
    << "Number of Deposits: " << account.deposits.size() << std::endl << "--------------------" << std::endl;
    for(int k = 0; k < account.deposits.size(); k++){
        os << "(" << k << ") " << "$" << account.deposits[k] << std::endl;
    }
    os << "--------------------------" << std::endl << "Number of Withdrawals:" << account.withdraws.size() << 
    std::endl << "--------------------------" << std::endl;
    for(int l = 0; l < account.deposits.size(); l++){
        os << "(" << l << ") " << "$" << account.withdraws[l] << std::endl;
    }
    os << "----" << std::endl;
}