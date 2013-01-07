# find all source files
FILE(GLOB_RECURSE LIB_SRCS *.cpp)

# add library
ADD_LIBRARY(${EDEL_CURRENT_LIBRARY} STATIC ${LIB_SRCS})
