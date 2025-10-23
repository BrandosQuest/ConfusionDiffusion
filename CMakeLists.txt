cmake_minimum_required(VERSION 3.16)
project(ConfusionDiffusion_ C)

set(CMAKE_C_STANDARD 11)

add_executable(ConfusionDiffusion_ encrypting.c
        decrypting.c
        recursiveExperiment.c
        LikedListExperiment.h
        LikedListExperiment.c
        fileEncrypting.c
        fileDecrypring.c)
