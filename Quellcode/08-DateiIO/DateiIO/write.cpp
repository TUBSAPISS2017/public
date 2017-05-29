#include <fstream>
using namespace std;

int main () {
  ofstream dateiObjekt; //Anlegen einer Instanz der Klasse ofstream
  // ofstream steht fuer output file stream
  dateiObjekt.open ("beispiel.txt");
  dateiObjekt << "API2017";
  dateiObjekt.close();
  return 0;
}