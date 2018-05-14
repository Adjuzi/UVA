#include <iostream>

using namespace std;

int main()
{
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string input;
    
    while(getline(cin, input)){
        
        int count[52] = {0};
        string result = "";
        int maxno = -1;
        
        for(int i = 0; i < input.size(); i++){
            for(int j = 0; j < letters.size(); j++){
                if(input[i] == letters[j]){
                    count[j]++;
                    break;
                }
            }
        }
        
        for(int i = 0; i < 52; i++){
            if(count[i] > maxno){
                maxno = count[i];
                result = letters[i];
            }else if(count[i] == maxno){
                result += letters[i];
            }
        }
        
        cout << result << " " << maxno << endl;
    }
    
    return 0;
}