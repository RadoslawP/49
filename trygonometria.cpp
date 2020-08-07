#include <iostream>
#include <cmath>

using namespace std;

float kat;

int main()
{
    cout <<"Podaj wartosc kata w stopniach: "<< endl;
    cin>>kat;

    cout<<sin(kat*M_PI/180.0)<<endl;
    cout<<cos(kat*M_PI/180.0)<<endl;
    cout<<tan(kat*M_PI/180.0)<<endl;
    cout<<1/tan(kat*M_PI/180.0)<<endl;

    return 0;
}
