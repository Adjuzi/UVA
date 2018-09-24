#include <iostream>

using namespace std;

int main()
{
    int cases, sal1, sal2, sal3;
    int counter = 1;
    
    cin >> cases;
    
    while(cases--){
        cin >> sal1 >> sal2 >> sal3;
        
        if(sal1 > sal2){
            if(sal1 < sal3){
                cout << "Case " << counter << ": " << sal1 << endl;
                counter++;
            }else{
                if(sal3 > sal2){
                    cout << "Case " << counter << ": " << sal3 << endl;
                    counter++;
                }else{
                    cout << "Case " << counter << ": " << sal2 << endl;
                    counter++;
                }
            }
        }else{
            if(sal2 > sal3){
                if(sal1 < sal3){
                    cout << "Case " << counter << ": " << sal3 << endl;
                    counter++;
                }else{
                    cout << "Case " << counter << ": " << sal1 << endl;
                    counter++;
                }
            }else{
                cout << "Case " << counter << ": " << sal2 << endl;
                counter++;
            }
        }
    }

    return 0;
}