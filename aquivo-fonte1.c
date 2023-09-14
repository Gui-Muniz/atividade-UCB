#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int abc;
    printf("Digite um numero abc de 3 algarismos: \n");
    scanf("%i", &abc);

    if (abc >= 100) { 
        int c = abc % 10;
        int b = (abc / 10) % 10;
        int a = abc / 100;
        
        int cba = 100 * c + 10 * b + a;
        int xyz = cba;
        int zyx = (cba % 10) * 100 + ((cba / 10) % 10) * 10 + cba / 100;
        
        int resultado = xyz + zyx;
        printf("Resultado: %d\n", resultado);
    }

    return 0;
}

