#include <iostream>
#include "Klientas.h"



void f(const Klientas &n){
 // n = n + 10; // 5 + 10 = 15
  // petras(petras, petraitis, 2);
 // n = Klientas("Jonas", "Nesamonas", 44);

 /// n.SetPavarde("Aweawea");

  cout <<"Rezultatas: " << n.GetPavarde() << endl;
}
void d(int &n){
  n = n * 10; // 5 + 10 = 15
 // cout <<"Rezultatas: " << n << endl;
}

int ff(int n){
  return n+=10; // n + 10 => 5 => 15
}
int dd(int n){
  int temp;
  temp = ff(n) * 10; // 15 * 10 => 150
  return temp;
}




int main() {

  cout << "Registracija" << endl;
  cout << "iveskite varda: "<< endl;
  string vardas;
  cin >> vardas;
  cout << "iveskite pavarde: "<< endl;
  string pavarde;
  cin >> pavarde;
  cout << "iveskite amziu: "<< endl;
  int amzius;
  cin >> amzius;

  Klientas klientas(vardas,pavarde, amzius);
  klientas.PasirinktiKelione();



  return 0;
}
