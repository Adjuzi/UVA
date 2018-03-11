#include <iostream>
#include <sstream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    string input;
    int counter = 0;
    
    while(getline(cin, input)){
        counter++;
        istringstream iss(input);
        int type;
        double u;
        double v;
        double t;
        double a;
        double s;
    
        iss >> type;
        
        if(type == 0){
            break;
        }
        
        cout << fixed;
        cout << setprecision(3);
        
        if(type == 1){
            iss >> u >> v >> t;
            s = t*(u+v)/2;
            a = (v-u)/t;
            cout << "Case " << counter << ": " << s << " " << a << endl;
        }else if(type == 2){
            iss >> u >> v >> a;
            t = (v-u)/a;
            s = t*(u+v)/2;
            cout << "Case " << counter << ": " << s << " " << t << endl;
        }else if(type == 3){
            iss >> u >> a >> s;
            v = sqrt(u*u+2*a*s);
            t = (v-u)/a;
            cout << "Case " << counter << ": " << v << " " << t << endl;
        }else{
            iss >> v >> a >> s;
            u = sqrt(v*v-2*a*s);
            t = (v-u)/a;
            cout << "Case " << counter << ": " << u << " " << t << endl;
        }
    }
    return 0;
}