include<stdio.h>

#define MAX_SIZE 100
int search(int *arr, int size, int num){
	int i;
	for(i = 0; i < size ; i++){
		if(arr[i] == num){
			return 1;
		}
	}
	return 0;
}

int subset(int *arr1, int size_arr1, int *arr2, int size_arr2, int *res){
	int i;
	int result_index = 0;
	for(i=0 ; i < size_arr1; i++){
		if(search(arr2, size_arr2,arr1[i]) == 0){
			res[result_index] = arr1[i];
			result_index++;
		}
	}
	return result_index;
}

void printarr(int *arr , int size){
	int i;
	for( i=0; i<size; i++){
		printf("%d ", arr[i]);
	}
}

int main(void){
	int a[MAX_SIZE];
	int b[MAX_SIZE];
	int res[MAX_SIZE];
	int result_size;
	int sizeA;
	int sizeB;
	int i;
	
	scanf("%d %d", &sizeA, &sizeB);
	
	for( i = 0; i < sizeA; i++){
        scanf("%d", &a[i]);
    }
    
    
	for( i = 0; i < sizeB; i++){
        scanf("%d", &b[i]);
    }

	
	result_size = subset(a, sizeA, b, sizeB, res);
	
	if(result_size> 0){
		printf("A - B = ");
		printarr(res, result_size);
	}else{
		printf("A - B = {}");
	}
}



