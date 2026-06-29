// 1. (2 pontos) Faça um programa em C que leia um vetor com n inteiros, calcule a
// média (em float) e informe quantos elementos estão acima da média. O vetor deve
// ser alocado dinamicamente e desalocado.

int main(){

int n, qtd=0;
scanf("%d", &n);

float total[n];
int soma = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &total[i]);
    }
   
    for(int i = 0; i < n; i++){
        soma += total[i];
    }

    for(int i = 0; i < n; i++)
    {
        int media = soma/total[i];
        if(total[i]>media){
            printf("%d", total[i]);
        }
    }
        return 0;
    }


