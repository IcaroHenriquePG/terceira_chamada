// 4. (2 pontos) Implemente uma função existeTriangulo em C que receba três inteiros
// positivos a,b,c informados pelo usuário e informe se eles podem formar um triângulo.
// Sua função retornará 1 se for possível ou 0 caso contrário. Condição de existência
// de um triângulo: cada lado tem que ser menor que a soma dos outros dois e maior
// que a diferença entre eles (exemplo: a+b > c > |a-b| )


int existeTriangulo(int a, int b, int c){
    if ( a+b > c && c  > a-b ||  a+c > b&&b > a-c  || c+b > a&&a > c-b  )
    {
        return 1;
    } else{
        return 0;
    }
    
}


#include <stdio.h>
int main(){
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d", existeTriangulo(a,b,c));

    return 0;
}