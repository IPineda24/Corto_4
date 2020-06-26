#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
using namespace std;
float promedio(float a[]){

     float h=0;
for (int i = 0; i < 25; i++)
{
   
    h += a[i];
}
float prom = h/25;
cout<<endl<<"la media es:"<<endl;

return prom;
}



float mostar(float a[]){
  for (int i = 0; i < 25; i++)
{
    cout<<a[i]<<", "; 
}
}


float rango(float a[],float b){
      int mayor=0;
      int menor=0;
      int igual=0;
for ( int i = 0; i <25; i++)
{
  if (a[i]>b)
  
    mayor++;
  
  else
  
     if (a[i]<b)
     
         menor++;
     
    
  
}
 cout<<"el total de numeros arriba del promedio es:"<<mayor<<endl;
 cout<<"el total de numeros abajo del promedio es:"<<menor<<endl;

}
int main(){
    //tengo las 25 alturas
  float estatura[]{1.75,1.58,1.69,1.58,1.87,1.69,1.58,1.84,1.75,1.70,1.74,1.69,1.84,1.71,1.71,1.61,1.69,1.59,1.72,1.64,1.74,1.73,1.70,1.70,1.75};

cout<<"Lista de numeros"<<endl;

mostar(estatura);//funcion que me muestra todos los datos de mi array
 
float total = promedio(estatura);// funcion que me calcula el promedio 
cout<< fixed<<setprecision(2)<<total<<endl;
rango(estatura,total );//funcion que me muestra cuantos estan arriba del promedio y cuantos abajo
}