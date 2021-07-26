
////////////////////////////////////////////////////////////////////////////////
//
//                W R I T T E N   B Y   I M P E R A S   I G E N
//
//                             Version 20210408.0
//
////////////////////////////////////////////////////////////////////////////////

#include "thread_base_register.igen.h"
#include <string.h>

// global var
unsigned int base_address = 0;

//////////////////////////////// Callback stubs ////////////////////////////////

PPM_REG_READ_CB(readTBR) {
    if(bytes != 4) {
        bhmMessage("E", "PPM_RNB", "Only 4 byte access permitted");
        return 0;
    }
    // YOUR CODE HERE (readTBR)
   bhmMessage("I", "readTBR", "Foi lido do registrador, %d", base_address);
   return base_address;
}

PPM_REG_WRITE_CB(writeTBR) {
    if(bytes != 4) {
        bhmMessage("E", "PPM_WNB", "Only 4 byte access permitted");
        return;
    }
    base_address = data;
    bhmMessage("I", "writeTBR", "Foi escrito no registrador, %d", base_address);
    // YOUR CODE HERE (writeTBR)
}

PPM_CONSTRUCTOR_CB(constructor) {
    // YOUR CODE HERE (pre constructor)
    periphConstructor();
    // YOUR CODE HERE (post constructor)
}

PPM_DESTRUCTOR_CB(destructor) {
    // YOUR CODE HERE (destructor)
}


PPM_SAVE_STATE_FN(peripheralSaveState) {
    bhmMessage("E", "PPM_RSNI", "Model does not implement save/restore");
}

PPM_RESTORE_STATE_FN(peripheralRestoreState) {
    bhmMessage("E", "PPM_RSNI", "Model does not implement save/restore");
}


