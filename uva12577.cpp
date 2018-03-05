#include <iostream>

using namespace std;

int main()
{
    string input;
    int count = 0;
    while(getline(cin, input)){
        count++;
        if(input == "*"){
            break;
        }else if(input == "Hajj"){
            cout << "Case " << count << ": Hajj-e-Akbar" << endl;
        }else if(input == "Umrah"){
            cout << "Case " << count << ": Hajj-e-Asghar" << endl;
        }
    }
    return 0;
}