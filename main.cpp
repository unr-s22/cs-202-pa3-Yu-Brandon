#include "Money.h"
#include "Account.h"

int main(){
    Money money1(300, 23);
    std::cout << money1 << std::endl;
    Account account(money1);
    Money money2(200, 0);
    Money money3(300, 24);
    Money money4(501, 22);
    Money money5(300, 10);
    Money money6(201, 34);

    account.makeDeposit(money2);
    account.makeDeposit(money3);
    account.makeDeposit(money4);
    account.makeWithdraw(money5);
    account.makeWithdraw(money6);

    std::cout << account << std::endl;

    if(money1 >= money2){
        std::cout << "Money1 is greater than or equal to Money2" << std::endl;
    }
    else{
        std::cout << "Money1 is not greater than or equal to Money2" << std::endl;
    }

    if(money1 <= money2){
        std::cout << "Money1 is less than or equal to Money2" << std::endl;
    }
    else{
        std::cout << "Money1 is not less than or equal to Money2" << std::endl;
    }   

    if(money1 > money2){
        std::cout << "Money1 is greater than Money2" << std::endl;
    }
    else{
        std::cout << "Money1 is not greater than Money2" << std::endl;
    }

    if(money1 < money2){
        std::cout << "Money1 is less than Money2" << std::endl;
    }
    else{
        std::cout << "Money1 is not not than Money2" << std::endl;
    }

    if(money1 == money2){
        std::cout << "Money1 and Money2 are equal" << std::endl;
    }
    else{
        std::cout << "Money1 and Money2 are not equal" << std::endl;
    }

    if(money1 != money2){
        std::cout << "Money1 and Money2 are not equal" << std::endl;
    }
    else{
        std::cout << "Money1 and Money2 are equal" << std::endl;
    }
    return 0;
}