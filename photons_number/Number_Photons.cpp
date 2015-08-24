#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

double j_0(double norm, double S, double t){
	return norm*S*t;
}

double beta(double alpha){
	return -1*alpha + 1;
}

double number_photons(double j_0, double E_max, double E_min, double beta){
	return j_0*((pow(E_max, beta) - pow(E_min, beta))/beta);
	//return ((pow(E_max, beta) - pow(E_min, beta))/beta);
}


int main(int argc, char const *argv[]){

   	string program_name = argv[0];
   	double alpha = atof(argv[1]); // spectral index
   	double norm = atof(argv[2]);  // Normalization constant
   	double E_min = atof(argv[3]); // Minimun energy
   	double E_max = atof(argv[4]); // Maximun energy
   	double t = atof(argv[5]);     // Time	
	double S = atof(argv[6]);     // Area	

double norma = j_0(norm, S, t);
//cout << norma << endl;
double indice = beta(alpha);
//cout << indice << endl;
double number = number_photons(norma, E_max, E_min, indice); 
cout << "Number of photons ="<<" "<< number << endl; 
return 0;
}
