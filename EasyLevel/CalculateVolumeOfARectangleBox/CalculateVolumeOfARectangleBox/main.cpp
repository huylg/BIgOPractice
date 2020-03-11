//
//  main.cpp
//  CalculateVolumeOfARectangleBox
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int result = 1;
    for(int i=0;i<3;i++)
    {
        int a;
        cin>>a;
        result*=a;
    }
    cout<<result;
    return 0;
}
