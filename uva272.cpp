#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string input;
    int forl = 0;
    
    while(getline(cin, input)){
        string remastered = "";
        for(int i = 0; i < input.size(); i++){
            if(input[i] == '"' && forl == 0){
                remastered = remastered+"``";
                forl = 1;
            }else if(input[i] == '"' && forl == 1){
                remastered = remastered+"''";
                forl = 0;
            }else{
                remastered = remastered+input[i];
            }
        }
        cout << remastered << endl;
    }

    return 0;
}
