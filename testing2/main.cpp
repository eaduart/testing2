//
//  main.cpp
//  testing2
//
//  Created by eaduart on 3/2/14.
//  Copyright (c) 2014 eaduart. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
	int t;
    cin >> t;
    
    cout << t << " ";
    if (100 < t)
		cout << "too hot"<< endl;
	else if (30 > t)
		cout << "too cold"<< endl;
	
else
		cout << "just right."<< endl;
}