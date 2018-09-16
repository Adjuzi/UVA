#include <iostream>

using namespace std;

int main()
{
    while(true){
        double H = 0, U = 0, D = 0, F = 0;
        double current_height = 0;
        int day_count = 1;
        
        cin >> H >> U >> D >> F;
        
        if(H == 0){
            break;
        }
        
        current_height = U;
        double decline = U*F/100;
        
        while(current_height <= H){
            current_height = current_height-D;
            if(current_height < 0){
                break;
            }
            U = U-decline;
            if(U < 0){
                U = 0;
            }
            current_height = current_height+U;
            day_count++;
        }
    
        if(current_height <= 0){
            cout << "failure on day " << day_count << endl;
        }else{
            cout << "success on day " << day_count << endl;
        }
    
    }

    return 0;
}