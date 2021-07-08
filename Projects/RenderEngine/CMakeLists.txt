get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

if(MSVC)
    file(GLOB INCLUDE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*h)
    file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*cpp)
endif()

add_library(
    ${ProjectId}
    STATIC
    ${SRC_FILES} ${INCLUDE_FILES}
)

target_include_directories(
    ${ProjectId}
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    ${ProjectId}
    PRIVATE

)