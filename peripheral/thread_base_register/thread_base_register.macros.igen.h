
////////////////////////////////////////////////////////////////////////////////
//
//                W R I T T E N   B Y   I M P E R A S   I G E N
//
//                             Version 20210408.0
//
////////////////////////////////////////////////////////////////////////////////

#ifndef THREAD_BASE_REGISTER_MACROS_IGEN_H
#define THREAD_BASE_REGISTER_MACROS_IGEN_H  

// Before including this file in the application, define the indicated macros
// to fix the base address of each slave port.

// Set the macro 'THREADREG' to the base of port 'threadREG'
#ifndef THREADREG
#error THREADREG is undefined. It needs to be set to the port base address
#endif


#define THREADREG_AB8_POFFSET           0x0
#define THREADREG_AB8_THREAD_BASE_REGISTER_POFFSET  0x0
#define THREADREG_AB8_THREAD_BASE_REGISTER  (THREADREG + THREADREG_AB8_POFFSET + THREADREG_AB8_THREAD_BASE_REGISTER_POFFSET)


#endif
