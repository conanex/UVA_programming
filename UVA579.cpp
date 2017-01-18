#include <iostream>
#include <iomanip>
float calculate_angle(int h,int m);
using namespace std;

int main(){
	int hour,minute;
	float angle;
	while(1){
		cin >> hour;
		cin.get();
		cin >> minute;
		if(hour==0 && minute==0) return 0;
		angle=calculate_angle(hour,minute);
		cout << setiosflags(ios::fixed)<<setprecision(3)<<angle << endl;
	}
	return 0;
}
inline float calculate_angle(int h,int m){
	float angle;
	float h_an=30*h+(float)m/2; 
	float m_an=6*m;
	angle= h_an-m_an;
	if(angle<0) angle*=(-1);
	if(angle>180) return 360-angle;
	return angle;

}