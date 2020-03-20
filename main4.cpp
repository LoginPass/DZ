#include<iostream>
#include<math.h>

int o;
float f,p,b,o1;


int main(){

    std::cout<<" "<<std::endl;


    std::cout<<"Viberete Nachalnyu velichinu "<<std::endl;


    std::cout<<"Pascal-1"<<std::endl;
    std::cout<<"bar-2"<<std::endl;
    std::cout<<"Funt-3"<<std::endl;

    std::cin>>o;


    std::cout<<"Vveditete chislo "<<std::endl;
    std::cin>>o1;

      if(o==1){

        p=o1;
        b=o1/100000;
        f=o1*0.000145;


      }

      if(o==2){

        p=o1*100000;
        b=o1;
        f=o1/0.068948;


      }

      if(o==3){

        p=o1/0.000145;
        b=o1*0.068948;
        f=o1;


      }





    std::cout<<"Pascal:"<<p<<std::endl;


    std::cout<<"bar:"<<b<<std::endl;


    std::cout<<"Funt:"<<f<<std::endl;









}
