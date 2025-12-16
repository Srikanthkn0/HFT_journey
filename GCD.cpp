#include <iostream>
#include <string>

int main(){
    std::string str,str1,str3;
    std::cout<<"Enter the first string: ";
    std::cin>>str;
    std::cout<<"Enter the second string: ";
    std::cin>>str1;
    str3=str1+str;
    std::cout<<"The concatenated string is: "<<str3<<std::endl;
    std::cout<<str3.length()<<std::endl;
    std::cout<<str3.size()<<std::endl;
    std::cout<<str3[3]<<std::endl;
    return 0;
}