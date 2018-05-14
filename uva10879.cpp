#include <iostream>

using namespace std;

int main()
{
    int cases;
    int K;
    int A, B, C, D;
    int counter;
    
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        counter = 0;
        
        cin >> K;
        
        for(int j = 2; j < K/2; j++){
            if(counter == 2){
                break;
            }else if(K%j == 0 && counter == 0){
                counter++;
                A = j;
                B = K/j;
            }else if(K%j == 0 && counter == 1 && j != B){
                counter++;
                C = j;
                D = K/j;
            }
        }
        
        cout << "Case #" << i+1 << ": " << K << " = " << A << " * " 
        << B << " = " << C << " * " << D << endl;
        
    }

    return 0;
}