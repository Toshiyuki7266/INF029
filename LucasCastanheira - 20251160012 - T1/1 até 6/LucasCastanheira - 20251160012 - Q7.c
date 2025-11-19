#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ler_string (int linha, int coluna, char matriz[50][50], char *palavra, int tam_max){
    
    int i = 0;
    int j = 0;
    int k = 0;
    int somador = 1;
    int achou = 0;
    
    printf("Insira a matriz\n");
        for (i = 0; i < linha ; i++){
            for (j = 0; j < coluna ; j++){
                scanf(" %c", &matriz[i][j]);
            }
        }
        
    getchar();
        printf("Insira a palavra a ser buscada: ");
        fgets(palavra, tam_max, stdin);
            if (palavra[strlen(palavra) - 1] == '\n')
            palavra[strlen(palavra) - 1] = '\0';

    
        for (i = 0; i < linha ; i++){
            for (j = 0; j < coluna ; j++){
                if (matriz[i][j] == palavra[k]){
                        while (matriz[i + somador][j] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i][j + somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i + somador][j + somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i - somador][j] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i][j - somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i - somador][j - somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i + somador][j - somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        while (matriz[i - somador][j + somador] == palavra[k]){
                            k++;
                            if (palavra[k] == '\0'){
                                achou = 1;
                                k = 0;
                            }
                        }
                        
                        
                }
            }
        } 
    if (achou == 1){
        printf("palavra encontrada");
    }
    
    else {
        printf("palavra nao encontrada");
    }
    
    return 1;
}

int main(){
    char matriz[50][50];
    char palavra[50];
    int linha = 0;
    int coluna = 0;
    
        printf("informe a quantidade de linhas\n");
        scanf("%d", &linha);
        
        printf("informe a quantidade de colunas\n");
        scanf("%d", &coluna);

        ler_string (linha, coluna, matriz, palavra,50);
        
    return 0;
}
