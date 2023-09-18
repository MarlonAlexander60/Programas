//programa:Mezcla de Suma
//archivo:Suma3MarlonVega.cpp
//autor:MarlonVega
//fecha Creacion:2023-09-18
//Descripcion:Este Programa Combina las tres versiones de suma utilizando funcion.
#include<iostream>
using namespace std;
float Suma(float x,float y);
float Suma2(float a,float b);
float SumaN(int l);
int main()
{
	float S1,S2,S3;
	S1=Suma(3,4);
	S2=Suma2(5,6);
	S3=SumaN(5);
	return(0);
}
float Suma(float x,float y)
{
	return(x+y);
}
float Suma2(float a,float b)
{
	float c;
	c=a+b;
	return(c);
	}
float SumaN(int l)
{
	float x,s=0;
	int i=0;
	do{
		cout<<"Ingrese x:";
		cin>>x;
		i=i+1;
		s=s+x;
	}while(i<l);
	return(s);
}
