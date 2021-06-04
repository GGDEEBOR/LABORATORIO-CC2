#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__
#include <iostream>
#include "Person.h"


template <typename T>
class DynamicArray {
private:
    int size;
    T *arr;
    void resize(int newSize);
public:
    DynamicArray();
    DynamicArray(const T arr[], int size);
    DynamicArray(const DynamicArray &o);

    void push_back(T elem);

    // TODO implementar
    void insert(T elem, int pos);
    void remove(int pos);
    

    // firma de clear
    void clear();


    // firma del metodo print
    void print();


    int getSize() const;
    ~DynamicArray();
    
    
    // firma de la sobrecarga del operador de salida
    friend std::ostream &operator<<( std::ostream &output,const DynamicArray &p ){ 
        std::cout <<"[";
        for (int i = 0; i < p.size ; i++){
            output<< p.arr[i] << "   ";
        }
        std::cout <<"]"<<std::endl;
        return output;    
		        
    }
    
    
};



// Implementacion de los metodos
template<typename T>
DynamicArray<T>::DynamicArray() {
    size = 0;
    arr = new T[0];
}

template<typename T>
DynamicArray<T>::DynamicArray(const T arr[], int size) {
    this->size = size;
    this->arr = new T[size];

    for(int i = 0; i < size; i++)
        this->arr[i] = arr[i];
}

template<typename T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> &o) {
    this->size = o.size;
    this->arr = new T[o.size];

    for(int i = 0; i < size; i++)
        this->arr[i] = o.arr[i];
}


template<typename T>
void DynamicArray<T>::resize(int newSize){
    T *tmp = new T[newSize];
    int minSize = (newSize > size) ? size : newSize; 
    for(int i = 0; i < minSize; i++)
        tmp[i] = arr[i];
    delete[] arr;
    size = newSize;
    arr = tmp;    
}


template<typename T>
void DynamicArray<T>::push_back(T elem) {
    resize(size + 1);
    arr[size - 1] = elem;
}

/*
Metodos insert y remove
*/
// Metodo insert
template<typename T>
void DynamicArray<T>::insert(T elem, int pos){
    resize(size + 1);
    for(int i = size -1; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
}


template<typename T>
// Metodos remove
void DynamicArray<T>::remove(int pos) {
    for(int i = pos; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    resize(size - 1);

}


template<typename T>
void DynamicArray<T>::clear(){
    resize(0);
}

template<typename T>
// Metodo print
void DynamicArray<T>::print(){
    std::cout << "[ ";
    for (int x = 0; x < size; x++){
    	//Jugador &D = arr[x];
    	//std::cout << D;
        std::cout<< arr[x] << " ";

    }
    std::cout << "] " << std::endl;

}


template<typename T>
int DynamicArray<T>::getSize() const {
    return size;
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete [] arr;

}
#endif




