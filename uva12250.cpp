#include <iostream>

using namespace std;

int main()
{
    string phrase;
    int counter = 0;
    
    while(true){
        cin >> phrase;
        counter++;
        
        if(phrase == "HELLO"){
            cout << "Case " << counter << ": ENGLISH" << endl;
        }else if(phrase == "HOLA"){
            cout << "Case " << counter << ": SPANISH" << endl;
        }else if(phrase == "HALLO"){
            cout << "Case " << counter << ": GERMAN" << endl;
        }else if(phrase == "BONJOUR"){
            cout << "Case " << counter << ": FRENCH" << endl;
        }else if(phrase == "CIAO"){
            cout << "Case " << counter << ": ITALIAN" << endl;
        }else if(phrase == "ZDRAVSTVUJTE"){
            cout << "Case " << counter << ": RUSSIAN" << endl;
        }else if(phrase == "#"){
            break;
        }else{
            cout << "Case " << counter << ": UNKNOWN" << endl;
        }
    }

    return 0;
}