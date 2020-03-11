//
//  main.cpp
//  Division
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin>>a>>b;
    
    cout<< a <<" / " << b <<" = "<<setprecision(2)<<fixed<<a*1.0/b;
    return 0;
}
