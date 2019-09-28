#include <iostream>

using namespace std;

int main()
{
    string input;
    
    while(cin >> input){
        for(int i = 0; i < input.length(); i++){
            if(input[i] == 'A' || input[i] == 'B' || input[i] == 'C'){
                cout << '2';
            }else if(input[i] == 'D' || input[i] == 'E' || input[i] == 'F'){
                cout << '3';
            }else if(input[i] == 'G' || input[i] == 'H' || input[i] == 'I'){
                cout << '4';
            }else if(input[i] == 'J' || input[i] == 'K' || input[i] == 'L'){
                cout << '5';
            }else if(input[i] == 'M' || input[i] == 'N' || input[i] == 'O'){
                cout << '6';
            }else if(input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S'){
                cout << '7';
            }else if(input[i] == 'T' || input[i] == 'U' || input[i] == 'V'){
                cout << '8';
            }else if(input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z'){
                cout << '9';
            }else if(input[i] == '-'){
                cout << '-';
            }else if(input[i] == '1'){
                cout << '1';
            }else if(input[i] == '0'){
                cout << '0';
            }
        }
        cout << endl;
    }

    return 0;
}
