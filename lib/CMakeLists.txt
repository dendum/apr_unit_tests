project(lib)

set(HEADER_FILES task_1.h task_2.h)
set(SOURCE_FILES task_1.cpp task_2.cpp)

add_library(lib_lib ${SOURCE_FILES} ${HEADER_FILES})
