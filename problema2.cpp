#include <iostream>
#include <algorithm>
#include <random>
#include <deque>
#include <time.h>
#include <vector>
#include <map>
#include <fstream>
#include <string>
#include <iterator>
using namespace std;
map<string, int> crear(){
    map<string, int> retorno;
    fstream file;
    file.open("archivo.txt",ios::in);
    string b;
    int cont =0;
    while(getline(file,b)){
        cont++;
    }
    file.close();
    file.open("archivo.txt",ios::in);
    string a;
    string key;
    int value;
    for(int i= 0; i < cont; i++ ){
        file >> a;
        if(a == "C"){
               file >>key;
               file >> value;
               retorno.insert(pair<string,int>(key,value));

        }
        else if(a=="L"){
            file >> key;

            if(key =="All"){
                for(auto it = retorno.cbegin(); it!=retorno.cend();++it){
                    cout << it->first << "" << it->second << " " << endl;
                }
            }
            else{
                cout << retorno[key] << endl;
            }
        }
        else if(a== "D"){
            file >> key;
            retorno.erase(key);

        }
    }
    return retorno;
}
int main() {
    fstream file;
    map<string,int> a;
    a = crear();
}
