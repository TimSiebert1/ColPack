set(SOURCES GraphColoring.cpp
            GraphColoringInterface.cpp
            GraphCore.cpp
            GraphInputOutput.cpp
            GraphOrdering.cpp
            )

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})

