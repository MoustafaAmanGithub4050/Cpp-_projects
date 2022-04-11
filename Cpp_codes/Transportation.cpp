 #include <iostream>
using namespace std;
int main(){
	int pass;
	int leave;
	int waiting;
	
	pass = 50;
	cin >> waiting;
	leave = waiting%pass;
	

	cout << pass-leave;
	return 0;
}