//
// Created by 고민섭 on 2024. 8. 12..
//

#ifndef GENERAL_H
#define GENERAL_H

#include "account.h"
#include <vector>

void ShowMenu();
void CreateAccount(std::vector<Account> *acs);
void DepositMoney(std::vector<Account> *acs);
void WithdrawMoney(std::vector<Account> *acs);
void ShowAllAccountInfo(std::vector<Account> *acs);

#endif //GENERAL_H
