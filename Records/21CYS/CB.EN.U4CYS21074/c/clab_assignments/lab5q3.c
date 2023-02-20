#include<stdio.h>
int main(){
    int i, j, Size, Duplicate = 0;
	
	printf("enter the size of array ");
    scanf("%d", &Size);
    int arr[Size];
	 for ( i = 0; i < Size; i++){
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < Size; i++){
		for(j = i + 1; j < Size; j++){
    		if(arr[i] == arr[j]){
    			Duplicate++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Duplicate);
	     
 	return 0;
}