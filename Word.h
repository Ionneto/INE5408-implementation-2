#ifndef WORD_H
#define WORD_H

#include <deque>
using std::deque;

/**
 * Struct utilizada para conter as palavras que estão contidas no arquivo
 */
struct Word {
    char word[100];
    deque<int> posicoes;

    Word() {
        word[0] = '\0';
        for (int i=1; i<100; i++) {
            word[i] = ' ';
        }
    }

    Word(char* w, int a) {
        for (int i=1; i<100; i++) {
            word[i] = ' ';
        }
        strcpy(word, w);
        posicoes.push_back(a);
    }

    bool operator==(const Word& rhs) const {
        if (strcmp(word, rhs.word) == 0) return true;
        return false;
    }

    bool operator<(const Word& rhs) const {
        if (strcmp(word, rhs.word) < 0) return true;
        return false;
    }

    bool operator>(const Word& rhs) const {
        if (strcmp(word, rhs.word) > 0) return true;
        return false;
    }
};

#endif /* WORD_H */
