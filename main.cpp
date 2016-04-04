#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	int temp;
	int sumTop5=0;
	vector<int> weight;

	ifstream input("file.in",ios::in);
	input>>n;
	for(int i=0;i<n;i++){
		input>>temp;
		weight.push_back(temp);
	}
	sort(weight.begin(),weight.end());
	for(int i=0;i<5;i++){
		sumTop5+=weight.back();
		weight.pop_back();
	}
	cout<<sumTop5<<endl;
	input.close();
	return 0;
}
