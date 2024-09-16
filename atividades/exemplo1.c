# include <stdio.h>

int fatorial (int n)
{
 int res = 1;

 for (int i = n; i > 1; i--){
    res *= i;
 }
    return res;

}
int main (){
    int number, total;

    printf ("digite o numero\n");
    scanf ("%d", &number);
    total = fatorial (number);
    printf ("o resultado e: %d", total);

    return 0;
}

