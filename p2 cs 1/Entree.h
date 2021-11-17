#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <array>




using namespace std;

class Entree
{
    

private:
    

public:
    //Declare variables for Entree class
    int count=0;
    vector <string> eName;
    vector <int> eId;
    vector <int> eQuantity;
    vector <double> ePrice;
    vector <int> eCalories;
    vector <int> expDate;
    vector <bool> Refrigerated;

    bool isSpoil;


//Declare functrions for Entree class
    void setName();
    void setQuantity();
    void setPrice();
    void setCalories();
    void setId();
    void addNewEntree(string name, int quantity);
    void printEntree();
    void start();
    void addExistingEntree(int id,int quantity);
    void printQuantity();
    void expirationDate();
 
    

    Entree& operator= (Entree *rhs);
    

};


