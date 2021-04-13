#include<bits/stdc++.h>
//#include <iostream>
//#include <iomanip>
using namespace std;

struct RetailItem{
	char description[100];
	int unitsOnHand;
	double price;
};
int main(){
    struct RetailItem item1={
		"Jacket", 12, 59.95
	};
	struct RetailItem item2={
		"Designer jeans", 40, 34.95
	};
	struct RetailItem item3={
		"shirt", 20, 24.95
	};
    cout << fixed << setprecision(2);
    cout << left << setw(12) << " "
         << left << setw(22) << "Description"
         << left << setw(16) << "Units on Hand"
         << left << setw(9) << "Price"
         << '\n';
    cout << "-----------------------------------------------------------\n";
    cout << left << setw(12) << "Item #1"
         << left << setw(22) << item1.description
         << left << setw(16) << item1.unitsOnHand
         << left << setw(9) << item1.price
         << endl;
    cout << left << setw(12) << "Item #2"
         << left << setw(22) << item2.description
         << left << setw(16) << item2.unitsOnHand
         << left << setw(9) << item2.price
         << endl;
    cout << left << setw(12) << "Item #3"
         << left << setw(22) << item3.description
         << left << setw(16) << item3.unitsOnHand
         << left << setw(9) << item3.price
         << endl;
    return 0;
}
