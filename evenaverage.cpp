#include <iostream>
int main() {
    int n=0;
    int i=0;
    int sum=0;
    int avg=0;
   do{     
        std::cout <<"inserire n";
        std::cin >> n;
		
        if(n%2==0&&n!=0){
            sum=sum+n;
            i=i+1;
        }	
    	else{
    		std::cout<<"ivalid n";
		}

	}while(n!=0);
    std::cout<<"risultato "; 
	avg=sum/i;
	std::cout<<avg;
return 0;


}


