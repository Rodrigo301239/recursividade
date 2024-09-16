# include <stdio.h>

int tabuada (int n, int multiplicador){

    if (multiplicador > 10){
        return ;
    }
else {
    printf ("%d X %d = %d \n", n, multiplicador,( n * multiplicador));
    tabuada (n, multiplicador + 1);
}
}

int main (){
    int num;

    printf ("digite o numero: ");
    scanf ("%d",&num);

    tabuada (num, 1);
    return 0;
}