#include <iostream>
using namespace std;
int main()
{
 
    int a;
    string sym;
    cout << "\n   Ener a symbol from which the pyramid will be made:";
    cin >> sym;
    cout << "\n   Ener a height of the pyramid:";
    cin >> a;
  
   for (int i = 0; i < a; i++)
    {
        for (int j = a; j >= 0; j--)
        {
            if (j <= i) 
            cout << sym;
            cout << ' ';
        }
        cout <<endl;
    }
}