#include <iostream>
#include <cstdio>
int main() {
	int num;
	//long n,k;
	int n,k;
	//std::cin >> num;
	scanf("%d",&num);
	for (int i=0; i <num; i++) {
	     scanf("%d",&n);
	     scanf("%d",&k);
	     //std::cin >> n >> k;
	     if((n%(k+1))==0){
	         //std::cout<<"Dishant"<<"\n";
	         printf("Dishant\n");
	     }
	     else{
	         //std::cout<<"Arpa"<<"\n";
	         printf("Arpa\n");
	     }
	 }
return(0);
}
