#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main() {
	ifstream file("danhsach.txt");
	int n;
	file >> n;
	vector<string>s(n + 1);
	int index = 0;
	while(getline(file, s[index])) {
		index++;
	}
	for (int i = 1; i <= n; ++i) {
		string oldName = "FULLPHIEU-" + to_string(i);
		oldName += ".pdf";
		string newName;
		newName += s[i];
		newName += ".pdf";
		rename((char*)oldName.c_str(), (char*)newName.c_str());
	}
	file.close();
}
