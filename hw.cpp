#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
 
int main()
{
    int a, b, c;
    string monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   
    cout << "Enter month: ";
    cin >> a;
    cout << "Enter day: ";
    cin >> b;
    cout << "Enter year: ";
    cin >> c;
   
    switch(a)
    {
        case 1:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[0] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 2:
            if((b > 0) && (b < 29)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[1] << " " << b << ", " << c;  
                }  
            } else {
            	cout << "Invalid date!\n"<<endl;
                main();
        }
            break;
        case 3:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[2] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 4:
            if((b > 0) && (b < 31)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[3] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 5:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[4] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 6:
            if((b > 0) && (b < 31)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[5] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 7:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[6] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 8:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[7] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 9:
            if((b > 0) && (b < 31)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[8] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 10:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[9] << " " << b << ", " << c;  
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 11:
            if((b > 0) && (b < 31)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[10] << " " << b << ", " << c; 
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        case 12:
            if((b > 0) && (b < 32)){
                if((c > 0) && (c < 2020)){
                    cout <<"\n" << monthName[11] << " " << b << ", " << c; 
                }  
            } else {
                cout << "Invalid date!\n"<<endl;
                main();
            }
            break;
        default:
                cout << "Invalid input!\n"<<endl;
                main();    
    }
    
    _getch();
    return 0;
    
}
