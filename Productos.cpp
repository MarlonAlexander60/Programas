#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string producto[3];
float precio[3]; 
float final[3];
int cantidad[3];

cout<<"Ingrese el primer producto:";getline(cin,producto[0]);
cout<<"Ingrese el segundo producto:";getline(cin,producto[1]);
cout<<"Ingrese el tercer producto:";getline(cin,producto[2]);

cout<<"Ingrese el precio del primer producto:";cin>>producto[0];
cout<<"Ingrese el precio del segubdo producto:";cin>>producto[1];
cout<<"Ingrese el precio del tercer producto:";cin>>producto[2];

cout<<"Ingrese la cantidad del primer producto:";cin>>producto[0];
cout<<"Ingrese la cantidad del segundo producto:";cin>>producto[1];
cout<<"Ingrese la cantidad del tercer producto:";cin>>producto[2];

final[0]=precio[0]*cantidad[0];
final[1]=precio[1]*cantidad[1];
final[2]=precio[2]*cantidad[2];

cout<<"producto"<<"\t"<<"precio"<<"\t"<<"cantidad"<<"\t"<<"final";
cout<<producto[0]<<"\t"<<precio[0]<<"\t"<<cantidad[0]<<"\t"<<final[0];
cout<<producto[1]<<"\t"<<precio[1]<<"\t"<<cantidad[0]<<"\t"<<final[1];
cout<<producto[2]<<"\t"<<precio[2]<<"\t"<<cantidad[2]<<"\t"<<final[2];
return(0);
}

