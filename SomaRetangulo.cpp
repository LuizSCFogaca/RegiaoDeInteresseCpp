//
//  SomaRetangulo.cpp
//  Trabalho_AnaliseAlgoritmos
//
//  Created by Nicolas Fagundes on 07/11/25.
//

#include <iostream>
#include <vector>
#include <chrono>
#include <random> // cuida do gerador de numeros
#include <iomanip> //só pra formatar output

using namespace std;

vector<vector<int>> criarMatriz(int linhas, int colunas, mt19937& gen, uniform_int_distribution<>& distrib) {
    
    vector<vector<int>> novaMatriz(linhas, vector<int>(colunas, -1));
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            novaMatriz[i][j] = distrib(gen);
        }
    }

    return novaMatriz;
}

void showMatriz(vector<vector<int>> matriz, int N){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
}

int retangMax(const vector<vector<int>>& matriz, vector<int>& memo, int N){
    int maxAtual = INT_MIN;
    for(int linhaT = 0; linhaT < N; linhaT++){
        for(int colunaE = 0; colunaE < N; colunaE++){
            for(int linhaB = linhaT; linhaB < N; linhaB++){
                for(int colunaD = colunaE; colunaD < N; colunaD++){
                    int soma = 0;
                    for(int i = linhaT; i <= linhaB; i++){
                        for(int j = colunaE; j <= colunaD; j++){
                            soma += matriz[i][j];
                        }
                    }
                    memo.push_back(soma);
                    if(soma > maxAtual){
                        maxAtual = soma;
                    }
                }     
            }
        }    
    }
    return maxAtual;
} 

int main() {
    auto start = chrono::steady_clock::now();
    random_device rd;
    mt19937 gen(rd());

    int minimo = -127;
    int maximo = 127;
    uniform_int_distribution<> distrib(minimo, maximo);

    int num;
    vector<int> memo;
    cout << "Informe a base da matriz (ex: 4 -> matriz 4x4): ";
    cin >> num;

    vector<vector<int>> matriz = criarMatriz(num, num, gen, distrib);

    showMatriz(matriz, num);

    int maxRet = retangMax(matriz, memo, num);

    cout << "==============================\n"
         << "Max Value: " << maxRet << endl;

    auto end = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Tempo de execucao: " << duration.count() << " ms" << endl;

    chrono::duration<double> elapsed = end - start;
    cout << "Tempo de execucao: " << elapsed.count() << " s" << endl;
    return 0;
}

