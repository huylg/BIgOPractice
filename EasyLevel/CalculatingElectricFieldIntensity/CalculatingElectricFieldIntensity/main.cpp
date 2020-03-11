//
//  main.cpp
//  CalculatingElectricFieldIntensity
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int u,r;
    cin>>u>>r;
    
    cout<<setprecision(2)<<fixed<<u*1.0/r;
    
    
    return 0;
}
