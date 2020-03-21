#include <iostream>
using namespace std;

main()
{
    double population_Of_A;
    double growth_Rate_Of_A;
    double population_Of_B;
    double growth_Rate_Of_B;
    int years=0;
    
    cout<<"Enter the population and growth rate of town A"<<endl;
    cin>>population_Of_A>>growth_Rate_Of_A;
    
    
     cout<<"Enter the population and growth rate of town B"<<endl;
     cin>>population_Of_B>> growth_Rate_Of_B;
     
     while(population_Of_A < population_Of_B){
         
         population_Of_A=(((growth_Rate_Of_A/100)*population_Of_A)+population_Of_A);
         population_Of_B = (((growth_Rate_Of_B/100)*population_Of_B)+population_Of_B);
         years++;
         }
         cout <<"The population of A will become greater than B in "<<years<<" years"<<endl;
}
