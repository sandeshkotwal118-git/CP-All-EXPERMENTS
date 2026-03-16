#include <iostream>
using namespace std;
bool check_power_2(int NUMBER)
{
    if (NUMBER==0)
        return false;
    return ((NUMBER & (NUMBER-1))==0);
}
int main()
{
    int numb;
    cout<<"Enter number: ";
    cin>>numb;
    if(check_power_2(numb))
        cout<<"Power of 2";
    else
        cout<<"Not a power of 2";
    return 0;
}