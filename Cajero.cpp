//Programa:Cajero.cpp
//Autor:VegaRoblesMarlon
//Fecha:12-10-2023
#include<iostream>
using namespace std;
int main()
{
	int c1,c2=5;
	cout<<"Ingrese la clave:";cin>>c1;
	if(c1==c2)
	{
		cout<<"Acceso Correcto";
	}else{
		cout<<"Acceso Incorrecto";
	}
	return(0);
}
