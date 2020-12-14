#include<stdio.h>
#include<math.h>

//This function returns the number of digits 
	int counter(int n){
		int ans=0;
  		while(n!=0){
      		ans++;
      		n/=10;
  		}
	return ans;
	}
//This function checks whether x is armstrong or not. If x is armstrong returns 1.
	int armstrong(int x){
  		int n=x;
  		int sum=0;
  		int i, power;
  		while(n!=0){
  		power = 1;
  		for(i=0; i< counter(x); i++)
  		{
  			power *= n%10;
  		}
    	sum+= power;
    	n/=10;
  		}

  	if(sum==x)
    	return 1;
  	else
    	return 0;
	}
//This function checks whether n is complete number or not. If n is complete returns 1.
	int divisor(int n){
    	int sum=0;
    	for(int i=1 ; i<n ; i++){
    		if(n%i==0)
        	    sum+=i;
    	}
     	if(sum==n)
        	return 1;
     	return 0;
}

//This function returns integer part of square root of n
	int floor_sqrt(int n){
      int i;
      for(i=1 ; i*i<=n ; i++);

        return i-1;
	}
	
  int main(){


        int n;
            scanf("%d",&n);


        if(armstrong(n)==0 && divisor(n)==0 && armstrong(floor_sqrt(n))==0 && divisor(floor_sqrt(n))==0)
          printf("FALSE");
        else
          printf("TRUE");






  return 0;
  }

