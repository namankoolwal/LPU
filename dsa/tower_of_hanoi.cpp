#include<iostream>

void towers(int, char, char, char);
int main()
{
    int num;
    std::cout<<"Enter the no. of disks: ";
    std::cin>>num;
    std::cout<<"The sequence of moves involved in the tower of hanoi are :\n";
    towers(num, 'A', 'C', 'B');
    return 0;
    std::cin>>num;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if(num == 1)
    {
        std::cout<<"\n Movers disk 1 from peg "<<frompeg<<" to peg "<<topeg ;
        return;
        
    }
    towers(num-1, frompeg, auxpeg, topeg);
    std::cout<<"\n Move disk "<<num<<" from peg "<<frompeg<<" to peg "<<topeg;
    towers(num-1, auxpeg, topeg, frompeg);
}