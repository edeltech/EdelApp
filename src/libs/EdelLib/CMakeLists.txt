# add Qt5 include directories need by this lib
include_directories(${Qt5Widgets_INCLUDE_DIRS})

# set library name to parent folder name
GET_FILENAME_COMPONENT(EDEL_CURRENT_LIBRARY ${CMAKE_CURRENT_SOURCE_DIR} NAME)

# add source files and unit tests
ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(tests)
