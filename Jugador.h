#ifndef _JUGADOR_H_
#define _JUGADOR_H_
#include <iostream>
#include <string>

class Jugador{
        std::string nombre;
        int numero;
        std::string equipo;
        std::string posicion;
    public:
        // constructores
        Jugador(std::string nombre, int numero, std::string equipo, std::string posicion);
        Jugador(const Jugador &a);
        
        // destructor
        ~Jugador();
        //gets
        std::string getNombre()const;
        int getNumero()const;
        std::string getEquipo()const;
        std::string getPosicion()const;

        // sets
        void setNumero(int _numero);
        void setEquipo(std::string _equipo);
        void setNombre(std::string _nombre);
        void setPosicion(std::string _posicion);
        
        
        // sobrecarga del operador de salida
        friend std::ostream& operator<<(std::ostream &output, const Jugador &D ){ 
            output <<D.nombre<<", ";
			output <<D.numero<<", ";
			output << D.equipo<<", ";
			output << D.posicion <<"  ";
            return output;            
        }
        
        
};

// Implementaciones
Jugador::Jugador(std::string nombre = "", int numero=0, std::string equipo="", std::string posicion="" ){
    this->nombre = nombre;
    this->numero = numero;
    this->equipo = equipo;
    this->posicion = posicion;
}

Jugador::Jugador(const Jugador &a ){
    this->nombre = a.nombre;
    this->numero = a.numero;
    this->equipo = a.equipo;
    this->posicion = a.posicion;
}

// destructor
Jugador::~Jugador(){

}

// gets
std::string Jugador::getNombre()const{
    return nombre;
}
int Jugador::getNumero()const{
    return numero;
}
std::string Jugador::getEquipo()const{
    return equipo;
}
std::string Jugador::getPosicion()const{
    return posicion;
}

// Sets
void Jugador::setNumero(int _numero){
    this->numero = _numero;
}
void Jugador::setEquipo(std::string _equipo){
    this->equipo =_equipo;
}
void Jugador::setNombre(std::string _nombre){
    this->nombre=_nombre;
}
void Jugador::setPosicion(std::string _posicion){
    this->posicion=_posicion;
}


#endif
