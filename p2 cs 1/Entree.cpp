#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <array>

#include "Entree.h"



// Copy constructor for Entree class
Entree& Entree:: operator=(Entree *rhs) {
    if(this != rhs){
        eName = rhs->eName;
        eId = rhs->eId;
        eQuantity = rhs->eQuantity;
        ePrice = rhs->ePrice;
        eCalories = rhs->eCalories;
        expDate = rhs->expDate;
        Refrigerated = rhs->Refrigerated;
    }
    return *this;
}


// Set the names for Entree items
void Entree :: setName(){
    eName.push_back("Banana");
    eName.push_back("Apple");
    eName.push_back("Twix");
    eName.push_back("Nuts");
    eName.push_back("Apple Juice");
     
}

// Generates the ID for Entree items
void Entree :: setId()
{
    for (size_t i = 0; i < eName.size(); i++)
    {
        eId.push_back(i);
        
    }
    
}

// Generates the Calories for Entree items
void Entree :: setCalories ()
{
    srand(time(NULL));
    for (int i=0; i < eName.size();i++)
    {
      
      eCalories.push_back(rand() % 999);
      
    }
}


// Generates the Quantity for Entree items
void Entree :: setQuantity () 
{
    srand(time(NULL));
    for (int i = 0; i < eName.size(); i++)
    {
        
        eQuantity.push_back(rand() % 10);
        
    }
    
}


// Generates the Price for Entree items
void Entree :: setPrice()
{
    srand(time(NULL));
    for (int i = 0; i < eName.size(); i++)
    {
        ePrice.push_back(rand() % 10);
    }
    
}



// Generates the Expiration date for Entree items
void Entree :: expirationDate()
{
    for (size_t i = 0; i < eName.size(); i++)
    {
        expDate.push_back(rand() % 10);
    }
    
}


// Funciton to initialise the Variables
void Entree :: start()
{
    setName();
    setId();
    setCalories();
    setQuantity();
    setPrice();
    expirationDate();
  

}