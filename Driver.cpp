#include "Vendor.h"

#include "Vendor.cpp"
#include "Customer.cpp"
#include "Entree.cpp"

#include <iostream>
#include <time.h>
#include <stdlib.h>     

using namespace std;



int main(int argc, char const *argv[])
{
  //Testing Customer methods
    Customer bal;
    
    bal.setBalance();
    bal.printBalance();
    bal.addBalance(10);
    bal.printBalance();

  

//Testing Vendor methods
    Vendor vend;
    
    vend.listItems();
    vend.isStocked(1);
    vend.CleanStock();
  
   vend.listItems();
   //add existing item
    vend.Load("Twix", 2, 2, 3.25, 888);
    // add new item
    vend.Load("Fig Bar", 8, 5, 3.25, 888);
    vend.sell(1);
    vend.listItems();
      return 0;
}
