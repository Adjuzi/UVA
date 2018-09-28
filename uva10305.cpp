#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, a, b, tmp1, tmp2;
    int printed = 0;
    
    while(cin >> n >> m){
        
        if(n == 0){
            if(m == 0){
                break;
            }
        }
        
        vector<int> listan;
        
        for(int i = 0; i < n; i++){
            listan.push_back(i+1);
        }
        
        for(int i = 0; i<m; i++){
            cin >> a >> b;
            if(a == 0 && b == 0){
                for(int j = 0; j < n; j++){
                    if(j == n-1){
                        cout << listan[j]<< endl;
                        printed = 1;
                        break;
                    }
                    cout << listan[j] << " ";
                }
                break;
            }
            
            for(int k = 0; k < n; k++){
                if(listan[k] == a){
                    tmp1 = k;
                }else if(listan[k] == b){
                    tmp2 = k;
                }
            }
            
            if(tmp1 > tmp2){
                listan.push_back(listan[tmp2]);
                listan.erase(listan.begin()+tmp2, listan.begin()+tmp2+1);
            }
        }
        
        if(printed == 0){
            for(int j = 0; j < n; j++){
                if(j == n-1){
                    cout << listan[j]<< endl;
                    break;
                }
                cout << listan[j] << " ";
            }
        }
    }

    return 0;
}