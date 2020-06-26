#include<iostream>
#include<conio.h>
#include<string.h>
#include <iomanip>
using namespace std;


float  nstudent(){
    
    int n = -1;
    cin>>n;
    float array[n][4];//arreglo con n estudiantes



for (int i = 0; i <n ; i++){
    int k=i+1;
    cout<<"digite las notas del estudiante "<<k<<endl;
    float name = 1 , nota1=0, nota2=0, nota3=0, nota4=0, nota5=0;//donde se almacenan las notas
    cout<<"estudiante"<<name+i<< endl;

       cout<<"nota 1"<< endl;
   
    cin>>nota1;
     array[i][0] = nota1;

      cout<<"nota 2"<< endl;
    
    cin>>nota2;
     array[i][1] = nota2;


      cout<<"nota 3"<< endl;
   
    cin>>nota3;
     array[i][2] = nota3;

      cout<<"nota 4"<< endl;
   
    cin>>nota4;
     array[i][3] = nota4;

      cout<<"nota 5"<<endl;
    
    cin>>nota5;
     array[i][4] = nota5;
       
}

//calcular el promedio
for (int i = 0; i <n; i++)
{
    float promedio=0;
    for (int s = 0; s < 5; s++)
    {
            promedio += array[i][s]*0.2;
            
    }
   int h=i+1;
cout<<"estudiante  "<<h<<" promedio de: "<<promedio<<endl;
 
    
}


}





int main(){
 cout<<"ingrese a cuantos estudiantes quiere calcular su nota"<<endl;
 nstudent();
}