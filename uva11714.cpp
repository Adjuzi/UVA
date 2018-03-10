#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int input;
    
    while(cin >> input){
        cout << (input-1)+(int)log2(input-1) << endl;
    }

    return 0;
}