#include <iostream>

using namespace std;

int main()
{
    long n, f, size, animals, friendliness;
    
    cin >> n;
    
    while(n--){
        cin >> f;
        
        long result = 0;
        
        for(int i = 0; i < f; i++){
            cin >> size >> animals >> friendliness;
            result += size*friendliness;
        }
        
        cout << result << endl;
    }

    return 0;
}