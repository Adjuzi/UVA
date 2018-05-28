#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n){
        if(n == 0){
            break;
        }
        
        vector<int> myVector(n);
        int counter = 1;
        bool trigger = true;
        
        for(int i = 0; i < n; i++){
            myVector[i] = counter;
            counter++;
        }
        
        cout << "Discarded cards:";
        
        while(myVector.size() > 2){
            if(trigger){
                cout << " " << myVector[0] << ",";
                myVector.erase(myVector.begin());
                trigger = false;
            }else{
                int tmp1 = myVector[0];
                myVector.push_back(tmp1);
                myVector.erase(myVector.begin());
                trigger = true;
            }
        }
        
        if(n == 1){
            cout << endl << "Remaining card: " << myVector[0] << endl;
        }else if(trigger){
            cout << " " << myVector[0] << endl;
            cout << "Remaining card: " << myVector[1] << endl;
        }else{
            cout << " " << myVector[1] << endl;
            cout << "Remaining card: " << myVector[0] << endl;
        }
    }

    return 0;
}