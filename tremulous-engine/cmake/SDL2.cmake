if(USE_INTERNAL_SDL2)
    set(SDL2_DEFINES "-DUSE_LOCAL_HEADERS=1")
    set(SDL2_PREFIX "${CMAKE_SOURCE_DIR}/external/SDL2")
    set(SDL2_INCLUDE_DIRS "${SDL2_PREFIX}/include")
    set(SDL2_LIBRARIES "-L${SDL2_PREFIX}/libs/${CMAKE_SYSTEM_NAME} -lSDL2-2.0.0")
else(USE_INTERNAL_SDL2)
    set(SDL2_PREFIX "/usr")
    if(APPLE)
        set(SDL2_PREFIX "/usr/local")
    endif(APPLE)
    set(SDL2_INCLUDE_DIRS "${SDL2_PREFIX}/include/SDL2")
    set(SDL2_LIBRARIES "-L${SDL2_PREFIX} -lSDL2")
endif(USE_INTERNAL_SDL2)
