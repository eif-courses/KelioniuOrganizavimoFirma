//
// Created by Marius on 2/22/2021.
//

#include "Kelione.h"

Kelione::Kelione(const string &kurortas, const string &data, const string &viesbutis, const Transportas &transportas,
                 int asmenuSkaicius, int dienuSkaicius) : kurortas(kurortas), data(data), viesbutis(viesbutis),
                                                          transportas(transportas), asmenuSkaicius(asmenuSkaicius),
                                                          dienuSkaicius(dienuSkaicius) {}

const string &Kelione::GetKurortas() const {
  return kurortas;
}

const string &Kelione::GetData() const {
  return data;
}

const string &Kelione::GetViesbutis() const {
  return viesbutis;
}

const Transportas &Kelione::GetTransportas() const {
  return transportas;
}

int Kelione::GetAsmenuSkaicius() const {
  return asmenuSkaicius;
}

int Kelione::GetDienuSkaicius() const {
  return dienuSkaicius;
}
