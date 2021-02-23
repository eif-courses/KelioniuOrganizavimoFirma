//
// Created by Marius on 2/22/2021.
//

#ifndef KELIONIUORGANIZAVIMOFIRMA_KLIENTAS_H
#define KELIONIUORGANIZAVIMOFIRMA_KLIENTAS_H
#include <iostream>

using namespace std;

class Klientas {
public:
  Klientas(const string &vardas, const string &pavarde, int amzius);
  void PasirinktiKelione();

  long GetId() const;

  void SetVardas(const string &vardas);

  // const string &
  const string &GetVardas() const;

  const string &GetPavarde() const;

  int GetAmzius() const;

  double GetBiudzetas() const;

  void SetBiudzetas(double biudzetas);

private:
  long id;
  string vardas;
  string pavarde;
  int amzius;
  double biudzetas;
};


#endif //KELIONIUORGANIZAVIMOFIRMA_KLIENTAS_H
