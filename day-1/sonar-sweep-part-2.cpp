#include <iostream>
using namespace std;

int main() {

	int largerMeasurements = 0;
	int a,b,c,currMeas;	
	int sumABC = 0, currSum = 0;

	cin >> a >> b >> c;		

	while (cin >> currMeas)
	{
		sumABC = a + b + c;
		currSum = b + c + currMeas;

   		if(currSum > sumABC)
			largerMeasurements++;
		
		a = b;
		b = c;
		c = currMeas;
	}

	cout << largerMeasurements << endl;

}
