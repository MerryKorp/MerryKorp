#include <iostream>
using namespace std;

 main()
{
   
	int a;
    int k=0;
    
    
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    
        while(a>1){
            if(a%2==0){
                a=a/2;
                }
                else{
                    a=(3*a+1);
                    }
                    cout<<"The value of a is "<<  a <<endl;
                    k++;
                     
                    
        }
                  cout <<endl;
                  cout <<"The value of k is "<<k<<endl; 
                    
        
    }
