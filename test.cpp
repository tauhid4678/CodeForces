#include <iostream>
#include <string>

int main() {
    int n;
    std::string stones;
    
    // Read input
    std::cin >> n >> stones;
    
    int count = 0;
    for (int i = 1; i < stones.length(); ++i) {
        if (stones[i] == stones[i - 1]) {
            count++;
        }
    }
    
    // Print output
    std::cout << count << std::endl;
    
    return 0;
}
