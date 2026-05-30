#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string empresas[5] = {
        "Microsoft", "Apple", "Google", "Warner", "Disney"
    };
    
    string datos;
    int matriz2023[5][12] = {0};
    int matriz2024[5][12] = {0};
    int matriz2025[5][12] = {0};
    int total = 0;
    int emtop[5][1] = {0};
    
    ifstream datos2023("ingresos-2023.csv");
    ifstream datos2024("ingresos-2024.csv");
    ifstream datos2025("ingresos-2025.csv");
    ofstream totales("totales.txt");
    
    if (datos2023.is_open()) {
    cout << "esta funcionando" << endl;	
	}
    totales <<  "\n Cifras 2023 \n" << endl;
            for (int i = 0; i < 5; i++) {
          	  (getline(datos2023, datos));
              stringstream ss(datos);
              for (int j = 0; j < 12; j++) {
                  string notuseful;
                  getline(ss, notuseful, ',');
                  
                  matriz2023[i][j] = atoi(notuseful.c_str());
                  total = total + matriz2023[i][j];
                  if (j == 11 ) {
                  	
                  	emtop[i][1] = emtop[i][1] + total;
        
                  	totales <<  empresas[i] << ": " << total << endl;
                  	total = 0;
                
				  }
                  

                  	cout << endl;
				  }
                  }
      
      
           totales <<  "\n Cifras 2024 \n" << endl;
            for (int i = 0; i < 5; i++) {
          	  (getline(datos2024, datos));
              stringstream ss(datos);
              for (int j = 0; j < 12; j++) {
                  string notuseful;
                  getline(ss, notuseful, ',');
                  
                  matriz2024[i][j] = atoi(notuseful.c_str());
                  total = total + matriz2024[i][j];
                  if (j == 11 ) {
                  	
                    emtop[i][1] = emtop[i][1] + total;
                  	totales <<  empresas[i] << ": " << total << endl;
                  	total = 0;
                  	
				  }
                  

                  	cout << endl;
				  }
                  }
         
            totales <<  "\n Cifras 2025 \n" << endl;
            for (int i = 0; i < 5; i++) {
          	  (getline(datos2025, datos));
              stringstream ss(datos);
              for (int j = 0; j < 12; j++) {
                  string notuseful;
                  getline(ss, notuseful, ',');
                  
                  matriz2025[i][j] = atoi(notuseful.c_str());
                  total = total + matriz2025[i][j];
                  if (j == 11 ) {
                  	
                    emtop[i][1] = emtop[i][1] + total;
                  	totales <<  empresas[i] << ": " << total << endl;
                  	total = 0;
                  	
				  }
				  
				  
                  

                  	cout << endl;
				  }
			}
				  
				  totales << "\n TOTAL YEARS: \n" << endl;
				  for (int i = 0; i < 5; i++) {
				  	totales << empresas[i] << ": " << emtop[i][1] << endl;
				  }
                  
      
      
      
         
          
          
    
}
