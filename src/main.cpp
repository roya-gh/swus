#include <iostream>
#include "swus-server.hpp"
int main() {
    std::cout<<"-----------------------\n";
    swusServer s;
    ns2__loginResponse d;
    s.login("roya","ghpsw",d);
    std::cout<<"-----------------------\n";
    return 0;  
}
