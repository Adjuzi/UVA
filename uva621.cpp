#include <iostream>

using namespace std;

int main()
{
    string input;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> input;
        
        if(input == "1" || input == "4" || input == "78"){
            cout << "+" << endl;
        }else if(input[input.size()-1] == '5' && input[input.size()-2] == '3'){
            cout << "-" << endl;
        }else if(input[0] == '9' && input[input.size()-1] == '4'){
            cout << "*" << endl;
        }else{
            cout << "?" << endl;
        }
    }

    return 0;
}