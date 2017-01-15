#include <iostream>
#include <string>
using namespace std;
int main(){
	string str[]={"1","22","333","4444","55555","666666",
					"7777777","88888888",
					"999999999"};
	string answer("");
	int i,k,howmanycase,amplitude,frequrntly;
	
	cin >> howmanycase ;

	for(i=0;i<howmanycase;i++){
		//cin.get();
		cin >> amplitude;
		cin >> frequrntly;
		for(int m=0;m<frequrntly;m++){
			for (k = 0; k < amplitude; ++k)
			{
				answer += str[k]+"\n";
				//cout << str[k] << endl;
				/*for (j = 0; j < k+1; ++j)
				{
					cout << k+1;
				}
				cout << endl;*/
			}
			k-=2;
			for (; k >= 0; --k)
			{
				answer += str[k]+"\n";
				//cout << str[k] << endl;
				/*for (j = 0; j < k+1; ++j)
				{
					cout << k+1;
				}
				cout << endl;*/
			}
			if( (i != (howmanycase-1)) || (m!=frequrntly-1) ) answer+="\n";
		}
	}
	cout << answer;
	
	return 0;
}