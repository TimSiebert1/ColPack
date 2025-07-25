set(SOURCES BipartiteGraphBicoloring.cpp
            BipartiteGraphBicoloringInterface.cpp
            BipartiteGraphCore.cpp
            BipartiteGraphInputOutput.cpp
            BipartiteGraphOrdering.cpp
            BipartiteGraphVertexCover.cpp
            )

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})


