#pragma once
#include<vector> 
#include<string>
#include "Toy.h"
class Toy;

class Store
{
private:
	Toy* mToy;
	std::string mStoreName;
	std::vector<Toy*> mAllToys; //store has toys I used vector
	int mToys;
	double mPrice;
	
public:
	Store();
	Store(int toyQuantity);
	~Store();
	Toy* Make(int size);
	void SetStoreName(std::string newName);
	std::string GetStoreName();
	std::vector<Toy*> GetAllToys(); // return the vector
	void SetToys(int size);
	int GetToys();
	void BoughtOne();
	double GetToyPrice();
};



