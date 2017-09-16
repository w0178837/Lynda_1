/*
asciitable.cpp
May 20, 2014
Peggy Fisher
*/
#include <iostream>
using namespace std;
int main()
{
    int dollars, cents;
    double price;
    char dollarsign = 36; //implicit conversion

    cout<<"Enter the price in dollars and cents"<<endl;
    cin>>price;
    dollars = price; // implicitly inserts dollar portion to the dollars variable as an int
    cents = (price - dollars) * 100; // gives us the cent value truncated to the integer value left of the decimal place after the calculation

    cout<<"Dollars: "<<dollarsign<<dollars<<" cents: "<<cents<<endl;
    return 0;
}