project(LightSkipList CXX)

cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)

set(LIBRARY_NAME ${PROJECT_NAME})
add_library(${LIBRARY_NAME} SHARED ${SRC_LIST})

install(FILES light_skip_list.h DESTINATION include)
install(TARGETS ${LIBRARY_NAME} LIBRARY DESTINATION lib)

