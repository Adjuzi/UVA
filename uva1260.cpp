#include <iostream>

using namespace std;

int main()
{
    string input;
    int cases;
    int list_size;
    
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        int result = 0;
        cin >> list_size;
        
        int list[list_size];
        
        for(int j = 0; j < list_size; j++){
            cin >> list[j];
            for(int k = 0; k < j; k++){
                if(list[k] <= list[j])
                result++;
            }
        }
        
        cout << result << endl;
        
    }

    return 0;
}