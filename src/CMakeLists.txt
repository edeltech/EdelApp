ADD_SUBDIRECTORY(libs)

SUBDIRLIST(SUBDIRS ${EDEL_LIBRARIES_DIR})
FOREACH(subdir ${SUBDIRS})
    # include libraries source directories here so app doesn't have to find them
    INCLUDE_DIRECTORIES("${EDEL_LIBRARIES_DIR}/${subdir}/src")
    # make a list of libraries so that app can link against them
    STRING(REPLACE "/" "" subdir ${subdir})
    LIST(APPEND EDEL_LIBRARIES ${subdir})
ENDFOREACH()

ADD_SUBDIRECTORY(app)
