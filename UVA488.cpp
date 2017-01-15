//It is 0.00s version in UVA 
#include <iostream>
#include <string>
using namespace std;
int main(){
	string str[]={"1","22","333","4444","55555","666666",
					"7777777","88888888",
					"999999999"};
	string answer("");
	string temp("");
	int i,k,m,howmanycase,amplitude,frequrntly;
	

	cin >> howmanycase ;

	for(i=0;i<howmanycase;i++){
		cin >> amplitude;
		cin >> frequrntly;
		temp = "";
		if(frequrntly>0){
			//First Round is for cache
			for (k = 0; k < amplitude; ++k)
			{
				answer += str[k]+"\n";
				temp += str[k]+"\n";

			}
			k-=2;
			for (; k >= 0; --k)
			{
				answer += str[k]+"\n";
				temp += str[k]+"\n";
			}

			answer+="\n";
			temp+="\n";
			
			//After first round, everything is repeated 
			for(m=1;m<frequrntly;m++){
				answer += temp;
				
			}
		}	
	}
	//Judge last new line charaters only onece to speed up
	if( !answer.empty()  ){
		answer.back()='\0';
	}
	cout << answer;
	
	return 0;
}