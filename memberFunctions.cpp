#include <iostream>
#include "class.h"
#include <cmath>
using namespace std;

//******************************************************

    double Mortgage::calcTotalPayment()
    {
        double term;
        double tPayment;
        term = pow((1+(rate/12)), (12*years));

        double mPayment = (loan*(rate/12)*term)/(term - 1);

        tPayment = mPayment*12*years;

        return tPayment;
    }
//**********************************************************

    double Mortgage::calcMonthlyPayment()
    {
        double term;
        term = pow((1+(rate/12)), (12*years));

        double mPayment = (loan*(rate/12)*term)/(term - 1);
        return mPayment;
    }
