#pragma once
#include"account.h"

class Current: public Account{
    private:
    static float od_limit; 
   static  float serviceCharges;

   public:

   Current(string name, float balance):Account(name, balance){};

   void displayAccInfo(){
    Account::displayAccInfo();
    cout<<"\n OD_Limit: " << od_limit;
    cout<< "\n Service Charges: " << serviceCharges;
   }

   // special function
   void withdraw(float wd_amt){

    if(balance >= wd_amt){
        this->balance -= wd_amt;
        cout<< "\n Cash Withdrawn : " << wd_amt;
        cout<< "\n Remeaning Balance : " << balance;
    }
    else{
        float req_balance = wd_amt - balance;

        if(req_balance <= od_limit){
            balance = -(balance - (wd_amt + serviceCharges));
            od_limit -= req_balance;

            cout<< "\n Cash Withdrawn : " << wd_amt;
            cout<< "\n Charges applied: " << serviceCharges;
            cout<< "\n Remeaning Balance : " << balance;
            cout<< "\n OD_limit : " << od_limit;
            
        }
    }
   }

        float caluculate_returns()  {
            cout<<"No retuen in Current acc. ";
            return 0;
        }

        void curr_announcement(){
    cout<<"No return but u can enjoy Overdraft ";
   }
   
};


float Current::od_limit = 50000;
float Current::serviceCharges = 300;


