#include<iostream>

using namespace std;

int main()
{
    float feet, inc;
    float output;

    do{
            cout << "\nEnter feet to convert to inch (enter 0 to exit): \n";
    cin >> feet;
    output = 12*feet;

    cout << "Converted value: " << output << "\n\n";

    } while (feet!=0);


    return 0;

}
