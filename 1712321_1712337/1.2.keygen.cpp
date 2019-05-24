//
//  main.cpp
//  KeyGen1.2
//
//  Created by Đạt on 5/24/19.
//  Copyright © 2019 Đạt. All rights reserved.
//

#include <iostream>
using namespace std;

int keyGen(int id){
	return (id + 0x4C + 1 + 0x38B) * 6 - 1;
}

int main(int argc, const char * argv[]) {
	// insert code here...
	int id;
	cout << "Nhap vao Id: ";
	cin >> id;
	cout << "Serial of Id '" << id << "' la: " << keyGen(id) << endl;
	system("pause");
	return 0;
}
