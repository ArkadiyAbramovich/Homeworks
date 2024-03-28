FROM ubuntu:20.04
    RUN apt-get update
    RUN apt-get install -y g++ clang emacs 
    WORKDIR /root/test/
    COPY docker_hello.cxx .
    RUN g++ docker_hello.cxx -o docker_hello_1
    CMD ["./docker_hello_1"]