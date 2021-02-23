//
// Created by Marius on 2/22/2021.
//

#include "Transportas.h"

Transportas::Transportas(const std::string &pavadinimas, int vietuSkaiciusEkonomine, int vietuSkaiciusVerslo)
    : pavadinimas(pavadinimas), vietuSkaiciusEkonomine(vietuSkaiciusEkonomine),
      vietuSkaiciusVerslo(vietuSkaiciusVerslo) {}

const std::string &Transportas::GetPavadinimas() const {
  return pavadinimas;
}

int Transportas::GetVietuSkaiciusEkonomine() const {
  return vietuSkaiciusEkonomine;
}

int Transportas::GetVietuSkaiciusVerslo() const {
  return vietuSkaiciusVerslo;
}
