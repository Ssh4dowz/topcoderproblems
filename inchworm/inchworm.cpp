#include "inchworm.h"

using namespace std;

int main(){
	inchworm a;
	//tests cases.
	cout<<a.lunchtime(11,2,4)<<endl;
	cout<<a.lunchtime(12,6,4)<<endl;
	cout<<a.lunchtime(20,3,7)<<endl;
	cout<<a.lunchtime(21,7,3)<<endl;
	cout<<a.lunchtime(15,16,5)<<endl;
	cout<<a.lunchtime(1000,3,7)<<endl;
}