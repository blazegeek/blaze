#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-blaze/blazed-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/blazed docker/bin/
cp $BUILD_DIR/src/blaze-cli docker/bin/
cp $BUILD_DIR/src/blaze-tx docker/bin/
strip docker/bin/blazed
strip docker/bin/blaze-cli
strip docker/bin/blaze-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
