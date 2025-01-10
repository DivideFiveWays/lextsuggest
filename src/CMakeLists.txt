# Add the library
add_library(lextsuggest_lib
    trie.cpp
    lextsuggest.cpp
)

# Add include directories for the library
target_include_directories(lextsuggest_lib
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_BINARY_DIR}/include
)

# Add the executable
add_executable(lextsuggest
    main.cpp
)

# Add include directories for the executable
target_include_directories(lextsuggest
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_BINARY_DIR}/include
)

# Link the library to the executable
target_link_libraries(lextsuggest
    PRIVATE
        lextsuggest_lib
)

# Install targets
install(TARGETS lextsuggest_lib
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(TARGETS lextsuggest
    RUNTIME DESTINATION bin
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION include/${PROJECT_NAME}
    FILES_MATCHING PATTERN "*.hpp"
)

install(FILES ${CMAKE_BINARY_DIR}/include/config.hpp
    DESTINATION include/${PROJECT_NAME})
