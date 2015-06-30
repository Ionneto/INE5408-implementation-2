#include <fstream>
#include <sstream>
#include "AvlTree.h"

struct nameContent {
    const std::string name;
    const std::string content;

    nameContent(const std::string &name, const std::string &content) : name(name), content(content) { }

    bool operator<(const nameContent &rhs) const {
        return name < rhs.name;
    }

    bool operator>(const nameContent &rhs) const {
        return rhs<(*this);
    }


};

int main(int argc, char **argv) {

    AvlTree<nameContent> index;

    for (auto i = 1; i < argc; ++i) {
        std::string path(argv[i]);
        std::ifstream file(path);
        auto fileName = path.substr(path.find_last_of('/') + 1, path.find_last_of('.') - path.find_last_of('/') - 1);
        std::stringstream ss;
        ss << file.rdbuf();
        index.insert(nameContent(fileName, ss.str()));
        //auto data = file.read();

    }

    return 0;
}