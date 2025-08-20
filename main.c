// Standard
#include <stdio.h>
int main()
{
    int a,b,sum,sub,multi,modulus;
    float divition;
    printf ("Enter two integer: ");
    scanf ("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    divition=(float)a/b;
    modulus=a%b;
    printf ("Results:\n");
    printf("The sum is: %d\n",sum);
    printf("The subtraction is: %d\n",sub);
    printf("The multiplication is: %d\n",multi);
    printf("The division is: %.2f\n",divition);
    printf("The modulus is: %d\n",modulus);
    return 0;
}
// for infinity calculation
#include <stdio.h>
int main()
{
    int i,a,b,sum,sub,multi,modulus;
    float divition;
    for (i=0; ; i++)
    {
        printf ("----------Calculate Arithmetic Operations----------\n\n");
        printf ("Enter two integer: ");
        scanf ("%d %d",&a,&b);
        sum=a+b;
        sub=a-b;
        multi=a*b;
        divition=(float)a/b;
        modulus=a%b;
        printf ("Results:\n");
        printf("The sum is: %d\n",sum);
        printf("The subtraction is: %d\n",sub);
        printf("The multiplication is: %d\n",multi);
        printf("The division is: %.2f\n",divition);
        printf("The modulus is: %d\n",modulus);
        printf ("\n\n");
    }
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Calculation.txt","w");
    file2 = fopen ("Calculation.txt","r");
    int a,b,sum,sub,multi,modulus;
    float divition;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist\n");
    else
    {
        printf ("Enter two integer: ");
        scanf ("%d %d",&a,&b);
        sum=a+b;
        sub=a-b;
        multi=a*b;
        divition=(float)a/b;
        modulus=a%b;
        fprintf (file1,"Results:\nThe sum is: %d\nThe subtraction is: %d\nThe multiplication is: %d\nThe division is: %.2f\nThe modulus is: %d\n",sum,sub,multi,divition,modulus);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist\n");
    else
    {
        while (!feof(file2))
        {
            ch = fgetc(file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
// Function
#include <stdio.h>
int sum (int a, int b)
{
    return a+b;
}
int sub (int a, int b)
{
    return a-b;
}
int multi (int a, int b)
{
    return a*b;
}
float divi (int a, int b)
{
    return (float)a/b;
}
int mod (int a, int b)
{
    return a%b;
}
int main()
{
    int a,b;
    printf ("Enter two integer: ");
    scanf ("%d %d",&a,&b);
    printf("The sum is: %d\n",sum(a,b));
    printf("The subtraction is: %d\n",sub(a,b));
    printf("The multiplication is: %d\n",multi(a,b));
    printf("The division is: %.2f\n",divi(a,b));
    printf("The modulus is: %d\n",mod(a,b));
}
