#include <stdio.h>

int main(){

    int anoV;

    int bi (int ano){
    if(ano % 4 == 0 &&(ano % 100 != 0 || ano % 400 == 0)){
        printf("O ano %d é bissexto", ano);
        }
    else{
        printf("O ano %d não é bissexto", ano);
        }
    }

    printf("Insira um ano que deseja verificar: ");
    scanf("%d",&anoV);
    bi(anoV);

return 0;
}
