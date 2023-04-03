FROM mcr.microsoft.com/devcontainers/base:ubuntu

RUN apt-get update && apt-get install -y \
    software-properties-common \
    && rm -rf /var/lib/apt/lists/*

RUN add-apt-repository -y ppa:mutlaqja/ppa

RUN apt-get update && apt-get install -y \
    build-essential devscripts debhelper fakeroot cdbs software-properties-common cmake \
    libstellarsolver-dev "libqt5*-dev" "qt*5-dev" \
    wcslib-dev astyle \
    gdb \
    libgrpc++-dev grpc-proto protobuf-compiler-grpc \
    git \
    cdbs \
    dkms \
    cmake \
    fxload \
    libev-dev \
    libgps-dev \
    libgsl-dev \
    libraw-dev \
    libusb-dev \
    zlib1g-dev \
    libftdi-dev \
    libgsl0-dev \
    libjpeg-dev \
    libkrb5-dev \
    libnova-dev \
    libtiff-dev \
    libfftw3-dev \
    librtlsdr-dev \
    libcfitsio-dev \
    libgphoto2-dev \
    build-essential \
    libusb-1.0-0-dev \
    # libdc1394-22-dev \
    libboost-regex-dev \
    libcurl4-gnutls-dev \
    libtheora-dev \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir /src
WORKDIR /src
RUN wget https://github.com/indilib/indi/archive/refs/tags/v2.0.0.tar.gz
RUN tar -xvf v2.0.0.tar.gz

RUN mkdir /build
WORKDIR /build

RUN cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release -DINDI_BUILD_QT5_CLIENT=ON /src/indi-2.0.0
RUN make -j6
RUN make install
