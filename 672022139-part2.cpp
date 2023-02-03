#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j, a, n, tampung,k;
while (1){
 		puts ("Tugas Quiz ASD");
 		puts ("1. Level 1");
		puts ("2. Level 2");
 		puts ("3. Level 3");
        puts ("4. Exit");
 		printf ("Pilih menu : ");
        scanf ("%d", &n);
        system ("cls");

switch (n){
    case 1 :
        printf ("Masukkan Angka : ");
        scanf ("%d", &a);

        for (i=0; i<=a+1; i++){
            tampung=i;
        for (j=0; j<i; j++){
            printf ("%3d", tampung-1);
            tampung++;
        }
            printf ("\n");
        }
    //getch ();
    system ("cls");
    break;

    case 2 :
	   printf("Masukkan angka : ");
            scanf("%d", &k);
            for (int i = 1; i <= k; i++)
            {
                for (int j = i; j <= i * i; j++)
                {
                    printf("%d", j);
                    printf(" ");
                    j = j + i - 1;
                }
                printf("\n");
            }
    //getch();
    system ("cls");
    break;


case 3 :;

           int n, a=1;
            printf("Masukkan Bilangan (max 9): ");
            scanf("%d",&n);
            n = n-1;
            for(int i=1; i<=n+1; i++)
            {
              for(int j=i; j<=n; j++)
              {
                printf(" ");
              }
                 for(int k=1; k<=2*i-1; k++)
                 {
                    if(k<i) 
                     printf("%d",a++);
                     else if(k==i) 
                     printf("%d",a);
                     else 
                    printf("%d",--a);
                 }
                 printf("\n");
              }

             for(int i=n; i>=1; i--)
             {
               for(int j=n; j>=i; j--)
               {
                 printf(" ");
               }
                 for(int k=1; k<=2*i-1; k++)
                 {
                    if(k<i) 
                    printf("%d",a++);
                    else if(k==i) 
                    printf("%d",a);
                    else 
                    printf("%d",--a);
                 }
                    printf("\n");
               }
}
}
}