#include<iostream>
//A program to calculate BMI ( body mass index ) of the user and evaluation of their health using the information from National Institutes of Health

using namespace std;

int main() 
{
 float weight,height,BMI;
 cout<<"An application to calculate BMI of  user"<<"\n---------------------------------\n";
 cout<<"Enter your weight in Kilograms:\n";
 cin>>weight;
 cout<<"Enter your height in meters:\n";
 cin>>height;
 BMI = weight/(height*height);
 cout<<"------------------------------------"<<endl;
 cout<<"Your BMI is:\n"<<BMI<<endl;
 cout<<"Below are the BMI values to determine your category as provided by National Institute of Health"<<endl;
 cout<<"BMI values:"<<endl<<"Underweight: less than 18.5"<<endl<<"Normal: between 18.5 and 24.9"<<endl<<"Overweight: Between 25 and 29.9"<<endl<<"Obese: Greater than 30"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 return 0;
}
