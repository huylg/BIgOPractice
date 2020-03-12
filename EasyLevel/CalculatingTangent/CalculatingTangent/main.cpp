//
//  main.cpp
//  CalculatingTangent
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float tan(int angle){
    return tan(angle*3.14/180);
}

float cos(int angle){
    return cos(angle*3.14/180);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    cin>>a;
    
    std::cout << setprecision(4)<<fixed<<cos(a);
    return 0;
}
