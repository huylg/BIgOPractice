//
//  main.cpp
//  RoundGrade
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    float score;
    cin>>score;
    
    int beforePoint = (int)score;
    float afterPoint = score - beforePoint;
    
    if(afterPoint < 0.25) cout<<beforePoint<<".0";
    else if(afterPoint < 0.75) cout<<beforePoint+0.5;
    else cout<<beforePoint+1<<".0";
    
    return 0;
}
