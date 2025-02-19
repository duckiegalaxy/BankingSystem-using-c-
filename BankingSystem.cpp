#include <iostream>

double showBalance(double balance);
void deposit();
void withdraw(double balance);
double balance = 10;
int choice();

int main()
{
    int userChoice;

    do
    {
        userChoice = choice();

        switch (userChoice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw(balance);
            std::cout << "Your current balance is: " << balance << "\n";
            break;
        case 4:
            std::cout << "Thank you for visiting! Have a great day!\n";
            break;
        default:
            std::cout << "Please select a number between 1 and 4.\n";
        }

    } while (userChoice != 4);

    return 0;
}

double showBalance(double balance)
{
    std::cout << "Your current balance is: " << balance << "\n";
    return balance;
}

void deposit()
{
    double amount;
    std::cout << "Enter the amount you wish to deposit: ";
    std::cin >> amount;
    balance += amount;
    std::cout << "Your balance has been updated to: " << balance << "\n";
}

void withdraw(double balance)
{
    double amount;
    std::cout << "Enter the amount you wish to withdraw: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficient funds. Your current balance is: " << balance << "\n";
    }
    else
    {
        balance -= amount;
        std::cout << "Your balance has been updated to: " << balance << "\n";
    }
}

int choice()
{
    int choice;
    std::cout << "******************************\n";
    std::cout << "********** Main Menu *********\n";
    std::cout << "******************************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Funds\n";
    std::cout << "3. Withdraw Funds\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}
