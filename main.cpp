#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    int cent_amount;
    int fifty_cents, twenty_cents, ten_cents, five_cents, two_cents, one_cent;
    int remaining_amount;
    int change_amount;

    // Input
    cout << "Enter change amount in cents (must be less than one euro): ";
    cin >> cent_amount;

    // Calculation
    fifty_cents = cent_amount / 50;
    remaining_amount = cent_amount % 50;

    twenty_cents = remaining_amount / 20;
    remaining_amount = remaining_amount % 20;

    ten_cents = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;

    five_cents = remaining_amount / 5;
    remaining_amount = remaining_amount % 5;

    two_cents = remaining_amount / 2;
    remaining_amount = remaining_amount % 2;

    one_cent = remaining_amount / 1;
    remaining_amount = remaining_amount % 1;

    // Total number of coins
    change_amount = fifty_cents + twenty_cents + ten_cents + five_cents + two_cents + one_cent;

    // Output
    cout << "50 cent coins: " << fifty_cents << endl;
    cout << "20 cent coins: " << twenty_cents << endl;
    cout << "10 cent coins: " << ten_cents << endl;
    cout << " 5 cent coins: " << five_cents << endl;
    cout << " 2 cent coins: " << two_cents << endl;
    cout << " 1 cent coins: " << one_cent << endl;
    cout << "\nChange consists of " << change_amount << " coins in total.";

    return 0;
}

