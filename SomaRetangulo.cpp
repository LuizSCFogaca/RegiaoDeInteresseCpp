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

int retangMax(int matriz[4][4], vector<int>& memo){
    //caso base(O próprio valor)
    for(int x = 0; x < 4; x++){
        for(int y = 0;  y<4; y++){
            memo.push_back(matriz[x][y]);
        }
    }

    //primeiros pares horizontal
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 3; j++){
            int somaDupla = matriz[i][j] + matriz[i][j+1];
            memo.push_back(somaDupla);
            cout<<somaDupla<<" ";
        }
        cout<<endl;
    }
    cout<<"=============================="<<endl;
    //Segundos pares vertical
    for(int i = 0; i < 3; i++){
        for(int j =0; j < 4; j++){
            int somaDupla = matriz[i][j] + matriz[i+1][j];
            memo.push_back(somaDupla);
            cout<<somaDupla<<" ";
        }
        cout<<endl;
    }
    int maxValue = memo[0];
    for(int i = 0; i < memo.size(); i++){
        if(maxValue < memo[i])
            maxValue = memo[i];
    }

    return maxValue;
} 

int main() {
    vector<int> memo;

    int matrizTeste[4][4] = {{0, 0, 1, 0},
                        {9, 2, -6, 2},
                        {-3, 2, -4, 1},
                        {-2, 6, 0, -3}};
    showMatriz(matrizTeste);
    cout<<"=============================="<<endl;
    int max = retangMax(matrizTeste, memo);
    cout<<"=============================="<<endl<<"Max Value: "<<max<<endl;
    return 0;
}

