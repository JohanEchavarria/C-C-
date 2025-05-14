#include <iostream>

using namespace std;
// la herencia permite crear una clase nueva derivada
// de una exitente

class Animales {
public:
    void comer (){
        cout << "El animal esta comiendo" << endl;

}
};

class Perro: public Animales {
public:
   void Ladrar (){
   cout << "El Perro esta Ladrando" << endl;
   }

   void corre (){
   cout << "El Perro esta corriendo" <<endl;

}

};

class Gato: public Animales {
public:
   void salta (){
   cout << "El gato esta saltando" <<endl;

   }
   void roba (){
   cout << "El gato esta robando" <<endl;
   }

};

int main(){

   Perro miPerro;
   miPerro.comer();
   miPerro.Ladrar();
   miPerro.corre();

   Gato MiGato;
   MiGato.roba();
   MiGato.salta();
   MiGato.comer();

   return 0;
}
