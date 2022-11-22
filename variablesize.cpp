#include <iostream>

int main()
{
    std::cout << "\t• " << sizeof(int) << " bájt a mérete egy int típusú változónak.\n";
    std::cout << "\t• " << sizeof(short) << " bájt a mérete egy short típusú változónak.\n";
    std::cout << "\t• " << sizeof(long) << " bájt a mérete egy long típusú változónak.\n";
    std::cout << "\t• " << sizeof(char) << " bájt a mérete egy char típusú változónak.\n";
    std::cout << "\t• " << sizeof(bool) << " bájt a mérete egy bool típusú változónak.\n";
    std::cout << "\t• " << sizeof(float) << " bájt a mérete egy float típusú változónak.\n";
    std::cout << "\t• " << sizeof(double) << " bájt a mérete egy double típusú változónak.\n";

    return 0;
}