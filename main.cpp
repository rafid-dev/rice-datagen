#include "init.h"
#include "uci.h"
#include "tuner.h"
#include "datagen.h"

int main (int argc, char *argv[]){
    init_all();

    uci_loop(argc, argv);

    // Tuner tuner;

    return 0;
}