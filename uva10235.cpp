#include <iostream>

using namespace std;

int main()
{
    long input;
    long reverse;
    long tmp;
    
    while(cin >> input){
        tmp = input;
        reverse = 0;
        while(tmp){
            reverse = reverse*10+tmp%10;
            tmp = tmp/10;
        }
        
        bool prime = true;
        bool emirp = true;
        for(int i = 2; i <= input/2; i++){
            if(input%i == 0){
                prime = false;
                break;
            }
        }
        
        if(prime == true){
            for(int i = 2; i <= reverse/2; i++){
                if(reverse%i == 0){
                    emirp = false;
                    break;
                }
            }
        }
        
        if(prime == false){
            cout << input << " is not prime." << endl;
        }else if(prime == true && emirp == false){
            cout << input << " is prime." << endl;
        }else{
            if(input == reverse){
                cout << input << " is prime." << endl;
            }else{
                cout << input << " is emirp." << endl;
            }
        }
    }
    
    return 0;
}
