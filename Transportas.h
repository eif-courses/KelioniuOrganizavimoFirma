//
// Created by Marius on 2/22/2021.
//

#ifndef KELIONIUORGANIZAVIMOFIRMA_TRANSPORTAS_H
#define KELIONIUORGANIZAVIMOFIRMA_TRANSPORTAS_H

#include <iostream>

class Transportas {
private:
  std::string pavadinimas;
  int vietuSkaiciusEkonomine;
  int vietuSkaiciusVerslo;
public:
  Transportas(const std::string &pavadinimas, int vietuSkaiciusEkonomine, int vietuSkaiciusVerslo);

  const std::string &GetPavadinimas() const;

  int GetVietuSkaiciusEkonomine() const;

  int GetVietuSkaiciusVerslo() const;
};


#endif //KELIONIUORGANIZAVIMOFIRMA_TRANSPORTAS_H
