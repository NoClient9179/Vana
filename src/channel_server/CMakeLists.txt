file(GLOB CHANNEL_SERVER_SRC *.cpp)
file(GLOB CHANNEL_SERVER_HDR *.hpp)

file(GLOB RECURSE CHANNEL_SERVER_LUA_SRC lua\*.cpp)
file(GLOB RECURSE CHANNEL_SERVER_LUA_HDR lua\*.hpp)

source_group("channel_server" FILES ${CHANNEL_SERVER_SRC} ${CHANNEL_SERVER_HDR})
source_group("channel_server\\lua" FILES ${CHANNEL_SERVER_LUA_SRC} ${CHANNEL_SERVER_LUA_HDR})

add_executable(channel_server
	${CHANNEL_SERVER_SRC} ${CHANNEL_SERVER_HDR}
	${CHANNEL_SERVER_LUA_SRC} ${CHANNEL_SERVER_LUA_HDR}
)

target_link_libraries(channel_server
	common	
	${MYSQL_LIBRARIES}
	${SOCI_LIBRARIES}
	${LUA_LIBRARIES}
	${BOTAN_LIBRARIES}
	${Boost_FILESYSTEM_LIBRARY}
	${Boost_SYSTEM_LIBRARY}
	${Boost_THREAD_LIBRARY}
	-ldl
	-lpthread
)
