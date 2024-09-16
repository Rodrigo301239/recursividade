# include <stdio.h>

int fatorial (int n) {
    if (n == 0)
    {
        return 1;
    }
        else {
            return n * fatorial (n-1);
        }
    
}

int main (){
    int number,total;

    printf ("digite o numero: ");
    scanf ("%d",&number);
    total = fatorial (number);
    printf ("o valor e %d", total);

}