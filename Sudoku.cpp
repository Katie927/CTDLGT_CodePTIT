#include<iostream>
#include<string>

using namespace std;

void printSolution(int s[][9]){
    for(int i = 0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl; 
    }
}

bool checkValid(int S[][9], int x, int y, int k){
    for(int i = 0; i <9 ; i++){
        if(S[x][i] == k) return false;
    }
    for(int i = 0; i <9 ; i++){
        if(S[i][y] == k) return false;
    }
    int a = x/3, b = y/3;
    for(int i = 3*a; i < 3*a+3; i++){
        for(int j = 3*b; j < 3*b+3; j++){
            if(S[i][j] == k) return false;
        }
    }
    return true;
}

void solveSudoku(int S[][9], int x, int y){
    if(y == 9){
        if(x == 8){
            printSolution(S);
            exit(0);
        } else {
            solveSudoku(S, x+1,0);
        }
    } else if(S[x][y] == 0){
        for (int k = 1; k <=9; k++){
            if(checkValid(S,x,y,k)){
                S[x][y] = k;
                solveSudoku(S, x, y+1);
                S[x][y] = 0;
            }
        }
    } else {
        solveSudoku(S,x,y+1);
    }
}

int main(){
    freopen("CTDL.inp","r",stdin);
    freopen("CTDL.out","w",stdout);

    int s[9][9];
    for(int i=0 ; i<9 ; i++){
        for(int j=0 ; j<9 ; j++){
            cin>>s[i][j];
        }
    }
    solveSudoku(s, 0, 0);
    printSolution(s);

    return 0;
}