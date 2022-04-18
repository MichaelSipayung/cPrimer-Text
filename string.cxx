#include <iostream>
#include <string>

int main(){
    std::string def ;
    def ="default"; 
    std::cout<<def<<std::endl;
    std::cout<<"read a string \t: ";
    std::string sDef="difficult";
    // std::cin>>sDef;
    // std::cout<<" print the string \t:" << sDef<<std::endl;

    // while (std::cin>>sDef)
    // {
    //     std::cout<<" input what ? " << sDef<<std::endl;
    //     if (sDef=="stop")
    //     {
    //         break;
    //     }
        
    // }

    // std::cout<<"Using getline function"<<std::endl;
    // while (getline(std::cin,sDef))
    // {
    //     std::cout<< sDef;
    // }
    
    // while (getline(std::cin,sDef))
    // {
    //     if (sDef.size()>1){
    //         std::cout<<" print "<< sDef<<std::endl;
    //     }
    //     else{
    //         std::cout<<"Invalid input" <<std::endl;
    //         break;
    //     }
    // }
    
    std::string::size_type size;
    size= def.size();
    std::cout<<size<<std::endl;
    std::cout<<"is " <<sDef <<" less than " << def<< " : " << (sDef<def) <<std::endl;
    std::cout<<"is " <<sDef <<" greater than" << def<< " :" << (sDef>def)<<std::endl;
    std::cout<<"is " <<sDef <<" equals to " << def<< " : " << (sDef==def)<<std::endl;

    def+=sDef;
    std::cout<<"after append the current string\t: "<< def<<std::endl;
    std::cout<<"adding string \t: " << def + sDef<<std::endl;
    return 0;
}