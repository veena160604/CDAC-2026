//============================================================================
// Name        : 2.cpp
// Author      : Veena
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class product {
	int productId;
	string name;
	double price;
	int quantity;
public:
	// Read all fields from user
	void acceptDetails (){
		cout <<"\nEnter product ID, Name, Price, and Quantity: "<< endl;
		cin>>productId>>name>>price>>quantity;
	}
	// Print formatted product info
	void displayDetails ()const{

		cout << productId << "\t" << name << "\t" << price << "\t" << quantity << "\t" << totalvalue() << endl;


	}
	double totalvalue ()const{
		// price * quantity
		return price*quantity;
	}
	bool isLowStock (int threshold) const{
		// true if quantity < threshold
		return quantity < threshold;
	}
	string getname() const{
		return name;

	}
};
   //part b function overloading+default argument
double reorderCost(int qty,double unit_price)
{
	cout<<"[overload : int qty ]"<< endl;
	return qty*unit_price;
}
double reorderCost(double qty,double unit_price)
{
	cout<<"[overload : double qty ]"<< endl;
	return qty*unit_price;
}
double reorderCost(double qty,double unit_price, double taxrate)
{
	cout << "[Overload: double qty + tax] ";
	    double base = qty * unit_price;
	    return base + (base * taxrate / 100.0);
}
//default argument
double applyDiscount(double price, double discountPercent = 10.0) {
    return price - (price * discountPercent / 100.0);
}
int main() {
	cout<<fixed << setprecision(2);
	product p[5];
	for (int i=0;i<5;i++){
		 cout <<"--- Enter Details for 5 Products ---" << i+1<< " " << endl;
		p[i].acceptDetails();
	}
	cout <<"===== INVENTORY REPORT =====" << endl;
			cout << "ID    Name     Price     quantity     TotalValue"  <<endl;
	for ( int i=0;i<5;i++){
		p[i].displayDetails();
	}
	int highest=0;
	for(int i=0;i<5;i++){
		if(p[i].totalvalue() > p[highest].totalvalue()){
			highest=i;
		}
	}
    cout<<"Highest valued product" <<p[highest].getname() << endl;
    cout << "Total Value: "<< p[highest].totalvalue() << endl;

    int threshold;
    cout << "Enter low stock threshold: " << endl;
    cin >> threshold;
    cout << "\nLow Stock Products:\n";

       for (int i = 0; i < 5; i++)
       {
           if (p[i].isLowStock(threshold))
           {
               cout << p[i].getname() << endl;
           }
       }
       // PART B demo: calling every overloaded version + default argument

           cout << "\n===== PART B: FUNCTION OVERLOADING DEMO =====\n";

           cout << "reorderCost(10, 25.5) = "
                << reorderCost(10, 25.5) << endl;

           cout << "reorderCost(7.5, 25.5) = "
                << reorderCost(7.5, 25.5) << endl;
           cout << "reorderCost(10, 25.5, 18.0) = "
                << reorderCost(10, 25.5, 18.0) << endl;
           // applyDiscount called WITHOUT the second argument -> uses default 10%
           cout << "applyDiscount(1000) [default 10%] = "
                << applyDiscount(1000) << endl;

           // applyDiscount called WITH an explicit discount -> overrides default
           cout << "applyDiscount(1000, 25) [explicit 25%] = "
                << applyDiscount(1000, 25) << endl;


	return 0;
}
