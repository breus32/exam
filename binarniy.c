#include <stdio.h>

int main()

{

     int mas[200], v, i, j,m;

     for (i = 0;i < 100; i++){
     	mas[i] = i + 1;
     	printf("\nmas[%d] = %d", i, mas[i]);
     }
     
     printf("\nVvedite element dlya poiska: ");
     scanf("%d",&v);

     i=0;   j=100;   m=50;

     while (mas[m] != v)
    {

        if (mas[m] < v)  
		    i+=m;
        else j = m-i;
            m=(i+j)/2;

    }

    printf("\nElement%d possition %d",v,m);
    
	return 0; 
}
