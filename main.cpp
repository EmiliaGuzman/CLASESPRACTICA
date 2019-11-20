#include <iostream>

using namespace std;

class Estudiante{

private:
    string nombre;
    string apellido;
    string codigo;
public:
    Estudiante();
    void getDatos();
    void imprimirDatos();

};

Estudiante::Estudiante(){

}

void Estudiante::getDatos()
{
        cout << "Ingrese su nombre:";
        cin >> nombre;
        cout << "Ingrese su apellido:";
        cin >> apellido;
        cout << "Ingrese su codigo:";
        cin >> codigo;
        cout << endl;}

void Estudiante::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
}

class Curso{
private:
    string nombre,codigo;
    Estudiante alumnos;
    int cantidadAlumnos;
public:
    Curso(string n ,string c, int a);
    void getDatos();
    void changeDatos();
    void incremento();

};

Curso::Curso(string n ,string c, int a)
{
    nombre=n;
    codigo=c;
    cantidadAlumnos=a;
}

void Curso::getDatos()
{
    cout << "Cuantos alumnos ingresaran datos: ";
    cin >> cantidadAlumnos;
    for(int i=0;i<cantidadAlumnos;i++)
    {
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese su codigo: ";
        cin >> codigo;
    }

}
void Curso::changeDatos()
{
    string respuesta;
    cout << "Quieres aumentar o disminuir datos?";
    cin>> respuesta;

    if(respuesta=="SI")
    {
        int cantidadExtraAlumnos;
        cout << "Cuantos alumnos extra ingresaran a la lista: ";
        cin >> cantidadExtraAlumnos;
        for(int i=0;i<cantidadExtraAlumnos;i++)
        {
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese su codigo: ";
        cin >> codigo;
        }

    }
    else{cout<< "Sin cambios"<< endl;}
}

/*void Curso::incremento()
{
    char **aumento;
    aumento= new char *[cantidadAlumnos+1];
    for(int n=0; n<cantidadAlumnos+1;n++)
    {
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese su codigo: ";
        cin >> codigo;

    }
}
*/
int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
    Curso mater(0,0,0);
    mater.getDatos();

}
