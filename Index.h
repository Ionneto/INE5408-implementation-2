
#ifndef INDEX_H
#define INDEX_H

/**
 * Struct utilizada para organizar os índices na árvore
 * para que possam ser retirados por níveis
 */
struct Index {
    std::string name[100];
    int position;
    //Define os operadores para poder usar na Avl
    Index() {
        comando[0] = '\0';
        for(int i=1; i<100; i++) {
            comando[i] = ' ';
        }
        posicao = 0;
    }

    bool operator==(const Index& rhs) const {
        if (strcmp(comando, rhs.comando) == 0) return true;
        return false;
    }

    bool operator<(const Index& rhs) const {
        if (strcmp(comando, rhs.comando) < 0) return true;
        return false;
    }

    bool operator>(const Index& rhs) const {
        if (strcmp(comando, rhs.comando) > 0) return true;
        return false;
    }
};

#endif /* INDEX_H */
