#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a="zeyad raafat adly        -   01024113401 -   embabah";
    string b="yossef ahmed saad        -   01022761932 -   sheikh zayed";
    string c="khaled gamal mohamed     -   01069301843 -   madinet nasr";
    string d="paula magdy ragheb       -   01277767028 -   el marj";
    string e="hussien ahmed tarek      -   01552886525 -   alexandria";
    string f="hossam elden mustafa     -   01156161988 -   el haram";
    string g="ayman ayman abdelsabor   -   01020854460 -   el maadi";
    string h="ehab ahmed fayed         -   01100957864 -   faisal";
    string i="amira mohamed ibrahim    -   01012213068 -   october";
    string j="sarah abdelkader mohamed -   01153657063 -   october";
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<i<<endl<<j<<"\n\n";
    cout<<"Enter a word or a letter to search for : ";
    string x;
    getline(cin,x);
    cout<<endl;
    for(int y=0;y<x.length();y++)
    {
      if ((int)x.at(y)>=65 && (int)x.at(y)<=90 )
        x.at(y)=((int)x.at(y))+32;
    }
        if(a.find(x)<=a.length() )
                cout<<a<<endl;
        if(b.find(x)<=b.length() )
                cout<<b<<endl;
        if(c.find(x)<=c.length() )
                cout<<c<<endl;
        if(d.find(x)<=d.length() )
                cout<<d<<endl;
        if(e.find(x)<=e.length() )
                cout<<e<<endl;
        if(f.find(x)<=f.length() )
                cout<<f<<endl;
        if(g.find(x)<=g.length() )
                cout<<g<<endl;
        if(h.find(x)<=h.length() )
                cout<<h<<endl;
        if(i.find(x)<=i.length() )
                cout<<i<<endl;
        if(j.find(x)<=j.length() )
                cout<<j<<endl;
        if(a.find(x)>a.length() && j.find(x)>j.length() &&  i.find(x)>i.length() &&  h.find(x)>h.length() && g.find(x)>g.length() && b.find(x)>b.length() && f.find(x)>f.length() && e.find(x)>e.length() &&  c.find(x)>c.length() && d.find(x)>d.length() )
                cout<<"'"<<x<<"'"<<" not found";
    return 0;

}
