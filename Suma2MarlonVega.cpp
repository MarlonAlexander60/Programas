//programa:Suma.cpp                
//autor:MarlonVega                 
//Fecha:2023-09-14
//Descripcion:Suma dos numeros     
#include<iostream>                 
using namespace std;
float x,y,z;
int ingreso()
{                                          
        cout<<"Ingrese x:";cin>>x;         
	cout<<"Ingrese y:";cin>>y;
	return(0);
}
int salida()
{
        cout<<"La suma de"<<x<<"+"<<y<<"="<<z<<endl;
}
int main()
{
	ingreso();
	z=x+y;
	salida();
	return(0);
}
