#include<iostream>
using namespace std;

int mango(int quantity, int price)
{
	int free_mango = quantity / 3;
	cout << "you have " << free_mango << " free mangos"<<endl;
	return (quantity - free_mango) * price;   // return (quantity -(quantity/3)) * price;
}
int main()
{
	cout << "price of mango= "<<mango(5,5)<< "$" << endl;
	return 0;
}