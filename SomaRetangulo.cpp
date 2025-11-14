//
//  SomaRetangulo.cpp
//  Trabalho_AnaliseAlgoritmos
//
//  Created by Nicolas Fagundes on 07/11/25.
//

#include <iostream>
#include <vector>
#include <random> // cuida do gerador de numeros
#include <iomanip> //só pra formatar output

using namespace std;

/*vector<vector<int>> criarMatriz(int linhas, int colunas, mt19937& gen, uniform_int_distribution<>& distrib) {
    
    vector<vector<int>> novaMatriz(linhas, vector<int>(colunas, -1));
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            novaMatriz[i][j] = distrib(gen);
        }
    }

    return novaMatriz;
}
*/

/*void printaMatriz(const vector<vector<int>>& matriz) {
//lembrete: Posiçoes Começam no 0
    
    for (const auto& linha : matriz) {
        
        for (int valor : linha) {
            
            cout << setw(4) << valor << " ";
            
        }
        cout << endl;
    }
}
*/


 /*
    random_device rd;
    mt19937 gen(rd());
    
    int min = -127;
    int max = 127;
    
    int num;
    
    uniform_int_distribution<> distrib(min, max);
    
    
    cout << "Informe a base da matriz: \nExemplo 4 -> 4x4" << endl;
    cin >> num;

    vector<vector<int>> matriz = criarMatriz(num, num, gen, distrib);
    cout << endl;
    
    printaMatriz(matriz);
    
    */



void showMatriz(int matriz[4][4]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main() {
    int matrizTeste[4][4] = {{0, 0, 1, 0},
                        {9, 2, -6, 2},
                        {-3, 2, -4, 1},
                        {-2, 6, 0, -3}};
    showMatriz(matrizTeste);

    return 0;
}

