//
//  main.cpp
//  CalculatingExpressionValue
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    cin>>a>>b;
    
    cout<<setprecision(2)<<fixed<<sqrt(a*a+b*b+2*sqrt(a*b));
    
    return 0;
}
