cmake_minimum_required(VERSION 3.8)

# Project Shameless
project(SMTPEmail)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

# Qt5
find_package(Qt5Network REQUIRED)

add_library(SMTPEmail STATIC
    src/emailaddress.cpp
    src/mimeattachment.cpp
    src/mimefile.cpp
    src/mimehtml.cpp
    src/mimeinlinefile.cpp
    src/mimemessage.cpp
    src/mimepart.cpp
    src/mimetext.cpp
    src/smtpclient.cpp
    src/quotedprintable.cpp
    src/mimemultipart.cpp
    src/mimecontentformatter.cpp
    src/emailaddress.h
    src/mimeattachment.h
    src/mimefile.h
    src/mimehtml.h
    src/mimeinlinefile.h
    src/mimemessage.h
    src/mimepart.h
    src/mimetext.h
    src/smtpclient.h
    src/quotedprintable.h
    src/mimemultipart.h
    src/mimecontentformatter.h
    src/smtpexports.h
)
target_compile_definitions(SMTPEmail PUBLIC SMTP_BUILD_STATIC)
target_include_directories(SMTPEmail INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(SMTPEmail PUBLIC Qt5::Network)
