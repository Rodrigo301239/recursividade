# include <stdio.h>

int teoria (int n){

return teoria(n - 1) + teoria(n - 2);

}

void teoria2 (int teste){
    for (int i = 0; i < teste; i++)
    {
        printf("%d ", teoria(i));
    }
    printf("\n");
    }
    


int main (){
    int num, total;

    printf ("teoria de fibonacci: \n");
    num = 10;
    

     printf("Sequência de Fibonacci até o %d-ésimo termo:\n", num);
    teoria2(num);
    

    return 0;
}