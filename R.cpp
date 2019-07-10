#include <iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    ofstream fileWritter;

    srand(89344554);
    fileWritter.open("100000.txt");

    //track start time
    clock_t starTime=clock();

    for(int i=0; i<100000; i++)
    {
        fileWritter << rand() << endl;
    }

    // track end time
    clock_t endTime=clock();
    // count the time lapse
    double timeLapse=double(endTime-starTime)/CLOCKS_PER_SEC;

    cout << timeLapse<< endl;

    fileWritter.close();

    return 0;
}

