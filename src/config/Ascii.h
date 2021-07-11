// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, The SatoriCoin Developers
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = R""""(
 :::===  :::====  :::==== :::====  :::====  ::: :::=====  :::====  :::      :::==== 
 :::     :::  === :::==== :::  === :::  === ::: :::       :::  === :::      :::  ===
  =====  ========   ===   ===  === =======  === === ===== ===  === ===      ===  ===
     === ===  ===   ===   ===  === === ===  === ===   === ===  === ===      ===  ===
 ======  ===  ===   ===    ======  ===  === ===  =======   ======  ======== ======= 
)"""";

const std::string nonWindowsAsciiArt = R""""(
 .d8888b.           888                    d8b  .d8888b.           888      888 
d88P  Y88b          888                    Y8P d88P  Y88b          888      888 
Y88b.               888                        888    888          888      888 
 "Y888b.    8888b.  888888 .d88b.  888d888 888 888         .d88b.  888  .d88888 
    "Y88b.     "88b 888   d88""88b 888P"   888 888  88888 d88""88b 888 d88" 888 
      "888 .d888888 888   888  888 888     888 888    888 888  888 888 888  888 
Y88b  d88P 888  888 Y88b. Y88..88P 888     888 Y88b  d88P Y88..88P 888 Y88b 888 
 "Y8888P"  "Y888888  "Y888 "Y88P"  888     888  "Y8888P88  "Y88P"  888  "Y88888 
)"""";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
