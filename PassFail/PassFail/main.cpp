//
//  main.cpp
//  PassFail
//
//  Created by Huy Ly on 3/11/20.
//  Copyright © 2020 HuyLg. All rights reserved.
//

#include <iostream>
using namespace std;

struct ExamResult{
    float score;
    bool isCheating;
};

int main(int argc, const char * argv[]) {
    float finalExamScore;
    cin >> finalExamScore;
    
    ExamResult arr[4];
    
    for(int i=0;i<4;i++){
        cin>>arr[i].score>>arr[i].isCheating;
    }
    
    float result = finalExamScore*0.6;
    
    for(int i=0;i<4;i++)    result += arr[i].score*(!arr[i].isCheating)*0.1;
    cout<<((result>=4.75)?"passed":"failed");
    return 0;
}
