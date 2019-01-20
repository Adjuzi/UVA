#include <iostream>

using namespace std;

int main()
{
    int T, N, K, P, X, counter=0, result;
    
    cin >> T;
    
    while(T--){
        counter++;
        cin >> N >> K >> P;
        if(P == N){
            result = K;
            cout << "Case " << counter << ": " << result << endl;
        }else{
            X = P%N;
            if(K+X <= N){
                result = K+X;
                cout << "Case " << counter << ": " << result << endl;
            }else{
                result = K-(N-X);
                cout << "Case " << counter << ": " << result << endl;
            }
        }
    }
    
    return 0;
}