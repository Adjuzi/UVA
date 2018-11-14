#include <iostream>

using namespace std;

int main()
{
    int v,t,d;
    
    while(cin >> v >> t){
        d = 0;
        
        if(t != 0){
            d = 2*v*t;
        }
        cout << d << endl;
    }
    
    return 0;
}