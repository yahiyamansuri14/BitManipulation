#include <iostream>
using namespace std;
int turnOffIthBit(int n, int i){
    int temp=1<<i;
    return n&(~temp);
        
}
int main() {
	int n, i;
	cin >> n >> i;
	cout<< turnOffIthBit(n, i) <<endl;
	return 0;
}
