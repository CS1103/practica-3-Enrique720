#include <iostream>
#include <random>
#include <time.h>
using namespace std;
template <typename T>
class matriz{
    T** mat;
    T filas;
    T columas;
public:
    matriz operator+(matriz a){
        matriz temp(a.filas,a.columas);
        if(this->columas == a.filas && this->filas == a.filas){
            for( int i = 0 ; i < filas; i ++){
                for ( int j=0; j <columas; j++){
                      temp.mat[i][j]= this->mat[i][j]+a.mat[i][j];
                }
            }
        }
        else{
            cout << "las filas y las columnas tiene que ser iguales" << endl;
        }
        return temp;

    }
    matriz(T _filas, T _columas):filas{_filas
    }, columas{_columas}{
        mat = new T*[filas];
        for(int i  = 0 ;  i < filas; i ++ ){
            mat[i]= new T[columas];
        }
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columas; j++) {
                mat[i][j] = 0;
            }
        }

    }
    void llenar_matriz() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columas; j++) {
                cout << "ingresar el valor " << i << " " << j;
                cin >> mat[i][j];
            }
        }
    }
    void print_matriz(){
        for(int i = 0 ; i < filas; i++){
            for( int j = 0; j < columas; j++){
                cout << mat[i][j] << " ";}
            cout << endl;
        }
    }
    void llenar_rand() {
        
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columas; j++) {
                 mat[i][j] = rand()%10;
            }
        }
    }

};
int main() {
    matriz<int> a(2,2);
    a.llenar_rand();
    cout << "matriz a" << endl;
    a.print_matriz();
    matriz<int> b(2,2);
    b.llenar_rand();
    cout << "matriz b" << endl;
    b.print_matriz();
    matriz<int> c(2,2);
    c=b+(a);
    cout << "suma de las matrices" << endl;
    c.print_matriz();
}
