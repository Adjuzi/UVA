#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int main()
{
    string input;
    char input2;
    double number1, number2, number3, number4;
    double storage[10][5];
    int counter = 0;
    int pcounter = 0;
    double x,y;
    
    while(true){
        getline(cin, input);
        istringstream ss(input);
        ss >> input2;
        
        if(input2 == '*'){
            break;
        }else if(input2 == 'r'){
            ss >> number1;
            ss >> number2;
            ss >> number3;
            ss >> number4;
            storage[counter][0] = number1;
            storage[counter][1] = number2;
            storage[counter][2] = number3;
            storage[counter][3] = number4;
            storage[counter][4] = 10000.0;
        }else if(input2 == 'c'){
            ss >> number1;
            ss >> number2;
            ss >> number3;
            storage[counter][0] = number1;
            storage[counter][1] = number2;
            storage[counter][2] = number3;
            storage[counter][3] = 10000.0;
            storage[counter][4] = 0.0;
        }
        counter++;
    }
    
    while(true){
        getline(cin, input);
        istringstream ss1(input);
        ss1 >> x;
        ss1 >> y;
        
        if(x == 9999.9 && y == 9999.9){
            break;
        }
        int hit = 0;
        pcounter++;
        
        for(int i = 0; i < counter; i++){
            if(storage[i][4] == 10000.0){
                if(storage[i][0] < x && x < storage[i][2]){
                    if(storage[i][1] > y && y > storage[i][3]){
                        cout << "Point " << pcounter << " is contained in figure " << i+1 << endl;
                        hit = 1;
                    }
                }
            }else if (storage[i][3] == 10000.0){
                double tmp;
                tmp = sqrt((storage[i][0]-x)*(storage[i][0]-x)+(storage[i][1]-y)*(storage[i][1]-y));
                if(tmp < storage[i][2]){
                    cout << "Point " << pcounter << " is contained in figure " << i+1 << endl;
                    hit = 1;
                }
            }
        }
        
        if(hit == 0){
            cout << "Point " << pcounter << " is not contained in any figure" << endl;
        }
    }

    return 0;
}