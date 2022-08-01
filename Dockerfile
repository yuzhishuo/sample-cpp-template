FROM ubuntu:20.04

WORKDIR /root/

RUN mv /etc/apt/sources.list /etc/apt/sources.list.bak
COPY --chown=root:root ./docker_files/sources.list /etc/apt/

RUN apt-get update

# for add-apt-repository  , > 12.04 software-properties-common , <12.04 python-software-properties
RUN apt-get install -y software-properties-common 

RUN add-apt-repository -y ppa:ubuntu-toolchain-r/test

RUN apt install -y gcc-11 g++-11 

RUN ln -s /usr/bin/gcc-11 /usr/bin/gcc && ln -s /usr/bin/g++-11 /usr/bin/g++

RUN apt install -y gdb make clang-format git

ADD https://ghproxy.com/https://github.com/Kitware/CMake/releases/download/v3.16.0/cmake-3.16.0-linux-x86_64.sh .

RUN chmod +x cmake-3.16.0-linux-x86_64.sh && bash cmake-3.16.0-linux-x86_64.sh --skip-license --prefix=/usr/local && rm -rf cmake-3.16.0-linux-x86_64.sh


