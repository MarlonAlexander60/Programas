//Titulo del programa:resta y comparacion
//Nombre del programa:saldo.cpp
//Autor:Vega Robles
//Fecha creacion:2023-09-1
//Description:resta de numeros y presenta el saldo
#include<iostream>
using namespace std;
int main()
{
        float a,b,c;
        cin>>a>>b;
	c=a-b;
	if(c<0)
	{
        cout<<"Negativo";}
else{
        cout<<"Positivo";
	}
        return 0;
        }
