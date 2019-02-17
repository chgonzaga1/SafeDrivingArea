#include<iostream>
using namespace std;
void display();
int getNumAccidents(string regionName);
void findLowest(int num1, int num2, int num3,int num4);

int main()
{
    int ne,se,nw,sw;
    
    display();
    ne = getNumAccidents("Northeast");
    se = getNumAccidents("Southeast");
    nw = getNumAccidents("Northwest");
    sw = getNumAccidents("Southwest");

    cout<<"The number of accidents from Northeast was "<<ne<<endl;
    cout<<"The number of accidents from Southeast was "<<se<<endl;
    cout<<"The number of accidents from Northwest was "<<nw<<endl;
    cout<<"The number of accidents from Southwest was "<<sw<<endl;
    
    findLowest(ne,se,nw,sw);

    return 0;

}

void display(){
cout<<"Hello, this program is aobut finding the Safest Driving Area"<<endl;
}

int getNumAccidents(string regionName){

int numOfAcc;
cout<<"Hello, What was the number of occured at this: "<<regionName<<" region" << endl;
cin>>numOfAcc;

while(numOfAcc<0){

    cout<<"Sorry!, it must be zero or more than the number of accidents occur, please enter the right amount "<<endl;
    cin>>numOfAcc;

}

    return numOfAcc;
}


void findLowest(int num1, int num2, int num3,int num4)
{

int lowestNum;
string lowestRegion;

lowestNum = num1; 
lowestRegion = "Northeast";

if(num2<lowestNum)
{
    lowestNum=num2;
    lowestRegion ="Southeast";
}
if(num3<lowestNum){
    lowestNum = num3;
    lowestRegion ="Northwest";
}
if(num4<lowestNum){
    lowestNum = num4;
    lowestRegion ="Southwest";
}
cout<<endl;

cout<<"Therefore, the lowest accidents occured at "<<lowestNum<<" and it occured at "<<lowestRegion<<" region. " << endl;

}
