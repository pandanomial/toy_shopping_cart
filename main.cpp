//Picture this as a text-based shopping cart app.  


#include <iostream>
#include <string>
#include "Toy.h" 
#include "Store.h" 
#include "Cart.h" 
int main()
{
    int size=0;
    bool boolYesNumber = false;
    int tempTotal=0;
    int tempTotal2=0;
    int temphowMany = 0;
    std::string ask = "0";
    double price=0; 
    double totalPrice=0;
    int count=0;
    bool soldOut=false;
    Cart* cart = nullptr;

    //asks the user how many toys the store should have to start. The store only sells one kind of toy   
    do {
        //The Store needs to hold an arbitrary number of Toys 
        //don't know what the user will pick, so user input size
        std::cout << "Please enter how many toys the store should have!\n";
        std::cin >> size;
        //validate user input int number //force user to input int number
        if (std::cin.fail())
        {
            std::cout << "Please enter an integer number for how many toys the store should have!\n";
            std::cin.clear();
            std::cin.ignore(999, '\n');
            boolYesNumber = false;
        }
        else
        {
            boolYesNumber = true;
        }
    } while (boolYesNumber == false);//yes user entered int
   
 //  Main is in charge of creating the Toy objects, and they get stored in a Store object.
 //(and they must be the toys main made, no copies)  Dynamic array, list, or vector all work.
 
 //initialize store, first  to set the toy invetory by using the int from user input size  
 //And in store class, dynamically create toys by using vector, size is user input
    Store store = Store(size);
    Toy* newToy = store.Make(size);
    
 //get toy price. set by store
 //price = store.GetToyPrice();

//Give Toy a price property and a price.  
//so that When the user exits, tell them how much they spent by looking at the cart
    price = newToy->GetToyPrice();//

    //ask the user to buy toy repleatly until they want to quit
do {
    //store has all the toys and store knows how how many toys in stock
    //toys stored in store class 
        tempTotal = store.GetAllToys().size();

        if (tempTotal > 0)
        {       
            //Main asks the user if they would like to buy a toy over and over until they say no
            //store tells user how much a toy  costs and how many in stock.
            std::cout << "\nThere are (is) " << tempTotal << " toys (toy) in stock! Price is  $" << price<<" each! ";
            std::cout << "\nBuy a toy? enter 1 for yes. Any other key for no. \n";
            std::cin >> ask;
            //user says yes to buy toy
            if (ask == "1")
            {
                //The user put items in their cart
                //Cart* cart = nullptr;
                
                //create cart initilize cart
                if (count == 0)
                {
                     cart = new Cart(1);
                     
                }
                //then second time after to add item in the cart
                else
                {
                   cart->AddToCart(1);
                }

                tempTotal = store.GetAllToys().size();//the toys in store
                //sold one toy 
                //class store vector reduce one
                store.BoughtOne();
                //store has one toy less than before
                //The store can run out of toys, so maybe that's why they went out of business.
                tempTotal2 = store.GetAllToys().size();

                //std::cout << "Toys are  $"<< price << " each. and currently in stock  " ;
                //std::cout << tempTotal2 << "left! \n";
                count++;//how many times user us in the loop
                if (tempTotal2 == 0) //check store if toys are sold out
                     soldOut = true;
                else
                    soldOut = false;

                temphowMany = (*cart).GetToyQuantity();//go check how many toys in the cart
            }
        }
        else
        {//empty shopping cart
            cart = new Cart(0);
            tempTotal2 = 0; //sold out
            temphowMany = (*cart).GetToyQuantity();//go check how many toys in the cart
            soldOut = true;
        }
       
    } while (ask == "1" && !soldOut);// exit loop when user want to or store has no toy left
    
   

    // price is from Toy class. temphowMany is from the cart
    std::cout << "Toys are  $" << price << " each. And your total is $" << price * temphowMany<<" .\n";

    // avoid memory leak
    if (!(newToy==nullptr))
    {
        delete newToy;
        newToy = nullptr;
    }
    if (!(cart == nullptr))
    {
        delete cart;
        cart = nullptr;
    }

}

  