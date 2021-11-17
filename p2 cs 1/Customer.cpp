#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>   
  
#include "Customer.h"

using namespace std;

// Copy constructor for customer class
Customer& Customer:: operator=(Customer *rhs) {
    if(this != rhs){
        accNumb = rhs->accNumb;
        accBalance = rhs->accBalance;
    }
    return *this;
}
    


//Generates random Acc Number
void Customer :: setAccNumber ()
{
    srand(time(NULL));
    
        accNumb = rand() % 100000 + 1; 
    

}

//Generates random double for Acc Balance
void Customer :: setBalance ()
{
    srand(time(NULL));
    double fRand(double min, double max);
    {
        accBalance= (double)rand() / RAND_MAX;
    }  
}

// Add balance to Customer acc
void Customer :: addBalance (double money)
{
    accBalance += money;
}

//Check the customer's balance
void Customer :: printBalance ()
{
    cout << "Customer balance is : " << accBalance <<endl;
}



