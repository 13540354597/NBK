#更多关于使用安卓工作室的CMake的信息，请阅读
#文档:https://d.android.com/studio/projects/add-native-code.html
#设置构建本机库所需的CMake的最小版本。

cmake_minimum_required(VERSION 3.4.1)

#创建并命名一个库，设置为静态库
#或共享，并提供其源代码的相对路径。
#您可以定义多个库，并且CMake为您构建它们。
# Gradle自动将共享库与APK打包。

add_library( #设置库的名称。
             native-lib

             #将库设置为共享库。
             SHARED

             #为源文件提供了相对路径。
             src/main/cpp/native-lib.c

             src/main/cpp/kit.c
             src/main/cpp/kit.h
            )

#搜索指定的预建库并将路径存储为a
#变量。因为CMake在搜索路径中包含了系统库
#默认情况下，只需要指定公共NDK库的名称
#您想要添加。CMake验证该库是否存在
#完成构建。

find_library( #设置路径变量的名称。
              log-lib

              #指定NDK库的名称你要用CMake来定位。

              log
              )

#指定库CMake应该链接到目标库。你
#可以链接多个库，比如您在此定义的库
#构建脚本，预先构建的第三方库，或系统库。

target_link_libraries( #指定目标库。
                       native-lib

                       #将目标库链接到日志库
                       #包括在NDK中。
                       ${log-lib}
                       )