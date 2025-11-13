cmake_minimum_required(VERSION 3.16)
project(ConfusionDiffusion_ C)

set(CMAKE_C_STANDARD 11)

add_executable(ConfusionDiffusion_ FirstDraft/encrypting.c
        FirstDraft/decrypting.c
        Experiments/recursiveExperiment.c
        LinkedList/LinkedListExperiment.h
        LinkedList/LinkedListExperiment.c
        src/fileSrc/fileEncrypting.c
        src/fileSrc/fileDecrypting.c
        src/confDiffCLI.c
        src/fileSrc/fileDeUtils.h
        src/fileSrc/fileEnUtils.h
        src/fileSrc/fileEnUtils.c
        src/fileSrc/fileDeUtils.c)
