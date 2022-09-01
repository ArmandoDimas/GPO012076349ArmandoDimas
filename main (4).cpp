/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout<<"Eliga una opcion \n";
     cout<<"1.Agregar Articulo \n";
      cout<<"2.Modificar Articulo \n";
       cout<<"3.Eliminar Articulo \n";
        cout<<"4.Lista de Articulos vigentes \n";
         cout<<"5.Limpiar Pantalla \n";
          cout<<"6.Salir \n";
       cin>> a;
       
       switch(a){
           case 1:
           cout<<"Agregue Nombre del videouego\n";
           break;
           
           case 2:
           cout<<"Que desea modificar \n";
           break;
           
           case 3:
           cout<<"Que Articulo desea eliminar \n";
           break;
           
           case 4:
           cout<<"Escoga una opcion \n";
           cout<<"1.Genero \n";
           cout<<"2.Clasificacion \n";
           cin>> b;
            switch(b){
                case 1:
                cout<<"Videojuegos Ordenados por Genero\n";
                break;
                
                case 2:
                 cout<<"Videojuegos Ordenados por Clasificacion\n";
                 break;
            }
           break;
           
           case 5:
             cout<<"Seguro que desea Limpiar la pantalla \n";
                 cout<<"1.Si \n";
                    cout<<"2.No \n";
                    cin>> d;
                if(d==1){
                    system("clear"); 
                    return main();
                }  
                else{
                    return main();
                }
                break;
             
           case 6:
              cout<<"Seguro que quiere salir ? \n";
           cout<<"1.Si \n";
            cout<<"2.No \n";
            cin>> c;
            if(c==1){
               return 0; 
            }
            else{
                system("clear"); 
                return main();
            }
            break;
             
       }

    return 0;
}
