/************************
Design a class that will determine the
monthly payment on a home mortgage. The
monthly payment with interest compounded monthly
can be calculated as follows

payment=(loan*(rate/12)*term)/(term-1);

term=pow(((1+Rate)/12), (12*years));

Payment = the monthly payment
Loan = the dollar amount of the loan
Rate = the annual interest rate
Years = the number of years of the loan


Class should have member functions for
setting the loan amount, interest rate, and
number of years of the loan. It should also have member
functions for returning the monthly payment and the
total amount paid to the bank at the end of the loan
period. Implement the class in a complete program.

Do not accept negative numbers

*************************/

#include <iostream>
#include "class.h"
#include <cmath>
#include <cctype>

using namespace std;

void mortgageCalc();

int main()
{
   char again;
   do
   {
     mortgageCalc();
     cout << "Would you like to try again? Y or N";
     cin >> again;
     cout <<endl;
   }while(toupper(again)=='Y');
}
