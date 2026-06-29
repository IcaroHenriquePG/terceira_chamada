// 2. (2 pontos) Dada uma matriz 10×10 de inteiros faça um programa em C que imprima
// a diagonal principal e a diagonal secundária

int main(){
    int matriz[10][10];

    for (int i = 0; i < matriz; i++){
        for (int j = 0; j < matriz; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

 for (int i = 0; i < matriz; i++){
        for (int j = 0; j < matriz; j++)
        {
            if (i == j)
            {
                printf("Matriz Diagonal Principal");
            }
            
        }
    printf("\n");

    }

    for (int i = 0; i < matriz; i++) {
        for (int j = 0; j < matriz; i++)
        {
            printf("%d", matriz[i][j]);
        } 
   printf("\n");

    }    


    return 0;
}

