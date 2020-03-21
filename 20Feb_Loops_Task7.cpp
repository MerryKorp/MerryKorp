#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int paycode;

   int hours_worked = 0;
   int countManager = 0;
   int countHourlyWorker = 0;
   int countCommissionWorker = 0;

   double salary, hourlysalary, grossWeeklySalaryCommission;

   double p, q, l, s, z;
  
   cout << "Enter Paycode (-1 to end): ";
   cin >> paycode;
   while (paycode != -1){
       switch (paycode){
           case 1:{
               cout << "Manager selected.\nManager pay is $ ";
               cin >> salary;
               countManager++;
           break;
           }
           case 2:{
               cout << "Hourly worker is selected.\nEnter hourly salary: ";
               cin >> hourlysalary;
               cout << "Enter the total hours worked: ";
               cin >> hours_worked;
           if (hours_worked <= 40)
               {
               cout << "Worker's pay is $";
                   p = (hours_worked*hourlysalary);
               cout << p;
               }
           else
               {
               cout << "Worker's pay is $";
                   q = (hourlysalary * 40);
                   s = (hours_worked - 40.0)*(hourlysalary*1.5);
                   z = q + s;
               cout << z;
               }
               countHourlyWorker++;
           break;
           }
           case 3: {
               cout << "Commisioner worker selected.\nEnter gross weekly sales: ";
               cin >> grossWeeklySalaryCommission;

               cout << "Commission Worker's pay is $ ";
                   l = (grossWeeklySalaryCommission*0.06) + 250;
               cout << l;
               countCommissionWorker++;
           break;
           }
           default:
               cout << "You have entered an invalid code.\n";

               cout << "\nEnter Paycode (-1 to end): ";
               cin >> paycode;

           }
       }
       cout << "Total number of managers paid: " << countManager << endl;
       cout << "Total number of hourly workers paid: " << countHourlyWorker << endl;
       cout << "Total number of commission workers paid: " << countCommissionWorker << endl;
      
       return 0;
  
       }