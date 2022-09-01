#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numJuego, Lanzamiento, precioUnitario, opc;
    string nombreJuego, caract, genero, descripcion, clasificacion;

    cout << "\t ***WORLD OF GAMES*** \n"; //Se abre el meú de opciones de la página
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo \n 3.-Eliminar Articulo \n 4.-Lista de Articulos Vigentes(opcion a Genero, Clasificacion) \n 5.-Limpiar pantalla \n 6.-Salir\n";
    cin >> opc;

    switch (opc) {

    case 1: //Se escoge la opción de "Agregar articulo. Donde se piden los datos generales del juego que se quiera agregar"
        cout << "\t Ingrese el numero del Videojuego que desee agregar a la lista de Articulos \n";
        cin >> numJuego;
        cout << "\t Ingrese el nombre del Videojuego \n";
        cin >> nombreJuego;
        getline(cin, nombreJuego); //permite los espacios en la variable, en este caso, el nombre del juego
        cout << "\t Año de lanzamiento \n";
        cin >> Lanzamiento;
        cout << "\t Clasificación \n";
        cin >> clasificacion;
        cout << "\t Caracteristicas \n";
        cin >> caract;
        getline(cin, caract);
        cout << "\t Descripcion \n";
        cin >> descripcion;
        getline(cin, descripcion);
        cout << "\t Genero\n";
        cin >> genero;
        getline(cin, genero);
        cout << "\t Precio unitario \n";
        cin >> precioUnitario;
        cout<< "\t Son todos los datos necesarios, gracias :) \n"<<endl;

        return main();
        break;

    case 2: //Se escoge la opción de "Modificar articulo"
        break;

    case 3: //Se escoge la opción de "Eliminar archivo"
        break;

    case 4: // Se escoge la opción de "Lista de articulos"
        break;

    case 5: // Se escoge la opción de "Limpiar pantalla. El usuario pide que la pantalla se limpie de los datos y del menu de opciones"
        system("cls"); //comando que se utiliza para limpiar la pantalla, en la web se utiliza "clear" en vez de "cls" 
        return main();
        break;

    case 6: // Se escoge la opción de "Salir. El usuario sale del programa"
        cout << "Gracuias por utilizar los servicios de WORLD OF GAMES \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();
    }
}
