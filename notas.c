#include <stdio.h>
int main(){

    float n1, n2, n3, media;
    printf("Digite As 3 notas: \t");
    scanf( "%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;

    if(media >= 8){
    printf("Aprovado Com Distinção. ");
    }
    else if(media >= 6){
    printf("Aprovado direto. ");
    }
    else if(media >= 4){
    printf("Vai pra final. ");
    }
    else{
    printf("Reprovado. ");
    }
    printf("%f", media);
return 0;
}
