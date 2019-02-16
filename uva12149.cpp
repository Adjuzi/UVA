#include <iostream>

using namespace std;

int main()
{
    int N;
    
    while(cin >> N){
        if(N == 0){
            break;
        }
        
        int res = 0;
        
        for(int i = 0; i <= N; i++){
            res += i*i;
        }
        
        cout << res << endl;
    }

    return 0;
}