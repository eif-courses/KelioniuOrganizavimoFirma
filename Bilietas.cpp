//
// Created by Marius on 2/22/2021.
//

#include "Bilietas.h"
void Bilietas::SpausdintiBilieta(Kelione kelione, Klientas klientas) {

  ofstream file; // ios::out
  file.open("index.html");


 file << "<!DOCTYPE html>\n";
  file << "    <html>\n";
  file << "<body>\n";

           file << "<h2>";
           file << klientas.GetVardas() << " " << klientas.GetPavarde() << "\n";
           file << "</h2>";


                 file << "<ul style=\"background-image:url('https://static3.bigstockphoto.com/5/3/2/large1500/235587322.jpg')\">\n";


                                 file << "<li>";
                                 file << "Kurortas: " << kelione.GetKurortas() << endl;
                        file << "</li>\n";
  file << "<li>";
  file << "Data " << kelione.GetData() << endl;
  file << "</li>\n";
  file << "<li>";
  file << "Asmenu sk: " << kelione.GetAsmenuSkaicius() << endl;
  file << "</li>\n";
  file << "<li>";
  file << "Dienu sk: " << kelione.GetDienuSkaicius() << endl;
  file << "</li>\n";
  file << "<li>";
  file << "Viesbutis: " << kelione.GetViesbutis() << endl;
  file << "</li>\n";
  file << "<li>";
  file << "Transportas: " << kelione.GetTransportas().GetPavadinimas() << endl;
  file << "</li>\n";
                                 file << "</ul>\n";
                                   file << "</body>\n";
                                     file <<"</html>\n";











  file << klientas.GetVardas() << "  "<< klientas.GetPavarde() << endl;
  file << "==================================================="<<endl;














  file.close();



}
