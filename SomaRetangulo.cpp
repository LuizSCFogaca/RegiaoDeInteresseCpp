//
//  SomaRetangulo.cpp
//  Trabalho_AnaliseAlgoritmos
//
//  Created by Nicolas Fagundes on 07/11/25.
//

#include <iostream>
#include <vector>


using namespace std;

void showMatriz(int matriz[4][4]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j < 4; j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
}

int retangMax(int matriz[][], vector<int>& memo, int N){
    memo.push_back(matriz[0][0]);
    for(int linhaT = 0; linhaT < N; linhaT++){
        for(int colunaE = 0; colunaE < N; colunaE++){
            int retAtual= matriz[linhaT][colunaE];
            memo.push_back(retAtual);
            bool aumentou = true;
            while(aumentou){
                aumentou = false;

                if()
            }
        }    
    }
} 

int main() {
    vector<int> memo;

    int matrizTeste[4][4] = {{0, 0, 1, 0},
                        {9, 2, -6, 2},
                        {-3, 2, -4, 1},
                        {-2, 6, 0, -3}};
    showMatriz(matrizTeste);
    cout<<"=============================="<<endl;
    int max = retangMax(matrizTeste, memo, 4);
    cout<<"=============================="<<endl<<"Max Value: "<<max<<endl;
    return 0;
}

