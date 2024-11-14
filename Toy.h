#pragma once
class Store;
#include "Store.h"
#include<vector>
#include<string>
class Toy
{
private:
	std::string mToyName;   
	double mToyPrice;       
	int mToyQuantity=0; 
	
	 
public:
	Toy();//constructor
	Toy(int quantity);
	~Toy();//destructor
	Toy(std::string name, double price, int quantity);//overload
	void SetToyName(std::string newName);
	std::string GetToyName();
	void SetToyPrice(double newPrice);
	int GetToyQuantity();
	void SetToyQuantity(int newQuantity);
	double GetToyPrice()const;
 
};
 