/*0) inciciar todos los vectores a utilizar a cero. 
1) partimos sobre la base de 500 ingresos de nombre apellido, edad y DNI. 
2) comenzar el ingreso únicamente preguntando si desea comenzar el ingreso. 1 para comenzar, 0 para no ingresar. 
3) cada vez que se ingrese una persona preguntar si se desea cargar una descripción. 1 para aceptar 0 para no. 
Y realizar la carga de datos.
4) luego de ingresar los datos de la persona pedir lo siguiente. Ingrese la posición en la cual desea cargar los datos. 
Y proceder a hacer el ingreso. Una vez que la posición tenga datos cargados no podrá volver a usarse.
5) Resolver lo mismo que en el punto anterior pero preguntar antes la posición de guardado.
6) luego de cargar la descripción preguntar si desea continuar. Si no desea continuar: Preguntar si desea imprimir el listado cargado. 
Imprimir solo los datos ingresados al momento. Si no desea imprimir dar por finalizado el programa. Imprime " fin del programa".
7) una vez finalizado el ingreso quedar a la espera de la acción a realizar. 

Acciones: buscar (0), modificar (1), imprimir (2), cambiar de lugar (3). Finalizar (4).

Buscar (0): en esta acción se pide buscar solamente DNI puntuales. Se podrá realizar solo una búsqueda de un DNI por vez. 
Una vez encontrado el dato se imprimirá solo los datos que la persona elija. Nombre (0). Apellido (1), edad(2), completo(3). 
Este proceso seguira hasta que la persona ingrese 666 para finalizar la búsqueda.
Volverá a comenzar el punto 7 pidiendo nuevamente la acción a realizar.
Modificar(1):
Se preguntará qué posición desea modificar y se modificarán todos los datos de esa persona sin importar los anteriores. 
Volverá a comenzar el punto 7 pidiendo nuevamente la acción a realizar
Imprimir (2): se preguntará qué DNI se desea imprimir, si el DNI está cargado se imprimirán todos los datos de esa persona. 
Si la persona ingresa como DNI el número 777 se imprimirá todo el listado completo. 
Volverá a comenzar el punto 7 pidiendo nuevamente la acción a realizar
Cambiar de lugar (3) 
Se pedirán las dos posiciones de las personas a modificar. 
Luego de tener las dos posiciones de hará un "enroque" de todos los datos ingresados sin perder información alguna. 
Volverá a comenzar el punto 7 pidiendo nuevamente la acción a realizar

Finalizar (4): imprimir "fin del programa).*/

#include<iostream>

using namespace std;

// Objeto

class user {
    private:
        string nombre;
        string apellido;
        int edad;
        int dni;
        int codigo_acceso_cin;

    public:

        int menu(int n) {
            if (n == 0) {
                cout<<"[1]Ingresar\n[0]No ingresar\n";
                cin>>codigo_acceso_cin;
                if (codigo_acceso_cin == 1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            else if (n == 1) {
                cout<<"Desea cargar descripcion\n[1]Aceptar\n[0]Denegar\n";
                cin>>codigo_acceso_cin;
                if (codigo_acceso_cin == 1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            else if (n == 2) {
                cout<<"Desea continuar\n[1]Aceptar\n[0]Denegar\n";
                cin>>codigo_acceso_cin;
                if (codigo_acceso_cin == 1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            else if (n == 3) {
                cout<<"Desea imprimir el listado cargado\n[1]Aceptar\n[0]Denegar\n";
                cin>>codigo_acceso_cin;
                if (codigo_acceso_cin == 1) {
                    return 1;
                }
                else {
                    return 0;
                }
            }
            else if (n == 4) {
                cout<<"[0]buscar\n[1]modificar\n[2]imprimir\n[3]cambiar de lugar\n[4]Finalizar\n";
                cin>>codigo_acceso_cin;
                if (codigo_acceso_cin == 0) {
                    return 0;
                }
                else if (codigo_acceso_cin == 1) {
                    return 1;
                }
                else if (codigo_acceso_cin == 2) {
                    return 2;
                }
                else if (codigo_acceso_cin == 3) {
                    return 3;
                }
                else {
                    return 4;
                }
            }
            else if (n == 5) {
                cout<<"Mostrar\n[0]Nombre\n[1]Apellido\n[2]edad\n[3]completo\n";
                cin>>codigo_acceso_cin;
                return codigo_acceso_cin;
            }
            return 0;
        }  
        void ingreso_datos_user() {
            cout<<"Ingrese nombre: ";
            cin>>nombre;
            fflush(stdin);
            cout<<"Ingrese apellido: ";
            cin>>apellido;
            fflush(stdin);
            cout<<"Ingrese edad: ";
            cin>>edad;
            fflush(stdin);
            cout<<"Ingrese dni: ";
            cin>>dni;
            fflush(stdin);
            cout<<"Gracias por ingresar sus datos\n\n";
        }
        void mostrar_datos_user(int i) {
            cout<<"-------------------\n";
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Edad: "<<edad<<endl;
            cout<<"Dni: "<<dni<<endl;
            cout<<"Ubicacion vector: "<<i<<endl;
            cout<<"-------------------\n\n";
        }
        void mostrar_datos_user_separado(int n, int i) {
            if (n == 0) {
                cout<<"Nombre: "<<nombre<<endl;
            }
            else if (n == 1) {
                cout<<"Apellido: "<<apellido<<endl;
            }
            else if (n == 2) {
                cout<<"Edad: "<<edad<<endl;
            }
            else {
                mostrar_datos_user(i);
            }
        }
        int dni_malicioso(int dni_malicioso_1) {
            if (dni == dni_malicioso_1) {
                return 1;
            }
            else {
                return 0;
            }
        }
    user ();
}usuarios[500];

// Constructor

user::user () {}

// Funciones

int main ()
{
    if (usuarios[0].menu(0) == 0) {
        return 0;
    }
    int i = 0,j = 0,pos[500], dni, pos_aux, i_aux;
    while (i < 500) {
        cout<<"Ingrese la posicion en la cual desea cargar los datos\n";
        cin>>pos[i];
        usuarios[pos[i]].ingreso_datos_user();
        if (usuarios[0].menu(1) == 1) {
            usuarios[pos[i]].mostrar_datos_user(pos[i]);
        }
        if (usuarios[0].menu(2) == 0) {
            if (usuarios[0].menu(3) == 1) {
                while (j <= i) {
                    usuarios[pos[i]].mostrar_datos_user(pos[i]);
                    j++;
                }
            }
            break;
        }
        i++;
    }
    cout<<"Fin del programa\n";
    if (usuarios[0].menu(4) == 0) {
        i = 0;
        cout<<"DNI a buscar: ";
        cin>>dni;
        while (i < 500) {
            if (usuarios[i].dni_malicioso(dni) == 1) {
                usuarios[i].mostrar_datos_user_separado(usuarios[0].menu(5), i);
            }
        i++;
        }
    }
    else if (usuarios[0].menu(4) == 1) {
        cout<<"Ingrese la posicion en la cual desea cargar los datos\n";
        cin>>pos_aux;
        i = 0, i_aux = 0;
        while (i < 500) {
            if (pos_aux == pos[i]) {
                i_aux = i;
            }
        }
        if (i_aux != 0) {
            usuarios[pos[i_aux]].ingreso_datos_user();
        }
        else {

        }
        
    }
    else if (usuarios[0].menu(4) == 2) {
        
    }
    else if (usuarios[0].menu(4) == 3) {
        
    }
    return 0;
}