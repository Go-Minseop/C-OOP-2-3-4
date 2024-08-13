//
// Created by 고민섭 on 2024. 8. 12..
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
private:
    int accID_{};
    int balance_{};
    std::string *userName_;
public:
    Account(int ID, int money, const std::string &name);
    Account(const Account &ref);
    ~Account();

    [[nodiscard]] int GetID() const;
    void Deposit(int money); //입급
    bool Withdraw(int money); //출금
    void ShowAccInfo() const;
};

#endif //ACCOUNT_H
