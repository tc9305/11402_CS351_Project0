FROM ubuntu:22.04

RUN apt-get update && apt-get install -y g++ make cmake && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

COPY . /workspace

RUN cmake -S . -B build
RUN cmake --build build --config Release

CMD ["./build/twosum_test"]
