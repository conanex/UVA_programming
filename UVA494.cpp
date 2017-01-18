#include <iostream>
using namespace std;
int isletter(char in);
int main(){
	int n=0,firstmeet=0;
	char input='X';
	
	while(cin.get(input)){
		n=0;
		while(input!='\n'){
			///////////////check letter start//////////
			firstmeet=0;
			while(isletter(input)){
				firstmeet=1;
				if(!cin.get(input)){
					cout << n+1 <<endl;
					return 1;
				}	
			}
			if(firstmeet) n++;
			///////////////check letter end//////////
			
			while(!isletter(input)){
				if(input=='\n'){
					
					break;
				}

				if(!cin.get(input)){
					cout << n <<endl;
					return 1;
				}	
			}
		}
		cout << n <<endl;
	}

	return 0;
}
int isletter(char in){
	int X= in-'a';
	int Y= in-'A';
	if(X >=0 && X<26) return 1;  
	if(Y >=0 && Y<26) return 1;
	return 0;
}