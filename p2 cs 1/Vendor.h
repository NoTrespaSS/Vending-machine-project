#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <array>



#include "Entree.h"
#include "Customer.h"


using namespace std;

class Vendor 
{


private:

    //Inherited objects
    Entree entree; 
    Customer customer;
public:


//Declare functrions for Vendor class
    void Load(string name, int id, int quantity, double price, int calories);

    void sell(int id);
    void PowerOutrage();
    void CleanStock();
    void isStocked(int id);
    void  listItems ();
   
   


    Vendor();

    


};

