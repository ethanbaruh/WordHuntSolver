project(WordHuntSolver)

set(HEADER_FILES
        MWTNode.h
        Node.h
        MWT.h
        )

set(SOURCE_FILES
        MWTNode.cpp
        MWT.cpp
        )

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})