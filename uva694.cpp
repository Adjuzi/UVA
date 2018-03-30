#include <iostream>

using namespace std;

int main()
{
    long long A;
    long long L;
    int terms;
    int cases = 0;
    
    while(cin >> A >> L){
        if(A < 0){
            break;
        }
        
        cases++;
        terms = 0;
        long long tmp = A;
        
        while(A <= L && A != 1){
            terms++;
            if(A%2 == 0){
                A = A/2;
            }else{
                A = 3*A+1;
            }
        }
        if(A == 1){
            terms++;
        }
        
        cout << "Case " << cases << ": A = " << tmp << ", limit = " << L
        << ", number of terms = " << terms << endl;
    }

    return 0;
}