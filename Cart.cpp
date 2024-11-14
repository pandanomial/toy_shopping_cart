#include "Cart.h"
#include "Toy.h"
#include "Store.h"
#include<vector>
#include<string>
Cart::Cart( int howMany)//constructor
{
	mToyQuantity= howMany; //default
}
Cart::~Cart()//destructor
{

}
void Cart::AddToCart(int howMany)
{
	mToyQuantity= mToyQuantity+ howMany; //user add item to cart
}
int Cart::GetToyQuantity()  
{
	return mToyQuantity;
}
