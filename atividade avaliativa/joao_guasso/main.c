#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 3){
        printf("Uso:main.exe <numero 1> <numero 2>\n");
        return 1;
      }
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int maior,menor;
    float media = (float)(n1+n2)/2;
    if (n1>n2)
    {
        maior=n1;
        menor=n2;
    }else
    {
        menor=n1;
        maior=n2;
    }
    
    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d\n",maior, menor, maior-menor);
    printf("a media de: %d e %d = %.2f\n",n1,n2,media);
    printf("%d %% %d = %d",maior,menor,maior%menor);
    
}