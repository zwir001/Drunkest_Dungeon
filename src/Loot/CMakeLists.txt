set(MODULE_NAME loot)

message("compile ${MODULE_NAME}")

set(INTERNAL_FILES
  Loot.cpp
)

set(PUBLIC_HEADERS
  Loot.hpp
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
    ${PROJECT_SOURCE_DIR}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${MODULE_NAME}
)

add_library(lib::${MODULE_NAME} ALIAS ${MODULE_NAME})

add_subdirectory(Biwo)
add_subdirectory(Relic)