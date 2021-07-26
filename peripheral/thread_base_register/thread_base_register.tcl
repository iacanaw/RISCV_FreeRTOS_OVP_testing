imodelnewperipheral -name thread_base_register \
                    -constructor constructor \
                    -destructor  destructor \
                    -vendor gaph \
                    -library peripheral \
                    -version 1.0 

iadddocumentation -name Description \
                  -text "thread base register"
                  
#########################################
## A thread base register
#########################################
imodeladdbusslaveport -name threadREG -size 4 -mustbeconnected

# Address block for 8 bit control registers
imodeladdaddressblock -name ab8 -port threadREG -offset 0x0 -width 32 -size 4 

# 8 bit control registers
imodeladdmmregister -addressblock threadREG/ab8 -name thread_base_register -readfunction readTBR -writefunction writeTBR -offset 0
