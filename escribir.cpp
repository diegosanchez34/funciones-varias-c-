#include <iostream>
#include <unistd.h>
using namespace std;

void escribir(string cadena)
{
    int i=0;
    while(cadena[i]!='\0')
    {
        usleep(150000);
        cout<<cadena[i];
        i++;
    }
    cout<<endl;
}

int main()
{
    escribir("hola mundo");
    escribir("adios mundo");
}
