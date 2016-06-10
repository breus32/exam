#include <stdio.h>
#include <math.h>
#include <time.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}


int main(){
	
	int mas[100];
	int i, n, kilkist = 0;
	
	printf("Enter array size: ");
	scanf("%d", &n);
	
	srand(time(NULL));
	
	if (n > 100){
		printf("Errror, vvedite 4islo menshe za 100");
	} else {
		for(i = 0; i < n; i++){
		    mas[i] = get_random_int_min_max(1, 200);
		    printf("\nmas[%d] = %d", i, mas[i]);
	    }
	    
	    for(i = 0; i < n; i++){
		    if(mas[i] < 30){
		    	kilkist = kilkist + 1;
		    }
	    }
	}
	
	printf("\nKilkist elementiv menshih za 30: %d", kilkist);
	
	return 0;
}
