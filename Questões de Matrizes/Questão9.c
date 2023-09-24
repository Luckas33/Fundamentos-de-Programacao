/*Escreva um programa que leia uma matriz A3x3 e calcule a sua inversa*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 3

float determinant(float matrix[N][N]){
    float det = 0;
    int submatrix[N][N];
    int i,j,k;
    if(N == 2){
        return (matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1]);
    }else{
        for(i=0;i<N;i++){
            int subi = 0;
            for(j=1;j<N;j++){
                int subj = 0;
                for(k=0;k<N;k++){
                    if(k == i){
                        continue;
                    }
                    submatrix[subi][subj] = matrix[j][k];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1,i) * matrix[0][i] * determinant(submatrix,N-1));
        }
    }
    return det;
}

void inverse(float matrix[N][N]){
    float det = determinant(matrix);
    if(det == 0){
        printf("A matriz nao tem inversa.\n");
        return;
    }

    float adj[N][N];
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            int subi = 0;
            int subj = 0;
            float submatrix[N-1][N-1];
            while(subi < N){
                if(subi == i){
                    subi++;
                    continue;
                }
                while(subj < N){
                    if(subj == j){
                        subj++;
                        continue;
                    }
                    submatrix[subi][subj] = matrix[subi][subj];
                    subj++;
                }
                subi++;
                subj = 0;
            }
            adj[j][i] = pow(-1,(i+j)) * determinant(submatrix);
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matrix[i][j] = adj[i][j] / det;
        }
    }
}

int main(){
    float matrix[N][N];
    int i,j;

    printf("Digite os elementos da matriz:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%f",&matrix[i][j]);
        }
    }

    inverse(matrix);

    printf("A matriz inversa eh:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%f ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}