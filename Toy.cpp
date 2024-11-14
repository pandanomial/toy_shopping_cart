#include "Toy.h"
class Store;
#include "Store.h"
#include<vector>
#include<string>
Toy::Toy()//constructor
{
	mToyQuantity = 1; //default
	mToyPrice = 5;//default 
}
Toy::Toy(int quantity)//constructor
{
	mToyQuantity = quantity;  
	mToyPrice = 5;//default price
}

Toy::~Toy()//destructor
{

}
Toy::Toy(std::string name, double price, int quantity) //overload
{
	mToyName = name;
	mToyPrice = price;
	mToyQuantity = quantity;

}
std::string Toy::GetToyName()  
{
	return mToyName;
}
double Toy::GetToyPrice() const  
{
	return mToyPrice;
}
int Toy::GetToyQuantity()  
{
	return mToyQuantity;
}

void Toy::SetToyName(std::string newName)  
{
	mToyName=newName;
}
void Toy::SetToyPrice(double newPrice)  
{
	 mToyPrice=newPrice;
}
void Toy::SetToyQuantity(int newQuantity) //
{
	 mToyQuantity=newQuantity;
}