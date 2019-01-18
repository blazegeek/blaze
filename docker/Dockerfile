FROM debian:stretch
LABEL maintainer="GeekCash Developers <dev@geekcash.org>"
LABEL description="Dockerised GeekCash, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
