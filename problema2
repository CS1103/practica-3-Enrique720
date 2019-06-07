#include <iostream>
#include <algorithm>
#include <random>
#include <deque>
#include <time.h>
#include <vector>

using namespace std;
template <typename T>
deque<T> funcion(deque<T> a, int n ){
    deque<T> retorno;
    vector<T> temporal;
    T temp = a.front();
    unsigned long long int p= a.size();
    for(int i = 0;i < p;i=i+n){
        temp = a.front();
           for(int j = 0;  j < n ; j++){
               temporal.push_back(a.front());
               a.pop_front();
           }
           for(int k = 0; k < n; k++){
               if(temporal[k] <temp)
                   temp = temporal[k];
           }
           retorno.push_back(temp);
           for(int k = 0; k < n; k++){
            temporal.pop_back();
           }
    }
    return retorno;
}
int main() {
    deque<int>a;
    a.push_front(1);
    a.push_front(3);
    a.push_front(9);
    a.push_front(7);
    a.push_front(10);
    a.push_front(5);

    deque<int> b;
    b =funcion(a,2);
    int j= b.size();
    for(int i =0; i < j; i++)
    {
        cout << b.front() << " ";
        b.pop_front();
    }
}
