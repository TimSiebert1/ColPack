set(SOURCES BipartiteGraphPartialColoring.cpp
            BipartiteGraphPartialColoringInterface.cpp
            BipartiteGraphPartialOrdering.cpp)

target_sources(ColPack_static PRIVATE ${SOURCES})

target_sources(ColPack_shared PRIVATE ${SOURCES})

