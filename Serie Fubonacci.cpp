/*** PRESENTACIÓN ****************
NOMBRE: Juan Manuel Mota Hernández  
FECHA: 31/21/2023
PROGRAMA:
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCION: 
***************************/
#include <iostream>
using namespace std;
int main ()

{
    int opc, a=1, b=1, i, d=0;
    cout<<"Hola, bienvenido a mi programa"<<endl;
    cout<<"-------Serie Fibonacci---------"<<endl;
   reintentar:
    cout<<"Que tipo de ciclo quiere usar?"<<endl;
    cout<<"for ----------- 1"<<endl;
    cout<<"while --------- 2"<<endl;
    cout<<"do-wile ------- 3"<<endl;
    cout<<"-------------------------------"<<endl;
    cin>>opc;
    switch (opc)
    {
    case 1:
   cout<<"Dame un numero: \n";
         cin>>(i);
         for(a =1; b<=i;){ 
         a+=b;   
         cout<<b<<endl;
         b=a-b;
     }
        
                break;
    
    case 2:
   cout<<"Dame un numero: \n";
                cin>>(i);
                do{ 
         a+=b;
         cout<<b<<endl;
         b=a-b;
         }while(b<i);

        break;
    case 3:
    cout<<"Dame un numero: \n";
         cin>>i;
         while(b<i){     
         a+=b;
         cout<<b<<endl;
         b=a-b; 
         }

         break;
    default:
     cout<<"dame un valor valido"<<endl;

    }
    cout<<"---------------------------------"<<endl;
    cout<<"quieres volverlo a intentar"<<endl;
    cout<<"Si ---- 1"<<endl;
    cout<<"No ---- 2"<<endl;
    system ("pause");
    cin>>d;
    if (d=1)
     {goto reintentar;}
    if (d=2)
    {
    cout<<"Muchas gracias"<<endl;
    cout<<"Adios"<<endl;
        
    }


    
    



    
}