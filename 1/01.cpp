#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//funcion
string traductor(){
 char name[1000] ;//mi arreglo con capacidad de 1000 caracteres 
gets(name);//gets para poder escribir oraciones largas con espacios 
int longitud = strlen(name);//calcular la longitud de mi arreglo

 for (int i = 0; i < longitud ; i++) //empezar a comparar si mi arreglo coincide con una letra la traduce
{

if (name[i] == 'm')

    name[i]='0';

else

   if (name[i] == 'u')

    name[i]='1';

else

    if (name[i] =='r')

    name[i]='2';

else

    if (name[i] =='c')

    name[i]='3';

else

   if (name[i] =='i')

    name[i]='4';

else

    if (name[i] == 'e')

    name[i]='5';

else

    if (name[i] =='l')

    name[i]='6';

else

    if (name[i] == 'a')

    name[i]='7';

else

   if (name[i] == 'g')

    name[i]='8';

else

    if (name[i] == 'o')

    name[i]='9';



 }

 cout<<name;
  

}




int main() { 

cout<<"ingrese una frase "<<endl;//llamar funcion 

  
 traductor();

}