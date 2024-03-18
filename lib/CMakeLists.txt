project(lib)

set(HEADER_FILES product.h)
set(SOURCE_FILES product.cpp)

add_library(lib_lib ${SOURCE_FILES} ${HEADER_FILES})
