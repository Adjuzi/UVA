#include <iostream>

using namespace std;

int main()
{
    int x8,x7,x6,x5,x4,x3,x2,x1,x0;
    int first;
    
    while(cin >> x8 >> x7 >> x6 >> x5 >> x4 >> x3 >> x2 >> x1 >> x0){
        first = 0;
        if(x8 != 0){
            first = 1;
            if( x8 > 0){
                if(x8 == 1){
                    cout << "x^8";
                }else{
                    cout << x8 << "x^8";
                }
            }else{
                if(x8 == -1){
                    cout << "-" << "x^8";
                }else{
                    cout << "-" << abs(x8) << "x^8";
                }
            }
        }
        
        if(x7 != 0){
            if(first == 1){
                if(x7 > 0){
                    if(x7 == 1){
                        cout << " + " << "x^7";
                    }else{
                        cout << " + " << x7 << "x^7";
                    }
                }else{
                    if(x7 == -1){
                        cout << " - " << "x^7";
                    }else{
                        cout << " - " << abs(x7) << "x^7";
                    }
                }
            }else{
                first = 1;
                if(x7 > 0){
                    if(x7 == 1){
                        cout << "x^7";
                    }else{
                        cout << x7 << "x^7";
                    }
                }else{
                    if(x7 == -1){
                        cout << "-x^7";
                    }else{
                        cout << "-" << abs(x7) << "x^7";
                    }
                }
            }
        }
        
        if(x6 != 0){
            if(first == 1){
                if(x6 > 0){
                    if(x6 == 1){
                        cout << " + " << "x^6";
                    }else{
                        cout << " + " << x6 << "x^6";
                    }
                }else{
                    if(x6 == -1){
                        cout << " - " << "x^6";
                    }else{
                        cout << " - " << abs(x6) << "x^6";
                    }
                }
            }else{
                first = 1;
                if(x6 > 0){
                    if(x6 == 1){
                        cout << "x^6";
                    }else{
                        cout << x6 << "x^6";
                    }
                }else{
                    if(x6 == -1){
                        cout << "-x^6";
                    }else{
                        cout << "-" << abs(x6) << "x^6";
                    }
                }
            }
        }
        
        if(x5 != 0){
            if(first == 1){
                if(x5 > 0){
                    if(x5 == 1){
                        cout << " + " << "x^5";
                    }else{
                        cout << " + " << x5 << "x^5";
                    }
                }else{
                    if(x5 == -1){
                        cout << " - " << "x^5";
                    }else{
                        cout << " - " << abs(x5) << "x^5";
                    }
                }
            }else{
                first = 1;
                if(x5 > 0){
                    if(x5 == 1){
                        cout << "x^5";
                    }else{
                        cout << x5 << "x^5";
                    }
                }else{
                    if(x5 == -1){
                        cout << "-x^5";
                    }else{
                        cout << "-" << abs(x5) << "x^5";
                    }
                }
            }
        }
        
        if(x4 != 0){
            if(first == 1){
                if(x4 > 0){
                    if(x4 == 1){
                        cout << " + " << "x^4";
                    }else{
                        cout << " + " << x4 << "x^4";
                    }
                }else{
                    if(x4 == -1){
                        cout << " - " << "x^4";
                    }else{
                        cout << " - " << abs(x4) << "x^4";
                    }
                }
            }else{
                first = 1;
                if(x4 > 0){
                    if(x4 == 1){
                        cout << "x^4";
                    }else{
                        cout << x4 << "x^4";
                    }
                }else{
                    if(x4 == -1){
                        cout << "-x^4";
                    }else{
                        cout << "-" << abs(x4) << "x^4";
                    }
                }
            }
        }
        
        if(x3 != 0){
            if(first == 1){
                if(x3 > 0){
                    if(x3 == 1){
                        cout << " + " << "x^3";
                    }else{
                        cout << " + " << x3 << "x^3";
                    }
                }else{
                    if(x3 == -1){
                        cout << " - " << "x^3";
                    }else{
                        cout << " - " << abs(x3) << "x^3";
                    }
                }
            }else{
                first = 1;
                if(x3 > 0){
                    if(x3 == 1){
                        cout << "x^3";
                    }else{
                        cout << x3 << "x^3";
                    }
                }else{
                    if(x3 == -1){
                        cout << "-x^3";
                    }else{
                        cout << "-" << abs(x3) << "x^3";
                    }
                }
            }
        }
        
        if(x2 != 0){
            if(first == 1){
                if(x2 > 0){
                    if(x2 == 1){
                        cout << " + " << "x^2";
                    }else{
                        cout << " + " << x2 << "x^2";
                    }
                }else{
                    if(x2 == -1){
                        cout << " - " << "x^2";
                    }else{
                        cout << " - " << abs(x2) << "x^2";
                    }
                }
            }else{
                first = 1;
                if(x2 > 0){
                    if(x2 == 1){
                        cout << "x^2";
                    }else{
                        cout << x2 << "x^2";
                    }
                }else{
                    if(x2 == -1){
                        cout << "-x^2";
                    }else{
                        cout << "-" << abs(x2) << "x^2";
                    }
                }
            }
        }
        
        if(x1 != 0){
            if(first == 1){
                if(x1 > 0){
                    if(x1 == 1){
                        cout << " + " << "x";
                    }else{
                        cout << " + " << x1 << "x";
                    }
                }else{
                    if(x1 == -1){
                        cout << " - " << "x";
                    }else{
                        cout << " - " << abs(x1) << "x";
                    }
                }
            }else{
                first = 1;
                if(x1 > 0){
                    if(x1 == 1){
                        cout << "x";
                    }else{
                        cout << x1 << "x";
                    }
                }else{
                    if(x1 == -1){
                        cout << "-x";
                    }else{
                        cout << "-" << abs(x1) << "x";
                    }
                }
            }
        }
        
        if(first == 1){
            if(x0 != 0){
                if(x0 > 0){
                    cout << " + " << x0;
                }else{
                    cout << " - " << abs(x0);
                }
            }
        }else{
            first = 1;
            if(x0 >= 0){
                cout << x0;
            }else{
                cout << "-" << abs(x0);
            }
        }
        
        cout << endl;
    }
    return 0;
}