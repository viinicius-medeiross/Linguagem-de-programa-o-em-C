#include <stdio.h>
#include <stdlib.h>

int main()
{
int n1, n2;
printf("DIGITE O PRIMEIRO NUMERO : \n");
scanf("%d", &n1);

printf("DIGITE O SEGUNDO NUMERO : \n");
scanf("%d", &n2);

if(n1 > n2){
    printf("%d E MAIOR QUE %d", n1, n2);

} else {
    printf("%d E MAIOR QUE %d", n2, n1);
}

return 0;

}
