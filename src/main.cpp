#include "iostream"
#include "../include/general.h"

int main()
{
    // map을 통해 구¡현하는 편이 좋아 보임
    std::vector<Account> accs;

    int menu;

    while(true)
    {
        ShowMenu();
        std::cout << "선택: ";
        std::cin >> menu;
        std::cout << "받은 입력: " << menu << std::endl;

        if (menu == 1) CreateAccount(&accs);
        else if (menu == 2) DepositMoney(&accs);
        else if (menu == 3) WithdrawMoney(&accs);
        else if (menu == 4) ShowAllAccountInfo(&accs);
        else if (menu == 5) break;
        else std::cout << "잘못된 입력" << std::endl;


    return 0;
}
