#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string sentence;
    char tmp;
    string check = ".,!?";

    while(getline(cin, sentence)){
        string normal = "";
        string reversed = "";
        
        if(sentence == "DONE"){
            break;
        }
        
        for(int i = 0; i < sentence.size(); i++){
            if((check.find(sentence[i]) == std::string::npos) && (sentence[i] != ' ')){
                tmp = tolower(sentence[i]);
                normal.push_back(tmp);
            }
        }
        
        for(int i = normal.size()-1; i > -1; i--){
            reversed.push_back(normal[i]);
        }
        
        if(normal.compare(reversed) != 0){
            cout << "Uh oh.." << endl;
        }else{
            cout << "You won't be eaten!" << endl;
        }
    }
    
    return 0;
}