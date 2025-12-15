set(SOURCES JacobianRecovery1D.cpp  
            RecoveryCore.cpp
            HessianRecovery.cpp
            JacobianRecovery2D.cpp 
            )
            

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})
