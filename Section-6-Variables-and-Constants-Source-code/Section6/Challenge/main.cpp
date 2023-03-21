
// Section 6
// Challenge

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main()
{

    cout << "Estimate for carpet cleanig service" << endl;
    cout << "Number of small rooms: ";
    int no_of_small_rooms;
    cin >> no_of_small_rooms;
    cout << "Number of large rooms: ";
    int no_of_large_rooms;
    cin >> no_of_large_rooms;
    const int price_per_small_rooms = 25;
    const int price_per_large_rooms = 35;
    cout << "Price per small rooms: $";
    cout << price_per_small_rooms << endl;
    cout << "Price per large rooms: $";
    cout << price_per_large_rooms << endl;
    cout << "Cost : $";
    cout << (price_per_small_rooms * no_of_small_rooms) + (price_per_large_rooms * no_of_large_rooms) << endl;
    const float tax = 0.06;
    cout << "Tax : $";
    cout << ((price_per_small_rooms * no_of_small_rooms) + (price_per_large_rooms * no_of_large_rooms)) * tax << endl;
    cout << "========================================"<<endl;
    cout << "Total estimate: $";
    cout << (price_per_small_rooms * no_of_small_rooms) + (price_per_large_rooms * no_of_large_rooms) + (((price_per_small_rooms * no_of_small_rooms) + (price_per_large_rooms * no_of_large_rooms)) * tax) << endl;
    cout << endl;
    const int valid_days{30};
    cout << "This estimate is valid for " << valid_days << " days" << endl;
    return 0;
}
