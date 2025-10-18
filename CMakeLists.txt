cmake_minimum_required(VERSION 4.0)
project(ConfusionDiffusion_ C)

set(CMAKE_C_STANDARD 11)

add_executable(ConfusionDiffusion_ encrypting.c
        decrypting.c
        recursiveExperiment.c
        LikedListExperiment.h
        LikedListExperiment.c)
