//
//  main.cpp
//  CalculateBMI
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    // insert code here...
    float height;
    float weight;
    std::cin>>height>>weight;
    float result = (weight/(height*height));
    std::cout<<std::setprecision(2)<<std::fixed<<result;
    
    return 0;
}
