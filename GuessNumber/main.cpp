//
//  main.cpp
//  GuessNumber
//
//  Created by Zheng on 11/24/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//

#include <iostream>
#include <random>
using namespace std;

random_device rd("/dev/random");

int advise(int max,int min)
{
    int advp=(max+min)/2;
    if(advp%1!=0)
    {
        advp+=(rd()%2==0?1:-1);
    }
    return advp;
}

int main(int argc, const char * argv[]) {
    int max,min;
    cin>>max>>min;
    char cond=0;
    cout<<"猜数字器,如果大了请输入b,小了请输入s,对了请输入c"<<endl;
    do
    {
        int adv=advise(max,min);
        cout<<"建议数字:"<<adv<<endl;
        cin>>cond;
        if(cond=='b')
        {
            max=adv;
        }
        else if(cond=='s')
        {
            min=adv;
        }
    }
    while(cond!='c');
    return 0;
}
