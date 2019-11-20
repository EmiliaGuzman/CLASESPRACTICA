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
    string nombre=n;
    string codigo=c;
    int cantidadAlumnos=a;
}

Curso::getDatos()
{
    cout << "Ingrese su nombre: ";
    cin >> n;
    cout << "Ingrese su codigo: ";
    cin >> c;
    cout << "Diga cuantos alumnos hay: ";
    cin >> a;
    
}

int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
}

