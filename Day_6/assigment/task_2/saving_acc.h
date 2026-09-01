#pragma once
#include"account.h"

class Saving: public Account{
    private:
    static float int_rate; 
   static  float min_balance;

   public:

   Saving(string name, float balance):Account(name,  balance){};

   void displayAccInfo(){
    Account::displayAccInfo();
    cout<<"\n int_rate: " << int_rate;
    cout<< "\n min_balance: " << min_balance;
   }

   float caluculate_returns(){

    float returns = (int_rate * balance) ; 
    return returns;

   }


    void saving_annocement(){
        cout<<"This is saving account please maintain minumum balance: 1000 Rs.";
    }
   


};

float Saving::int_rate = 0.03;
float Saving::min_balance = 1000;
