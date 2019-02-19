#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <cmath>
using namespace std;

class Mortgage
{
private:
    double loan;
    double rate;
    double years;

public:
    Mortgage(double l, double r, double y)
    {
        loan = l;
        rate = (r/100);
        years = y;
    }

    double calcMonthlyPayment();
    double calcTotalPayment();
/*
    double calcMonthlyPayment()
    {
        double term;
        term = pow((1+(rate/12)), (12*years));

        int mPayment = (loan*(rate/12)*term)/(term - 1);
        return mPayment;
    }
    double calcTotalPayment()
    {
        double term;
        double tPayment;
        term = pow((1+(rate/12)), (12*years));

        int mPayment = (loan*(rate/12)*term)/(term - 1);

        tPayment = mPayment*12*years;

        return tPayment;
    }/*/
};



#endif // CLASS_H_INCLUDED
