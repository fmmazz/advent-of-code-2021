#include <iostream>
using namespace std;

int main() {

	int largerMeasurements = 0;
	int prevMeas, currMeas;	

	cin >> prevMeas;

	while (cin >> currMeas)
	{
   		if(currMeas > prevMeas)
			largerMeasurements++;
		
		prevMeas = currMeas;
	}

	cout << largerMeasurements << endl;

}
