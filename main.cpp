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
    char alumnos[4];
    int cantidadAlumnos();
public:
    void getDatos();
    void imprimirDatos();

};

void Curso::getDatos()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su codigo: ";
    cin >> codigo;
    cout << "Ingrese la lista de alumnos: ";
    cin >> alumnos[4];
    for(int i=0; i<4; i++)
    {
        alumno[i];
    }
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
}

void Curso::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
    cout << "La lista de alumnos es como sigue: "<< alumnos[4]<< endl;
    cout << "La cantidad de alumnos"<< cantidadAlumnos[];
    cout << endl;

}

};

class Curso{
private:
    string nombre;
    string codigo;
    char alumnos[4];
    int cantidadAlumnos();
public:
    void getDatos();
    void imprimirDatos();

};

void Curso::getDatos()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su codigo: ";
    cin >> codigo;
    cout << "Ingrese la lista de alumnos: ";
    cin >> alumnos[4];
    for(int i=0; i<4; i++)
    {
        alumno[i];
    }
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
}

void Curso::imprimirDatos()
{
    cout << "Su nombre es "<< nombre << " "<< apellido << endl;
    cout << "Con codigo "<< codigo;
    cout << endl;
    cout << "La lista de alumnos es como sigue: "<< alumnos[4]<< endl;
    cout << "La cantidad de alumnos"<< cantidadAlumnos[];
    cout << endl;

}

int main()
{
    Estudiante ana;
    ana.getDatos();
    ana.imprimirDatos();
    
    Curso df;
    df.getDatos();
    df.imprimirDatos();
}


