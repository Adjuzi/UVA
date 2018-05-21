#include <iostream>

using namespace std;

int main()
{
    int operations;
    string input;
    int amount;
    long account = 0;
    
    cin >> operations;
    
    for(int i = 0; i < operations; i++){
        cin >> input;
        if(input == "donate"){
            cin >> amount;
            account += amount;
        }else if(input == "report"){
            cout << account << endl;
        }
    }

    return 0;
}