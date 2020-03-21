#include <iostream>
using namespace std;
main()
{
    // Declaring variables for the program
    double loan_Amount;
    double interst_rate_year;
    double monthly_Payment;
    double interst_rate_monthly;
    double Rem_Amount;
    double interst_total_Amount;
    int months = 0;

    // Taking input from the user
    cout << "Enter the total loan amount " << endl;
    cin >> loan_Amount;
    cout << " Enter interest rate per year" << endl;
    cin >> interst_rate_year;
    cout << "Enter the payment you will pay monthly" << endl;
    cin >> monthly_Payment;

    // Printing out monthly interest
    interst_rate_monthly = (interst_rate_year / (12 * 100));
    cout << "The interst rate per month will be " << interst_rate_monthly * 100 << " percent" << endl << endl;

    // Using loop to calculate the months in which it can be paid
    while(loan_Amount >= 0) {
        interst_total_Amount = loan_Amount * interst_rate_monthly;
        Rem_Amount = loan_Amount - (monthly_Payment - interst_total_Amount);
        loan_Amount = Rem_Amount;
        months++;
        if(monthly_Payment>Rem_Amount){
        break;
        }
                
            
        cout<<"After "<<months<<" month is "<< Rem_Amount<<endl;
    }
    cout << "Congratulations you submitted your amount in " << months << " months" << endl;
}
