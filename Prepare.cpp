//
// Created by dell on 2020/3/17.
//
#include <iostream>
#include "Prepare.h"
using namespace std;
void draw_map()
{
    cout<<"1"<<"|"<<"2"<<"|"<<"3"<<endl;
    cout<<"------"<<endl;
    cout<<"4"<<"|"<<"5"<<"|"<<"6"<<endl;
    cout<<"------"<<endl;
    cout<<"7"<<"|"<<"8"<<"|"<<"9"<<endl;
    cout<<"\n"<<"There You Go !!!"<<endl;
}
void draw_map(vector<char>& chess)
{
    cout<<chess[1]<<"|"<<chess[2]<<"|"<<chess[3]<<endl;
    cout<<"------"<<endl;
    cout<<chess[4]<<"|"<<chess[5]<<"|"<<chess[6]<<endl;
    cout<<"------"<<endl;
    cout<<chess[7]<<"|"<<chess[8]<<"|"<<chess[9]<<endl;
}
void introduction()
{
    cout<<"Welcome to Tic-Tac-Toe"<<endl;
    cout<<"Produced by Happylinzy"<<endl;

    cout<<"|----------------------------|"<<endl;
    cout<<"|        How to Play         |"<<endl;
    cout<<"|The First to Form a Line Win|"<<endl;
    cout<<"|----------------------------|"<<endl;

    cout<<"Please Use Following Numbers to Control"<<endl;
}
void whoisfirst(char *who)
{
    cout<<"Would you like to take the first step?[y/n]"<<endl;
    cin>>who;
    while (*who != 'y' && *who != 'n')
    {
        cout<<"Please type in y or n"<<endl;
        cin>>who;
    }
}



