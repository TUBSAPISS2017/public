#include <fstream>
using namespace std;

int main () {
  ofstream dateiObjekt; //Anlegen einer Instanz der Klasse ofstream
  // ofstream steht fuer output file stream
  dateiObjekt.open ("beispiel.txt", ios::app);
  dateiObjekt << "API2017\n";
  dateiObjekt.close();
  return 0;
}