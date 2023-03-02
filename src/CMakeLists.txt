cmake_minimum_required(VERSION 3.0.0)

add_executable(26_2_mobile_phone main.cpp ${MY_INCLUDE_DIR}/phone.h phone.cpp ${MY_INCLUDE_DIR}/phoneNumber.h phoneNumber.cpp  ${MY_INCLUDE_DIR}/abonent.h abonent.cpp)

target_include_directories(26_2_mobile_phone PUBLIC ${MY_INCLUDE_DIR})