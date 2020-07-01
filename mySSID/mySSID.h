// this is mySSID.h
// it is intended to be in a library
// used to avoid typing in your local SSID and password over and over
//  in each ino, just #include <mySSID.h> in your ino
// your SSID and password from this file will be used
// you can zip your ino directory without giving away your SSID and password
//
#ifndef MY_SSID_H   // if not previously defined
#define MY_SSID_H   // define this to avoid including it more than once
//
#define mySSID "SSID"         // change to your SSID
#define myPASSWORD "PASSWORD" // change to your password
//
#if mySSID == SSID
    #error "this SSID is unlikely to connect"  // change it to your SSID
#endif
//
#endif // end of the include guard
