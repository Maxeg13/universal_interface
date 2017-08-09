#include <stdio.h>
#include <vector>
#include <iostream>
#include "myReadStream.h"
using namespace std;



void printV(vector<float> x)
{
    for(int i=0;i<x.size();i++)
        printf("%4.2f   ",x[i]);

printf("\n");
}

void myReadStream(int width,vector<vector<float> >& f )
{

	vector<float> a;
	a.resize(width);
	for(int i =0;i<width;i++)
		a[i]=0;
	f.push_back(a); 

//    printV(f);
int j=0;
    while(1)
    {
        if(scanf("%f",&f[j][0])==-1)break;
		
		
        for(int i=1;i<width;i++)
            scanf("%f",&f[j][i]);

		        printV(f[j]);
			f.push_back(a); 
		

		j++;
    }
    cout<<'\n';


}
