//Autor:MarlonVega
//Fecha:05-10-2023
//Programa:Seguridad
#include<iostream>
using namespace std;
int main()
{
int c11,c12,c13,c01,c02,c03;
cout<<"Ingrese las contraseñas c11 c12 c13";
cin>>c11>>c12>>c13;
if(c11==c01){
if(c12==c02){
if(c13==c03){
cout<<"ACCESO AUTORIZADO";
}else{
cout<<"La Tercera Contraseña No Fue Correcta"<<endl;
}
}else{
cout<<"La Segunda Contraseña No Fue Correcta"<<endl;
}
}else{
cout<<"La Primera Contraseña No Fue Correcta"<<endl;
}
return(0);
}
