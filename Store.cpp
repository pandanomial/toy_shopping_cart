
#include "Store.h"
#include "Toy.h"

Store::Store()
{
	mAllToys.assign(0, mToy);
}

Store::Store(int toyQuantity)

{
	
	mAllToys.assign(toyQuantity, mToy); //i used vector
	//int* dynArr = nullptr;
	 //dynArr = new int[toyQuantity]();
	mToys = toyQuantity;
	mPrice = 5;
}



Toy* Store::Make(int size) 
{
	Toy* toy = new Toy();  
	mPrice = 5;
	return toy;
}

void Store::SetStoreName(std::string newName) 
{
	mStoreName = newName;
}

std::string Store::GetStoreName() 
{
	return mStoreName;
}

//Toy* Store::GetAllToys()
std::vector <Toy*> Store::GetAllToys()
{
	return mAllToys;
}

int Store::GetToys()
{
	return mToys;
}
double Store::GetToyPrice()
{
	return mPrice;
}
void Store::BoughtOne()
{
	mAllToys.pop_back();
	
}

void Store::SetToys(int size)
{
	int* dynArr = nullptr;
	//dynArr = new int[size]();
}
Store::~Store()
{
}
