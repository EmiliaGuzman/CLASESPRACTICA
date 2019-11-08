#include <iostream>

using namespace std;

class Estudiante{

private:
    string nombre;
    string apellido;
    string codigo;
public:
    /*Estudiante(string name,string lname,string code )
    {
        nombre=nombre;
        apellido=apellido;
        codigo=codigo;
    }*/
    void getDatos();
    void imprimirDatos();

};


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
    string nombre;
    string codigo;
    char* alumnos[];
    int cantidadAlumnos();
    void getDatos();



};


int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
}
