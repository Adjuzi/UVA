#include <iostream>

using namespace std;

int main()
{
    int n, s, d, a, b;
    
    cin >> n;
    
    while(n--){
        cin >> s >> d;
        
        a = (s+d)/2;
        b = a-d;
        
        if(a < 0 || b < 0){
            cout << "impossible" << endl;
        }else if((s+d)%2 != 0){
            cout << "impossible" << endl;
        }else{
            cout << a << " " << b << endl;
        }
        
    }

    return 0;
}