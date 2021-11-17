#include "Vendor.h"


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
    vend.Load("Apple", 1, 2, 3.25, 888);
    // add new item
    vend.Load("Fig Bar", 8, 5, 3.25, 888);
	//Customer buy apple
    vend.sell(1);
	//Listing all items after the purchase
    vend.listItems();
      return 0;
}
