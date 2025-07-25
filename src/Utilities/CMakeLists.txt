set(SOURCES command_line_parameter_processor.cpp
            CoutLock.cpp
            current_time.cpp
            DisjointSets.cpp
            extra.cpp
            File.cpp
            MatrixDeallocation.cpp
            mmio.cpp
            Pause.cpp
            stat.cpp
            StringTokenizer.cpp
            Timer.cpp
            )
            

target_sources(ColPack_static PRIVATE ${SOURCES})
target_sources(ColPack_shared PRIVATE ${SOURCES})

