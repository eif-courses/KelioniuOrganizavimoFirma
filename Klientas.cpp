//
// Created by Marius on 2/22/2021.
//

#include "Klientas.h"
#include "Transportas.h"
#include "Bilietas.h"
#include <random>

Klientas::Klientas(const string &vardas, const string &pavarde, int amzius) : vardas(vardas), pavarde(pavarde),
                                                                              amzius(amzius) {

  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution(1, 900000);
  int randomid = distribution(generator);

  Klientas::id = randomid;
  Klientas::biudzetas = 3000;
}

void Klientas::PasirinktiKelione() {
  vector<string> kurortai{"Palanga", "Turkija", "Maldyvai", "Juodkrante"};
  vector<string> data{"2021-04-21", "2021-04-22", "2021-04-23"};
  vector<string> viesbutis{"Radison", "Draugyste", "Klaipeda", "Tulpe"};

  cout << "Pasirinkite kelione:" << endl;

  for (int i = 0; i < kurortai.size(); ++i) {
    cout << (i + 1) << "." << kurortai.at(i) << endl;
  }
  int kurortas;
  cin >> kurortas;

  cout << "Pasirinktas kurortas: " << kurortai[kurortas - 1] << endl;


  cout << "-------------------------------------------" << endl;
  cout << "Pasirinkite data:" << endl;


  for (int i = 0; i < data.size(); ++i) {
    cout << (i + 1) << "." << data.at(i) << endl;
  }
  int d;
  cin >> d;
  cout << "Pasirinkta data: " << data[d - 1] << endl;

  cout << "-------------------------------------------" << endl;

  cout << "Pasirinkite viesbuti:" << endl;


  for (int i = 0; i < viesbutis.size(); ++i) {
    cout << (i + 1) << "." << viesbutis.at(i) << endl;
  }
  int v;
  cin >> v;
  cout << "Pasirinkta data: " << viesbutis[v - 1] << endl;

  cout << "-------------------------------------------" << endl;


  cout << "Kiek dienu norite apsistoti?" << endl;

  int dienSk;
  cin >> dienSk;

  cout << "Kiek asmenu keliaujate?" << endl;
  cout << "-------------------------------------------" << endl;
  int asmenSK;
  cin >> asmenSK;




  vector<Transportas> transportai{
      Transportas("Lektuvas", 40, 10),
      Transportas("Autobusas", 30, 2)
  };
  cout << "Pasirinkite transporta:" << endl;


  for (int i = 0; i < transportai.size(); ++i) {
    cout << (i + 1) << "." << transportai.at(i).GetPavadinimas() << endl;
  }
  int tran;
  cin >> tran;
  cout << "Pasirinkta transporto priemone: " << transportai[tran - 1].GetPavadinimas() << endl;

  cout << "Kokia klase keliausite?" << endl;
  cout << "1. Verslo." << endl;
  cout << "2. Ekonomine." << endl;

  int kokiaTrasnporto;
  cin >> kokiaTrasnporto;



  int verslo = 0;
  int ekonomine = 0;

  if (kokiaTrasnporto == 1) {
    verslo *= asmenSK;

    Bilietas bilietas;

    bilietas.SpausdintiBilieta(Kelione(
        kurortai[kurortas - 1],
        data[d - 1],
        viesbutis[v - 1],
        transportai[tran-1],
        asmenSK,
        dienSk
    ), Klientas(vardas, pavarde, amzius));


  } else {
    Bilietas bilietas;

    bilietas.SpausdintiBilieta(Kelione(
        kurortai[kurortas - 1],
        data[d - 1],
        viesbutis[v - 1],
        transportai[tran-1],
        asmenSK,
        dienSk
    ), Klientas(vardas, pavarde, amzius));
    ekonomine *= asmenSK;
  }


}


long Klientas::GetId() const {
  return id;
}

const string &Klientas::GetVardas() const {
  return vardas;
}

const string &Klientas::GetPavarde() const {
  return pavarde;
}

int Klientas::GetAmzius() const {
  return amzius;
}

double Klientas::GetBiudzetas() const {
  return biudzetas;
}

void Klientas::SetBiudzetas(double biudzetas) {
  Klientas::biudzetas = biudzetas;
}

void Klientas::SetVardas(const string &vardas) {
  Klientas::vardas = vardas;
}
