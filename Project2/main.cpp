#include <iostream>

using namespace std;

int main()
{
    int number_of_rooms {0};
	const double price_per_room {30.0}; //price per room here
    const double sales_tax {0.06};
    const int expiration {30};
    
    cout << "Welcome to carpet cleaning service" << endl;
    cout << "Enter the number of rooms: " << endl;
    cin >> number_of_rooms;
    cout << "Price per room is: $" << price_per_room << endl;
    cout <<"Taxes :$"<< sales_tax << endl;
    cout << "Expires in "<< expiration << endl;
    cout << "==============================" << endl;
    cout << "Total Price:  $" << price_per_room * number_of_rooms + sales_tax << endl;
    

	return 0;
}
