//
// Created by 고민섭 on 2024. 8. 12..

#include "general.h"
#include <iostream>

void ShowMenu()
{
    std::cout << "-----Menu-----" << std::endl;
    std::cout << "1. 계좌개설" << std::endl;
    std::cout << "2. 입 금" << std::endl;
    std::cout << "3. 출 금" << std::endl;
    std::cout << "4. 계좌정보 전체 출력" << std::endl;
    std::cout << "5. 프로그램 종료" << std::endl;
}

void CreateAccount(std::vector<Account> *acs)
{
    int id_tmp;
    int bal_tmp;
    std::string name_tmp;
    std::cout << "[계좌개설]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> id_tmp;
    std::cout << "이 름: ";
    std::cin >> name_tmp;
    std::cout << "입금액: ";
    std::cin >> bal_tmp;
    acs->emplace_back(id_tmp, bal_tmp, name_tmp);
    std::cout << "계좌 생성 완료" << std::endl;
}

void DepositMoney(std::vector<Account> *acs)
{
    int tmpID;
    int money;
    std::cout << "[입 금]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> tmpID;
    std::cout << "입금액: ";
    std::cin >> money;
    for (auto &ac : *acs)
    {
        if (ac.GetID() == tmpID)
        {
            ac.Deposit(money);
            std::cout << "입금 완료" << std::endl;
            return;
        }
    }
    std::cout << "존재하지 않는 id" << std::endl;
}

void WithdrawMoney(std::vector<Account> *acs)
{
    int tmpID;
    int money;
    std::cout << "[출 금]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> tmpID;
    std::cout << "출금액: ";
    std::cin >> money;
    for (auto &ac : *acs)
    {
        if (ac.GetID() == tmpID)
        {
            if (ac.Withdraw(money))
            {
                std::cout << "출금 완료" << std::endl;
            }
            else
            {
                std::cout << "잔액 부족" << std::endl;
            }
            return;
        }
    }
    std::cout << "존재하지 않는 id" << std::endl;
}

void ShowAllAccountInfo(const std::vector<Account> *acs)
{
    for (const auto& ac : *acs)
    {
        ac.ShowAccInfo();
    }
    std::cout << std::endl;
}