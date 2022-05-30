#include <iostream>
#include <sstream>
#include <fstream>
#include <omp.h>
#define NOMBRE_ARCHIVO "pruebas.csv"
#define NOMBRE_ARCHIVO_OUT "resultado.csv"
using namespace std;
fstream MyFile;

int main()
{
    ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    const string quote ="\""; //comillas dobles para agregar al archivo de salida

    fstream ReadFile(NOMBRE_ARCHIVO_OUT,ios::in);

    if (!ReadFile)
    {
        cout<<"Creando archivo...." << endl;
        cout<<"Integrantes del grupo" << endl;
        cout<<"Claudio Silva" << endl;
        cout<<"Carlos Loyola" << endl;
        cout<<"Jose Calfuen" << endl;
        fstream CreateFile(NOMBRE_ARCHIVO_OUT,ios::out);
        CreateFile<<"Identificador de estudiante;Preguntas correctas;Preguntas incorrectas;Preguntas omitidas;Puntaje;Nota"<<endl;
    }
    
    MyFile.open(NOMBRE_ARCHIVO_OUT,ios::app);
    char delimitador = ';';
    //RESPUESTAS ORDENADAS (RESPUESTA P1  = respuestas[0])
    char respuestas[12] = {'A','E','C','B','B','D','A','B','E','C','B','D'};
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    #pragma omp parallel
    {
<<<<<<< HEAD
        #pragma omp single nowait
        {
            while (getline(archivo, linea))
            {
                //definicion de variables
                float buenas=0,omitidas=0,malas,puntaje,nota;
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
                
                // Cuenta las buenas y omitidas

                if (Pregunta1[1]==respuestas[0]){buenas++;}
                else if (Pregunta1[1]=='-'){omitidas++;}
                if (Pregunta2[1]==respuestas[1]){buenas++;}
                else if (Pregunta2[1]=='-'){omitidas++;}
                if (Pregunta3[1]==respuestas[2]){buenas++;}
                else if (Pregunta3[1]=='-'){omitidas++;}
                if (Pregunta4[1]==respuestas[3]){buenas++;}
                else if (Pregunta4[1]=='-'){omitidas++;}
                if (Pregunta5[1]==respuestas[4]){buenas++;}
                else if (Pregunta5[1]=='-'){omitidas++;}
                if (Pregunta6[1]==respuestas[5]){buenas++;}
                else if (Pregunta6[1]=='-'){omitidas++;}
                if (Pregunta7[1]==respuestas[6]){buenas++;}
                else if (Pregunta7[1]=='-'){omitidas++;}
                if (Pregunta8[1]==respuestas[7]){buenas++;}
                else if (Pregunta8[1]=='-'){omitidas++;}
                if (Pregunta9[1]==respuestas[8]){buenas++;}
                else if (Pregunta9[1]=='-'){omitidas++;}
                if (Pregunta10[1]==respuestas[9]){buenas++;}
                else if (Pregunta10[1]=='-'){omitidas++;}
                if (Pregunta11[1]==respuestas[10]){buenas++;}
                else if (Pregunta11[1]=='-'){omitidas++;}
                if (Pregunta12[1]==respuestas[11]){buenas++;}
                else if (Pregunta12[1]=='-'){omitidas++;}
=======
        //Contador de respuestas buenas
        
        float buenas=0,omitidas=0,malas,puntaje,nota;
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
        if (Pregunta1[1]==respuestas[0]){buenas++;}
        else if (Pregunta1[1]=='-'){omitidas++;}
        if (Pregunta2[1]==respuestas[1]){buenas++;}
        else if (Pregunta2[1]=='-'){omitidas++;}
        if (Pregunta3[1]==respuestas[2]){buenas++;}
        else if (Pregunta3[1]=='-'){omitidas++;}
        if (Pregunta4[1]==respuestas[3]){buenas++;}
        else if (Pregunta4[1]=='-'){omitidas++;}
        if (Pregunta5[1]==respuestas[4]){buenas++;}
        else if (Pregunta5[1]=='-'){omitidas++;}
        if (Pregunta6[1]==respuestas[5]){buenas++;}
        else if (Pregunta6[1]=='-'){omitidas++;}
        if (Pregunta7[1]==respuestas[6]){buenas++;}
        else if (Pregunta7[1]=='-'){omitidas++;}
        if (Pregunta8[1]==respuestas[7]){buenas++;}
        else if (Pregunta8[1]=='-'){omitidas++;}
        if (Pregunta9[1]==respuestas[8]){buenas++;}
        else if (Pregunta9[1]=='-'){omitidas++;}
        if (Pregunta10[1]==respuestas[9]){buenas++;}
        else if (Pregunta10[1]=='-'){omitidas++;}
        if (Pregunta11[1]==respuestas[10]){buenas++;}
        else if (Pregunta11[1]=='-'){omitidas++;}
        if (Pregunta12[1]==respuestas[11]){buenas++;}
        else if (Pregunta12[1]=='-'){omitidas++;}

        malas = 12-(buenas + omitidas);
        puntaje = buenas * 0.5 - malas * 0.12;
        nota = 1 + puntaje;
        cout << "==================" << endl;
        cout << "Id: " << id << endl;
        cout << "Pregunta 1: " << Pregunta1[1] << endl;
        cout << "Pregunta 2: " << Pregunta2[1] << endl;
        cout << "Pregunta 3: " << Pregunta3[1] << endl;
        cout << "Pregunta 4: " << Pregunta4[1] << endl;
        cout << "Pregunta 5: " << Pregunta5[1] << endl;
        cout << "Pregunta 6: " << Pregunta6[1] << endl;
        cout << "Pregunta 7: " << Pregunta7[1] << endl;
        cout << "Pregunta 8: " << Pregunta8[1] << endl;
        cout << "Pregunta 9: " << Pregunta9[1] << endl;
        cout << "Pregunta 10: " << Pregunta10[1] << endl;
        cout << "Pregunta 11: " << Pregunta11[1] << endl;
        cout << "Pregunta 12: " << Pregunta12[1] << endl;
        cout << "Buenas: " << buenas << endl;
        cout << "Malas: " << Malas << endl;
        cout << "Omitidas: " << omitidas << endl;
        cout << "Puntaje: " << puntaje << endl;
        cout << "Nota: " << nota << endl;

        MyFile<<id+";"<<buenas<<";"<<malas<<";"<<omitidas<<";"<<puntaje<<";"<<nota<<endl;
>>>>>>> d39f1df6865e5fc9a36feb5766b86854b786b12a

                malas = 12-(buenas + omitidas); //calculo de malas
                puntaje = buenas * 0.5 - malas * 0.12;//calculo del puntaje
                nota = 1 + puntaje;//calculo de nota

                MyFile<<id<<";"+quote<<buenas<<quote+";"+quote<<malas<<quote+";"+quote<<omitidas<<quote+";"+quote<<puntaje<<quote+";"+quote<<nota<<quote<<endl;//registro en el archivo
            }
        }
    }
    MyFile.close();
    archivo.close();
<<<<<<< HEAD
    cout<<"Archivo Creado :D" << endl;
}
=======
}
>>>>>>> d39f1df6865e5fc9a36feb5766b86854b786b12a
