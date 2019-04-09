#include <fstream>
#include <iostream>
using namespace std;
 
double leer_datos(string filename);

int main () {
  double x = leer_datos("valores_x.txt");
  double y = leer_datos("valores_y.txt");
  cout << x << endl;
  cout << y << endl;
  return 0;
}

double leer_datos(string filename){
  ifstream infile;
  string line;
  double suma = 0;
    
  infile.open(filename); 
  getline(infile, line); 
  while(infile){
    suma += atof(line.c_str());
    getline(infile, line);
  }
  infile.close();
  return suma;
  
}
