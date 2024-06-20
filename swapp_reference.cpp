#include <iostream>
using namespace std;
void swapppointer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    int a = 10, b = 30;
    cout << "Before  Sawpp a:" << a << " b: " << b << endl;
    swapppointer(a,  b);
    cout << "After Swapp a:" << a << " b: " << b;
    return 0;
}