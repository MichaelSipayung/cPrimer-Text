#include <iostream>
int main(){
    int sum=0, var=1;
    while (var<=10)
    {
        sum+=var;
        ++var;
    }
    std::cout<<"1. Sum of 1 to 10 inclusive is "<<sum <<std::endl;
    var =1,sum=0;
    for (var= 1; var <=10; var++)
    {
        sum+=var;
    }
    std::cout<<"2. Sum of 1 to 10 inclusive is "<<sum <<std::endl;
    
    return 0;
}