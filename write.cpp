#include <stdio.h>
#include <vector>
#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;



void printV(std::vector<float> x)
{
    for(int i=0;i<x.size();i++)
        printf("%4.2f",x[i]);

printf("\n");
}

int main( void ) {

 


    MatrixXd M(4,2);
    M <<1.2,2,3.4,4.55,5,6,7,8;
    std::cout<< M<<std::endl;

}
