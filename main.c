#include <stdio.h>

int main() {
    /* TIPOS DE DADOS */
// Inteiro = int %d
// Real = float %f
// Real = double %lf
// Caractere = char %c
// Palavra = string %s

// <tipo> <nome da variável>;
// <tipo> <nome da variável> + <valor inicial>;

    char nome[12];
    float nota1, nota2, nota3, media;

    scanf("%s", nome);
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Digite seu nome: %s\n", nome);
    printf("Digite a primeira nota: %.1f\n", nota1);
    printf("Digite a segunda nota: %.1f\n", nota2);
    printf("Digite a terceira nota: %.1f\n", nota3);
    printf("Sua média é: %.1f\n", media);
    
    if (media >= 5.0) {

        printf("Situação: Aprovado\n");
        
    } else {

        printf("Situação: Reprovado\n");
            
    }
    return(0);

}