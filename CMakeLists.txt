#files

file(GLOB EssexEngineSystemDaemon_HEADERS
    "src/Daemons/System/*.h"
)
file(GLOB EssexEngineSystemDaemon_SRC
    ${EssexEngineSystemDaemon_HEADERS}
    "src/Daemons/System/*.cpp"
)

#setup headers

file(COPY ${EssexEngineSystemDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineSystemDaemon/")

#setup build

add_library(EssexEngineSystemDaemon SHARED ${EssexEngineSystemDaemon_SRC})
target_link_libraries(EssexEngineSystemDaemon EssexEngineCore)