#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <array>



using namespace std;

class Customer
{
private:
   
    

    
public:
 //Declare variables for Customer class
    int  accNumb=0;
    double accBalance=0;

//Declare functrions for Customer class
    int getaccNumb();
    double getBalance();
    void setBalance();
    void setAccNumber();
    void addBalance(double accBalance);
    void buyItem(double ePrice);
    void printBalance ();


    Customer& operator= (Customer *rhs);
};


