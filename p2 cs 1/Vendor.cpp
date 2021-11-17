
#include "Vendor.h"

#include <iostream>
#include <time.h>
#include <stdlib.h>     
#include <vector>

using namespace std;

// Constructor. Inherits Entree object and Custumer object
Vendor :: Vendor() {
    this->entree = new Entree();
    this->customer = new Customer();
    entree.start();
    customer.addBalance(10);
}


// Load items into vending machine
void Vendor :: Load (string name, int id, int quantity, double price, int calories)
{
    bool found = false;
  for (size_t i = 0; i < entree.eId.size(); i++) {
      if (id == entree.eId[i]) {
          found = true;
         // entree.eName.push_back(name);
          entree.eQuantity[i] += quantity;
      }
  }
  if (!found) {
        entree.eName.push_back(name);
        entree.eId.push_back(id);
        entree.eQuantity.push_back(quantity);
        entree.ePrice.push_back(price);
        entree.eCalories.push_back(calories);
  }
}

void Vendor :: listItems ()
{   for(int i =0; i<entree.eName.size();i++ ) 
    cout << "\nItem name : "<<entree.eName[i]<< "    Quantity in stock : " << entree.eQuantity[i] <<
         "  Item Price :"<<entree.ePrice[i] << "   Expiration date  :  " << entree.expDate[i]<<
         "    Item Calories  :  "<< entree.eCalories[i]<<endl; 
}

//Clean the vending machine of the items that are spoiled or are sold
void Vendor :: CleanStock()
{
     for (size_t i = 0; i < entree.eName.size(); i++)
    {

        if (entree.expDate[i] <= 0  || entree.eQuantity[i] == 0 )
        {
            entree.eName[i] = {"----"};
            entree.eQuantity[i] = 0;
            entree.eCalories[i]=0;
            entree.expDate[i]=99;
            entree.eId[i]=99;
        }
    }
}


// Cheching if the item exists 
void Vendor :: isStocked(int id)
{
    for (size_t i = 0; i < entree.eId.size(); i++)
    {
        if (entree.eId[i] == id && entree.expDate[i] > 0  ){
            cout << "\nItems is Available !!!";
        cout << "Item name : "<<entree.eName[i]<< "    Quantity in stock : " << entree.eQuantity[i] <<
         "  Item Price :"<<entree.ePrice[i] << "   Expiration date  :  " << entree.expDate[i]<<endl; 
         return;
        }
    }
}

// Sell the specific item to the Customer
void Vendor :: sell(int id)
{
    if (customer.accBalance >= entree.ePrice[id] && entree.eQuantity[id] > 0 && entree.eId[id] != 99)
    {
        customer.accBalance -= entree.ePrice[id];
        entree.eQuantity[id]--;
        cout << "\nItem Sold , Remaining balance : " << customer.accBalance << endl;
    }
    else
    cout << "\nNot enough money in acc. Or item does not exist!"<< endl;
}




