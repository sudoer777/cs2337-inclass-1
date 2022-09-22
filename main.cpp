#include <iostream>
#include <string>

bool containsKeyword(Document docToSearch, string keyword)
{
    if(docToSearch->GetContents().find(keyword) != std::string::npos)
        return true;
    return false;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
