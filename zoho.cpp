#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char word[1000], i,j,k;
	cin>>word;
	int lgt = strlen(word);
	int ind = lgt/2;
	int max = lgt+ind;
	int temp = lgt;
	for(i=ind;i<max;i++){
		for(k=temp;k>1;k--){
				cout<<" ";   //to print spaces
			}
		for(j=ind;j<=i;j++){
			
			cout<<word[j%lgt];   // to print the characters 
			
		}
		temp--;
		cout<<endl;
	}
	
	
	return 0;
}
