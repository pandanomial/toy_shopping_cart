#pragma once
#include "Store.h"
#include<vector>
#include<string>
class Cart
{

private:
	std::string mToyName;   
	double mToyPrice;       
	int mToyQuantity=0;  
	 
public:
	Cart(int howMany);//constructor
	~Cart();//destructor
	void AddToCart(int howMany);
	int GetToyQuantity();
};

