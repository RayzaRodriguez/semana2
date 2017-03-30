#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    /*int a,b,z;
    cout<<"ingrese primer numero: "<<endl;
    cin>>a;
    cout<<"ingrese segundo numero: "<<endl;
    cin>>b;
    if (a>b)
        z=a;
    else
        z=b;
    z=(a>b)?a:b;

    cout<<z;*/

    /*int lista[10];
    int x,j;
    for(x=0;x<=9;x++)
    {
        cout<<"ingrese valor "<<x+1<<": "<<endl;
        cin>>lista[x];
    }
    cout<<"la lista esta conformada por: "<<endl;
    for(j=0;j<=9;j++)
        cout<<lista[j]<<" ";*/

    int lista[5];
    int c=0;
    cin>>lista[c++];
    cin>>lista[c++];
    cin>>lista[c++];
    cin>>lista[c++];
    cin>>lista[c++];

    cout<<lista[--c];
    cout<<lista[--c];
    cout<<lista[--c];
    cout<<lista[--c];
    cout<<lista[--c];

    int lista[3];
    int temp=0,j;
    cin>>lista[0];
    cin>>lista[1];
    cin>>lista[2];
    temp=lista[0];
    lista[0]=lista[2];
    lista[2]=temp;
    cout<<"lista invertida: "<<endl;
    cout<<lista[0]<<endl;
    cout<<lista[1]<<endl;
    cout<<lista[2]<<endl;
    return 0;

}
