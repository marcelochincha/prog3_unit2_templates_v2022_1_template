#!/usr/bin/env bash

project_name='prog3_unit2_templates_v2022_1'
source_code='
        P1.h P1.cpp
        P2.h P2.cpp
        P3.h P3.cpp
        P4.h P4.cpp
        P5.h P5.cpp
        P6.h P6.cpp
        P7.h P7.cpp
        P8.h P8.cpp
        P9.h P9.cpp
        P10.h P10.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}