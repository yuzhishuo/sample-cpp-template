include(ExternalProject)

set(SPDLOG_ROOT ${PROJECT_DESCRIPTION_SOURCE_PATHS})
set(SPDLOG_GIT_TAG  v1.4.1)  # 指定版本
set(SPDLOG_GIT_URL      https://gitee.com/xiutanshe/spdlog.git)  # 指定git仓库地址
set(SPDLOG_CONFIGURE    cd ${SPDLOG_ROOT}/src/SPDLOG && cmake -D CMAKE_INSTALL_PREFIX=${PROJECT_DESCRIPTION_SOURCE_PATHS} .)  # 指定配置指令（注意此处修改了安装目录，否则默认情况下回安装到系统目录）
set(SPDLOG_MAKE         cd ${SPDLOG_ROOT}/src/SPDLOG && make)  # 指定编译指令（需要覆盖默认指令，进入我们指定的SPDLOG_ROOT目录下）
set(SPDLOG_INSTALL      cd ${SPDLOG_ROOT}/src/SPDLOG && make install)  # 指定安装指令（需要覆盖默认指令，进入我们指定的SPDLOG_ROOT目录下）

ExternalProject_Add(SPDLOG
        PREFIX            ${SPDLOG_ROOT}
        GIT_REPOSITORY    ${SPDLOG_GIT_URL}
        GIT_TAG           ${SPDLOG_GIT_TAG}
        CONFIGURE_COMMAND ${SPDLOG_CONFIGURE}
        BUILD_COMMAND     ${SPDLOG_MAKE}
        INSTALL_COMMAND   ${SPDLOG_INSTALL}
)

# 指定编译好的静态库文件的路径
set(PROJECT_DESCRIPTION_LIBRARY ${PROJECT_DESCRIPTION_LIBRARY} spdlog)
# 指定头文件所在的目录
set(PROJECT_DESCRIPTION_INCLUDE_PATHS  ${PROJECT_DESCRIPTION_INCLUDE_PATHS} ${SPDLOG_ROOT}/include)
