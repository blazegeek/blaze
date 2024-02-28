FROM debian:stretch
LABEL maintainer="unknown"
LABEL description="Dockerised GeekCash, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
