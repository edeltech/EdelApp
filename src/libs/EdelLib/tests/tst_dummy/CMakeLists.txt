INCLUDE_DIRECTORIES( "../../src" )

# add test executable to 'check' target
ADD_EXECUTABLE(tst_dummy EXCLUDE_FROM_ALL tst_dummy.cpp)
TARGET_LINK_LIBRARIES(tst_dummy ${TEST_LIBRARIES})
ADD_TEST(NAME tst_dummy COMMAND tst_dummy)
ADD_DEPENDENCIES(check tst_dummy)
