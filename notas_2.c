#include <stdio.h>
int main(){

    float n1, n2, n3, media, freq;
    printf("Digite As 3 notas: \t");
    scanf( "%f %f %f", &n1, &n2, &n3);
    printf("Digite a frequencia entre 0 - 100: \t");
    scanf("%f", &freq);
    media = (n1 + n2 + n3)/3;

    if(media > 8 && freq >= 75){
    printf("O estudante foi aprovado com distinção, pois teve nota %.1f e frequencia %.0f", media, freq);
    }
    else if(media >= 6 && freq >=75){
    printf("O estudante foi aprovado direto, pois teve nota %.1f e frequencia %.0f ", media, freq);
    }
    else if(media >= 4 && freq >= 75 || media >= 6 && freq < 75 || media >= 4 && freq > 50 && freq < 75 ){
    printf("O estudante vai pra final, pois teve nota %.1f e frequencia %.0f ", media, freq);
    }
    else{
    printf("O estudante foi Reprovado, pois teve nota %.1f e frequencia %.0f ", media, freq);
    }
return 0;
}

