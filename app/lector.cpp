#include <iostream>
#include <sstream>
#include <fstream>
#define NOMBRE_ARCHIVO "pruebas.csv"
using namespace std;

int main()
{
    ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ';';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
   // while (getline(archivo, linea)) descomentar esta y comentar el for para el uso de todo el archivo
    for (size_t i = 0; i < 20; i++) //archivo limitado a las primeras 20 filas
    {
        getline(archivo, linea);// comentar cuando se quiera usar el archivo completo
        stringstream stream(linea); // Convertir la cadena a un stream
        string id, Pregunta1, Pregunta2, Pregunta3, Pregunta4, Pregunta5, Pregunta6, Pregunta7, Pregunta8, Pregunta9, Pregunta10, Pregunta11, Pregunta12;
        // Extraer todos los valores de esa fila
        getline(stream, id, delimitador);
        getline(stream, Pregunta1, delimitador);
        getline(stream, Pregunta2, delimitador);
        getline(stream, Pregunta3, delimitador);
        getline(stream, Pregunta4, delimitador);
        getline(stream, Pregunta5, delimitador);
        getline(stream, Pregunta6, delimitador);
        getline(stream, Pregunta7, delimitador);
        getline(stream, Pregunta8, delimitador);
        getline(stream, Pregunta9, delimitador);
        getline(stream, Pregunta10, delimitador);
        getline(stream, Pregunta11, delimitador);
        getline(stream, Pregunta12, delimitador);
        // Imprimir
        cout << "==================" << endl;
        cout << "Id: " << id << endl;
        cout << "Pregunta 1: " << Pregunta1 << endl;
        cout << "Pregunta 2: " << Pregunta2 << endl;
        cout << "Pregunta 3: " << Pregunta3 << endl;
        cout << "Pregunta 4: " << Pregunta4 << endl;
        cout << "Pregunta 5: " << Pregunta5 << endl;
        cout << "Pregunta 6: " << Pregunta6 << endl;
        cout << "Pregunta 7: " << Pregunta7 << endl;
        cout << "Pregunta 8: " << Pregunta8 << endl;
        cout << "Pregunta 9: " << Pregunta9 << endl;
        cout << "Pregunta 10: " << Pregunta10 << endl;
        cout << "Pregunta 11: " << Pregunta11 << endl;
        cout << "Pregunta 12: " << Pregunta12 << endl;
    }

    archivo.close();
}