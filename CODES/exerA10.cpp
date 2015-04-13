#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cm, in, yard, ft, rin, ryard, rft, YARD, yard2, FEET, ft2;
    cout<<"Enter a length (cm): ";
    cin>>cm;
    cout<<endl;

    in=cm/2.54;

    yard = cm/91.44;
    ryard = trunc(yard);
    YARD = ryard*36;
    yard2 = in-YARD;
    ft = yard2/12;
    rft = trunc(ft);
    FEET = rft*12;
    rin = yard2-FEET;




    cout<<ryard<<" yard(s) "<<rft<<" feet (foot) "<<rin<<" inch(es)";
}

