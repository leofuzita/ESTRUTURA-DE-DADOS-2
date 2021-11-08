#include <iostream>
#include <cstdlib>

#include "cExpressao.h"

using namespace std;

int main(int argc, char** argv) {
    
    cExpressao *obj = new cExpressao();
    obj -> lerDados();
            
    return 0;
}

