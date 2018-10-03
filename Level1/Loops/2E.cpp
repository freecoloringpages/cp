#include <iostream>

using namespace std;

int main()
{
    int pass;
    while (cin >> pass){
        if (pass != 1999)
            cout << "Wrong" << endl;
        else {
                cout << "Correct";
                break;
        }
    }

    return 0;
}
