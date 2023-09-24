#include<iostream>
#include<cstdio>
#include<stdio.h>

int main(){

    int a[3][4]={{2,3,4},{12,13,14},{22,23,24}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            std::cout<<"\t"<<a[i][j];
            
        }
       std::cout<<"\n";
    }
}