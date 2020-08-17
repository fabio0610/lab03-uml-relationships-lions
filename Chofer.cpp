//
// Created by Tere Solano on 14/8/2020.
//

#include "Chofer.h"


Chofer::Chofer(const string &name, const string &id) : name(name), id(id) {}

Chofer::~Chofer() {

}

const string &Chofer::getName() const {
    return name;
}

void Chofer::setName(const string &name) {
    Chofer::name = name;
}

const string &Chofer::getId() const {
    return id;
}

void Chofer::setId(const string &id) {
    Chofer::id = id;
}

//Carro *Chofer::getCarro() const {
  //  return audi;
//}

//void Chofer::setCarro(Carro *audi) {
  //  Chofer::audi = audi;
//}
string Chofer::toString() {
    stringstream s;
    s<<"Nombre: "<<getName()<<endl;
    s<<"ID: "<<getId()<<endl;
    //s<<"Carro: "<<getCarro()<<endl;
    return s.str();
}