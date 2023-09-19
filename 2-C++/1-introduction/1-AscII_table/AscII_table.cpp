// Create a table for AscII code

#include<iostream>
#include <iomanip>

int main(void)
{
    char letter = ' ';
    std::cout<<"AscII Code Table: "<<std::endl;
    std::cout<<"+--------+-------+"<<std::endl;
    std::cout<<"|  char  | ASCII |"<<std::endl;
    std::cout<<"+--------+-------+"<<std::endl;

    for(int i = 0 ; i < 128 ; i ++)
    if(i<=32)
        std::cout<<"|  "<<std::setfill(' ') << std::setw(3)<<letter<<"  |  "<<std::setfill(' ') << std::setw(3)<<i<<"   |"<<std::endl;
    else if (i < 127)
        std::cout<<"|  "<<std::setfill(' ') << std::setw(3)<<char(i)<<"  |  "<<std::setfill(' ') << std::setw(3)<<i<<"   |"<<std::endl;
    else
        std::cout<<"|  "<<std::setfill(' ') << std::setw(3)<<"End"<<"  |  "<<std::setfill(' ') << std::setw(3)<<i<<"   |"<<std::endl;

std::cout<<"+--------+-------+"<<std::endl;
return 0;
}