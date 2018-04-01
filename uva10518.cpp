#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    int b;
    int counter;
    int cases = 0;
    unsigned long long series[100000];
    
    while(cin >> n >> b){
        if(n == 0 && b == 0){
            break;
        }
        
        cases++;
        series[0] = 1;
        series[1] = 1;
        
        for(counter = 2; counter < 100000; counter++){
            series[counter] = (series[counter-1]+series[counter-2]+1)%b;
            if(series[counter] == 1 && series[counter-1] == 1){
                break;
            }
        }
        
        counter--;

        cout << "Case " << cases << ": " << n << " " << b << " " << series[n%counter] << endl;
        
    }

    return 0;
}