
#include <iostream>


int main()
{
    std::cout << "Hi! Which one of these 3 is your favourite drink?\n";
    std::cout << "1.Coffee\n";
    std::cout << "2.Tea\n";
    std::cout << "3.Coca Cola\n";
    std::cout << "Select 1 to 3: ";
    int nr = 0;
    std::cin >> nr;
    if (nr==1) {
        std::cout << "Coffee is delicious\n";
}
    if (nr==2) {
        std::cout << "Tea gives peace of mind\n";
    }
    if (nr==3) {
        std::cout << "Coke will give you a white smile\n";
    }
    
   
    return 0;
}

