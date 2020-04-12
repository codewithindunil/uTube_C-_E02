#include <iostream>

using namespace std;

int main()
{


    float am,em,finalMark;
    cout<<"enter your assignment mark : ";
    cin>>am;
    cout<<"enter your examiniation mark : ";
    cin>>em;
    finalMark=(am+em)/2;

    if(finalMark>75){
        cout<<"you have A pass";

    }
    else if(finalMark>65){
        cout<<"you have B pass";
    }
    else if(finalMark>55){
        cout<<"you have C pass";
    }
    else{
        cout<<"you are fail";
    }

    return 0;
}
