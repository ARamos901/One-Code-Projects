#include <iostream>
using namespace std;

void printCard() {
    const int width=11;
    const int height=9;

    for(int row=0;row<height;++row){

        if (row==0){ 
            //top
            std::cout<<"╔";
            for(int col=0;col<width-2;++col)std::cout<<"═";
            std::cout<<"╗"<<std::endl;

        }      
        else if(row==height-1){ 
            //bottom
            std::cout<<"╚";
            for (int col=0;col<width-2;++col)std::cout<<"═";
            std::cout<<"╝"<<std::endl;
        }else{
            //middle
            if(row==1){
                std::cout<<"║ A       ║"<<std::endl;
            }else if(row==4){
                std::cout<<"║    ♥    ║"<<std::endl;
            }else if(row==7){
                std::cout<<"║       A ║"<<std::endl;
            }else{
                std::cout<<"║         ║" <<std::endl;
            }
            }
            }
            }
            
