//
//  main.cpp
//  BigO
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int moneyUnit[] = {500,200,100,50,20,10};
    int n;
    cin>>n;
    for(int i=0;i<6;i++){
        int temp = n/moneyUnit[i];
        if(temp) cout<<moneyUnit[i]<<" "<<temp<<endl;
        n%=moneyUnit[i];
    }
    return 0;
}
