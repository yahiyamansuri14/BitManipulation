#include <iostream>
using namespace std;

int turnOnIthBit(int n, int i){
    int temp=(1<<i);
    if(temp==0)
        return temp;
    else
        return n|temp;
}
int main() {
	int n, i;
	cin >> n >> i;
	cout<< turnOnIthBit(n, i) <<endl;
	return 0;
}
