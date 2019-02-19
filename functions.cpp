#include <iostream>
#include "class.h"
#include <iomanip>

using namespace std;

void mortgageCalc()
{
    double l;
    double r;
    double y;
    double m;
    double t;

    cout << "Loan Amount: $";
    cin >> l;
    while(l<0)
    {
        cout << "Error! Enter a Valid Amount.";
        cout << "Loan Amount: $";
        cin >> l;
    }

    cout << "Interest Rate: ";
    cin >> r;
    while(r<0)
    {
        cout << "Error! Enter a Valid Rate.";
        cout << "Interest Rate: ";
        cin >> r;
    }

    cout << "Number of Years: ";
    cin >> y;
    while(y<0)
    {
        cout<<"Error! Enter a Valid Amount.";
        cout << "Number of Years: ";
        cin >> y;

    }
    Mortgage monthlyPay(l, r, y);

    m = monthlyPay.calcMonthlyPayment();

    cout<<fixed<<showpoint;
    cout<<setprecision(2);
    cout << "Monthly Payment: $" <<m <<endl;

    t = monthlyPay.calcTotalPayment();

    cout<<fixed<<showpoint;
    cout<<setprecision(2);
    cout << "Total Payment: $" << t <<endl;
}
