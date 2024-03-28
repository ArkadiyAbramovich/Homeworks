FROM docker_hello:latest 
    WORKDIR /root/test/
    COPY main.cxx .
    RUN g++ main.cxx -o docker_test_1
    RUN clang++ main.cxx -o docker_test_2
    CMD ["./docker_test_2"]

    