#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadesXerox;
    float xeroxMenos100 = 0.25, xeroxAcima100 = 0.20;
    float semDesconto, comDesconto;

printf("QUANTIDADES DE XEROX :");
scanf("%d", &quantidadesXerox);


semDesconto = quantidadesXerox * xeroxMenos100;
comDesconto = quantidadesXerox * xeroxAcima100;


if(quantidadesXerox < 100){
    printf("VALOR TOTAL SEM DESCONTO : %.2f R$",semDesconto);

} else {
    printf("VALOR TOTAL COM DESCONTO : %.2f R$", comDesconto);
}

return 0;

}
