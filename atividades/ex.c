#include <stdio.h>




int fibonacci (int n){
    if (n == 1 || n == 2 || n == 0)
    {
        return 1;
    }
    else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}





int main (){
    int n;
    printf ("informe o numero: ");
    scanf ("%d", &n);
    

    printf ("%d", fibonacci (n));
    




    return 0;
}
