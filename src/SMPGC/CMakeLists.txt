set(SOURCES SMPGC.cpp
            SMPGCColoring.cpp
            SMPGCColoringD1.cpp
            SMPGCColoringD1BIT.cpp
            SMPGCColoringD1Orig.cpp
            SMPGCColoringD2.cpp
            SMPGCColoringHybrid.cpp
            SMPGCGraph.cpp
            SMPGCOrdering.cpp
            )
            

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})
