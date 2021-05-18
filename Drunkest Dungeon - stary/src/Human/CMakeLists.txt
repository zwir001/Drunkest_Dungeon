set(MODULE_NAME Human)

add_subdirectory(Student)
add_subdirectory(Teacher)

set(INTERNAL_FILES
Human.cpp
)

set(PUBLIC_HEADERS
Human.hpp
)

add_library(
  ${MODULE_NAME}
  ${INTERNAL_FILES}
  ${PUBLIC_HEADERS}
)

target_include_directories(
  ${MODULE_NAME}
  PRIVATE 
    ${MODULE_NAME}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(
    ${MODULE_NAME}
  PRIVATE 
    lib::Teacher
    lib::Student
    )

add_library(lib::${MODULE_NAME} ALIAS ${MODULE_NAME})