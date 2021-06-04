#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>
#include <string>

class Person { // clase persona
private:// datos miembro
    std::string name; // atributo nombre
    int id; // atributo identificador
public:// funciones miembro
    Person(std::string n = "", int i = 0) : name(n), id(i) {} // constructor

    std::string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    void setName(std::string n) {
        name = n;
    }
    void setId(int id) {
        this->id = id;
    }
    // sobrecarga del operador de salida
    friend std::ostream& operator<<(std::ostream &output, const Person &o ){ 
        output <<o.name<<", ";
        output <<o.id<<" ";
        return output;            
    }
};

#endif
