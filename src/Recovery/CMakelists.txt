set(SOURCES HessianRecovery.cpp
            JacobianRecovery1D.cpp
            JacobianRecovery2D.cpp
            RecoveryCore.cpp)

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})
