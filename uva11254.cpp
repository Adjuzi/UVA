#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int number;
    
    while(cin >> number){
        if(number == -1){
            break;
        }
        
        int start = -1;
        int numbers = -1;
        
        for(int i = sqrt(2*number); i >= 1; i--){
            int a = (2*number-i*i+i)/(2*i);
            if((2*a*i+i*i-i)/2 == number){
               start = a;
               numbers = i;
               break;
           }
        }
        
        cout << number << " = " << start << " + ... + " << start+numbers-1 << endl;
    }

    return 0;
}