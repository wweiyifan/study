#include <vector>
#include <iostream>
using namespace std;

int main(){
    std::vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(11);
    myVector.push_back(5);

    std::cout<<"ELEMENTS IN TNE VECTOR OR: ";
    for (int element : myVector){
        std::cout << element << "  ";
    }    
    std::cout << std::endl;

    std::cout << "first element: " <<myVector.at(0) <<std::endl;

    std::cout << "second element: " <<myVector.at(1) <<std::endl;

    std::cout << "size of the vector: " << myVector.size() <<std::endl;

    myVector.erase(myVector.begin() +2);

    std::cout <<"elements after the erase: ";
    for (int element : myVector){
        std::cout <<element << "  ";
    }
    std::cout << std::endl;

    myVector.clear();
    std::cout<<"size of the vector after clearing: " <<myVector.size() << std::endl;
    return 0;

 }
