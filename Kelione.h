//
// Created by Marius on 2/22/2021.
//

#ifndef KELIONIUORGANIZAVIMOFIRMA_KELIONE_H
#define KELIONIUORGANIZAVIMOFIRMA_KELIONE_H
#include <vector>
#include <iostream>
#include "Transportas.h"

using namespace std;


class Kelione {
private:
  string kurortas;
  string data;
  string viesbutis;
  Transportas transportas;
  int asmenuSkaicius;
  int dienuSkaicius;
public:
  Kelione(const string &kurortas, const string &data, const string &viesbutis, const Transportas &transportas,
          int asmenuSkaicius, int dienuSkaicius);

  const string &GetKurortas() const;

  const string &GetData() const;

  const string &GetViesbutis() const;

  const Transportas &GetTransportas() const;

  int GetAsmenuSkaicius() const;

  int GetDienuSkaicius() const;

};


#endif //KELIONIUORGANIZAVIMOFIRMA_KELIONE_H
