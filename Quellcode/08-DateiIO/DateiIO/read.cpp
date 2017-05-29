#include <string>
#include <iostream>
#include <fstream>

using namespace std;
// ...
int main () {
  string line;
  ifstream dateiObjekt ("beispiel.txt"); 
  if (dateiObjekt.is_open())
  {
    while ( getline (dateiObjekt,line) )// Zeile auslesen
    {
      cout << line << '\n';
    }
    dateiObjekt.close();
  }
  else {
	  
	  cout << "Datei kann nichtt geoeffnet werden!";
  }
  
  cin.getline(NULL, 0); // Verhindert Schliessen der Konsole
  
  return 0;
}