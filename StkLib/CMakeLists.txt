cmake_minimum_required(VERSION 3.16)

project(StkLib CXX)

# 设置c++标准
set(CMAKE_CXX_STANDARD 11)

include_directories("Include")

if (WIN32)
    # 生成引入库
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS 1)
endif (WIN32)

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/Src/*.cpp")
foreach (file ${files})
    message(${file})
endforeach ()

add_library(StkLib SHARED ${files})

# 如果动态链接库跟可执行程序不在一起就找不到了，所以需要install一下，
# 最后运行的时候，把所有的可执行程序和库都install到一起这样就可以去运行了
# RUNTIME：运行时需要用到的东西，windows上包括exe、dll文件；linux上值包括可执行文件
# LIBRARY：linux上搜库的时候，会放到动态链接库会放到lib里；mac上的dylib也会放到lib里
# ARCHIVE：引入库会放到lib/static里
#install(TARGETS StkLib
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib/static)