#include <iostream>

using namespace std;

int main()
{
    int cases, number, L, W, H;
    
    number = 1;
    
    cin >> cases;
    
    while(cases--){
        
        cin >> L >> W >> H;
        
        if(L <= 20 && W <= 20 && H <= 20){
            cout << "Case " << number << ": good" << endl;
        }else{
            cout << "Case " << number << ": bad" << endl;
        }
        
        number++;
    }
    
    return 0;
}