#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<vector<int>> tabuleiro(8,vector<int>(8));

    int x, y;
    int cont = 0;

    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){

            tabuleiro[i][j] = 24;

        }
    }

    tabuleiro[0][0] = 21;
    tabuleiro[0][7] = 21;
    tabuleiro[7][0] = 21;
    tabuleiro[7][7] = 21;

    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){

            cout << tabuleiro[i][j] << " ";

        }

        cout << endl;
    }

    cout << endl;

    //while(){

        int min = INT_MAX;

        for(int i = 0; i<8; i++){
            for(int j=0; j<8; j++){

                if(tabuleiro[i][j] < min){
                    min = tabuleiro[i][j];
                    x = i;
                    y = j;
                }
            }
        }

        for(int i = 0; i<8; i++){
            for(int j=0; j<8; j++){

                if(tabuleiro[i][j] == min){
                    cont++;
                }
            }
        }

        for(int i = 0; i<8; i++){
            tabuleiro[x][i] = 99;
        }
        for(int i = 0; i<8; i++){
            tabuleiro[i][y] = 99;
        }
        for(int i = 0; i<8; i++){
            tabuleiro[x+i][i] = 99;
        }
        for(int i = 0; i<8; i++){
            tabuleiro[i][y+i] = 99;
        }

        for(int i = 0; i<8; i++){
            for(int j=0; j<8; j++){

                cout << tabuleiro[i][j] << " ";

            }

            cout << endl;
        }

        cout << endl;


        for(int i = 0; i<8; i++){
            for(int j=0; j<8; j++){

                if(tabuleiro[i][j] != 99){

                    int auxcont = 0;
                    for(int k = 0; k<8; k++){
                        if(tabuleiro[i][k] != 99){
                            auxcont++;
                        }
                    }
                    for(int k = 0; k<8; k++){
                        if(tabuleiro[k][j] != 99){
                            auxcont++;
                        }
                    }
                    int k = 0;
                    int flag = 0;
                    while(flag < 4){
                        flag = 0;
                        k++;
                        if(i-k >= 0 && j-k >=0){
                            if(tabuleiro[i-k][j-k] != 99){
                                auxcont++;
                            }
                        } else {
                            flag++;
                        }
                        if(i+k < 8 && j-k >=0){
                            if(tabuleiro[i+k][j-k] != 99){
                                auxcont++;
                            }
                        }  else {
                            flag++;
                        }
                        if(j-k >= 0 && i+k <8){
                            if(tabuleiro[i+k][j-k] != 99){
                                auxcont++;
                            }
                        }  else {
                            flag++;
                        }
                        if(j+k < 8 && i+k <8){
                            if(tabuleiro[i+k][j+k] != 99){
                                auxcont++;
                            }
                        }  else {
                            flag++;
                        }
                    }
    
    
                    tabuleiro[i][j] = auxcont;
                }
                
            }
        }


    //}

    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){

            cout << tabuleiro[i][j] << " ";
            
        }

        cout << endl;
    }



    return 0;

}