#!/bin/bash

set -x

conan install . --output-folder=build --build=missing