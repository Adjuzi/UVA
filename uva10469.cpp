#include <iostream>

using namespace std;

int main()
{
    unsigned int input1,input2, result;
    
    while(cin >> input1 >> input2){
        result = input1 ^ input2;
        cout << result << endl;
    }
    
    return 0;
}