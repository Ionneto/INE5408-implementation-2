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

struct wordNames {
    const std::string word;
    const AvlTree<std::string> nameList;

    wordNames(const std::string &word): word(word) {

    } //  inicializa arvore vazia
};

int main(int argc, char **argv) {

    AvlTree<nameContent> ncIndex;

    for (auto i = 1; i < argc; ++i) {
        std::string path(argv[i]);
        std::ifstream file(path);
        auto fileName = path.substr(path.find_last_of('/') + 1, path.find_last_of('.') - path.find_last_of('/') - 1);
        std::stringstream ss;
        ss << file.rdbuf();
        auto content = ss.str();
        ncIndex.insert(nameContent(fileName, content));

        content.find
    }

    return 0;
}