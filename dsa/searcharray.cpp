#include<iostream>
#include<conio.h>


int main(){
    int arr[5]={1,2,3,4,5};
    int toS, i , flag=0;
    for(i=0;i<5;i++)
    {
        std::cout<< arr[i]<<"\t";
    }
    std::cout<<std::endl<<"enter the element to search \t";
    std::cin>>toS; 
    for(i=0;i<5;i++)
    {
        if(arr[i]==toS){
            flag=1;
        }
    }
    if(flag==1){
        std::cout<<"element found"<<std::endl;
    }
    else{
        std::cout<<"element not found"<<std::endl;
    }
    getch();
}