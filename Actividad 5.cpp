
/*** PRESENTACIÓN ****************
NOMBRE: Juan Manuel Mota Hernández  
FECHA: 04/02/2023
PROGRAMA:
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCION: Sumar los vectores que le demos a la computadora.
***************************/
#include <iostream>
using namespace std;
int main ()
{

int valor,menu,opcion,i,posicion,editar,borrar,suma;
suma=0;
posicion=0;
i=valor;
int vector[10];
vector[0]=NULL; vector[1]=NULL; vector[2]=NULL; vector[3]=NULL; vector[4]=NULL; vector[5]=NULL; vector[6]=NULL; vector[7]=NULL; vector[8]=NULL; vector[9]=NULL; vector[10]=NULL;//Igualar vector a dato nulo

cout<<"Bienvenido"<<endl;
while (menu!=7)
    {
cout<<endl<<endl<<"Elija una opcion"<<endl;
    cout<< "------------------------------------"<<endl;
    cout<< "Introducir valores -- 1"<<endl;
    cout<< "Mostrar valores ----- 2"<<endl;
    cout<< "Editar valores ------ 3"<<endl;
    cout<< "Borrar valor -------- 4"<<endl;
    cout<< "Borrar valores ------ 5"<<endl;
    cout<< "Sumar valores ------- 6"<<endl;
    cout<< "Salir --------------- 7"<<endl;
    cout<< "------------------------------------"<<endl;
    cin>> (menu);//Leer el numero que introduzca el usuario y guardarlo en la variable del menu

    switch (menu)//Crear un switch con la variable donde está introducida la elección del usuario
    {//iniciar el operador switch
    case  1://caso 1
        cout<<"Cuantos valores desea introducir?    ";//Mostrar mensaje al usuario
         cin>>valor;//Leer los datos introducidos por el usuario

      do//Operador do-while
      {//iniciar operador do-while
        cout<<endl<<"Introduzca el valor deseado:"<<endl;//Mostrar mensaje al usuario
         cin>>vector[posicion];//Leer los datos en el vector introducidos por el usuario 
          posicion = posicion + 1;//Cada vez que se repita el ciclo sumara 1 la posición en donde se guarda el vector

      } while (posicion<valor);//Condicional del operador do-while
    
    break;//Terminar caso
    
    case 2://Caso 2

    cout<<"Los valores que tiene guardados son:"<<endl;//Mostrar mensaje al usuario
    for ( i = 0; i <10; i++)//Operador for con esa condición y aumento de la variable
    {//Iniciar operador for
     cout<<i<<"----"<<vector[i]<<endl;//Mostrar el valor de la variable seguido del valor guardado en la posición en el vector
    }//Terminar operador for

    break;//Terminar casi 2

    case 3://Caso 3
   
   cout<<"En que posicion esta el valor que desea editar? (recuerda que la posicion empieza a contar desde 0)"<<endl;//Mostrar mensaje al usuario
    cin>>editar;//Leer los datos introducidos por el usuario 

     cout<<"Este es el valor que se guardo en esta posicion:    "<<vector[editar]<<endl;//Mostrar mensaje al usuario seguido de un valor del vector
      cout<<"Ahora introduzca el nuevo valor:    ";
       cin>>vector[editar];//Leer los datos en el vector introducidos por el usuario 

   break;//Terminar caso 3

    case 4://Caso 4
    cout<<"En que posicion esta el valor que desea borrar? (recuerda que la posicion empieza a contar desde 0)"<<endl;//Mostrar mensaje al usuario
    cin>>borrar;//Leer los datos introducidos por el usuario 

      vector[borrar]=NULL;//Realizar operación para que un dato del vector tome valor nulo
      
       cout<<"Listo, quedo borrado :)"<<endl<<endl<<endl;//Mostrar mensaje al usuario

       break;//Terminar caso 4

     case 5://Caso 5

    for ( i = 0; i < 10 ; i++)//Operador for con variable y aumento de esta
    {//Iniciar la función for
          vector[i]=NULL;//Igualar el vector a nulo
    }//Terminar función for
    
     cout<<"Todos los valores se han borrado"<<endl<<endl<<endl;//Mostrar mensaje al usuario
     break;//Terminar caso 5

     case 6://Caso 6

     for ( i = 0; i < 10 ; i++)//Operador for con variable y aumento de esta
    {
          vector[i] + vector[i+1];//Sumar valores de vector
          suma = suma + vector [i];//Igualar esa operación a esa variable para que se repita el proceso y se haga la suma
    }//Terminar función for
        cout<<suma<<endl;//Mostrarle al usuario el valor de la variable

        break;//Terminar caso 6

    case 7://Caso 7

    cout<<"Hasta pronto :)"<<endl;//Mostrar mensaje al usuario
    
    break;//Terminar caso 7

    default://Caso default

    cout<<"Esa opcion no es valida, intenta de nuevo";//Mostrar mensaje al usuario
        break;//Terminar caso default
    }//Terminar con la función switch
}
}