//
// Created by 고민섭 on 2024. 8. 12..
//

#include "account.h"
#include <iostream>

// acount의 name 동적할당 해야함
Account::Account(const int ID, const int money, const std::string &name): accID_(ID), balance_(money)
{
    userName_ = new std::string(name);
}

Account::Account(const Account &ref)
{
    accID_ = ref.accID_;
    balance_ = ref.balance_;
    userName_ = new std::string(*ref.userName_);
}

Account::~Account() = default;

int Account::GetID() const
{
    return accID_;
}

void Account::Deposit(const int money)
{
    balance_ += money;
}

bool Account::Withdraw(const int money)
{
    if (balance_ >= money)
    {
        balance_ -= money;
        return true;
    }
    return false;
}

void Account::ShowAccInfo() const
{
    std::cout << "계좌ID: " << accID_ << std::endl;
    std::cout << "이 름: " << *userName_ << std::endl;
    std::cout << "입금액: " << balance_ << std::endl;
}



