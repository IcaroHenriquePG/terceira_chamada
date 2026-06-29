// 5. (2 pontos) implemente uma função incrementa em C que incrementa adicionando
// mais um ao valor de uma variável dada como parâmetro.
// Exemplo: se x = 10, após o uso da função incrementa teremos x=11

int incrementa(int x){
    int aux = x+1;
    
   return aux;
}

#include <stdio.h>
int main(){

int x;
scanf("%d", &x);

printf("%d", incrementa(x));

    return 0;
}