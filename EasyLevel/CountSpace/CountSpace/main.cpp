//
//  main.cpp
//  CountSpace
//
//  Created by Huy Ly on 3/12/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string s;;
    getline(cin,s);
    
    int result=0;
    
    for(int i=0;i<s.length();i++)   result+=(s[i]==32);
    
    cout<<result;
    
    return 0;
}
