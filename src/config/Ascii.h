// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2020, The Proximus Project 
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n ____________ _______   __________  ____   _ _____\n"
                                    "| ___ \\ ___ \\  _  \\ \\ / /_   _|  \\/  | | | /  ___|\n"
                                    "| |_/ / |_/ / | | |\\ V /  | | | .  . | | | \\ `--. \n"
                                    "|  __/|    /| | | |/   \\  | | | |\\/| | | | |`--. \\ \n"
                                    "| |   | |\\ \\  \\_/ / /^\\ \\_| |_| |  | | |_| /\\__/ /\n"
                                    "\\_|   \\_| \\_|\\___/\\/   \\/\\___/\\_|  |_/\\___/\\____/ \n";

const std::string nonWindowsAsciiArt =
      "\n                                                                 \n"
      " ██████╗ ██████╗  ██████╗ ██╗  ██╗██╗███╗   ███╗██╗   ██╗███████╗\n"
      " ██╔══██╗██╔══██╗██╔═══██╗╚██╗██╔╝██║████╗ ████║██║   ██║██╔════╝\n"
      " ██████╔╝██████╔╝██║   ██║ ╚███╔╝ ██║██╔████╔██║██║   ██║███████╗\n"
      " ██╔═══╝ ██╔══██╗██║   ██║ ██╔██╗ ██║██║╚██╔╝██║██║   ██║╚════██║\n"
      " ██║     ██║  ██║╚██████╔╝██╔╝ ██╗██║██║ ╚═╝ ██║╚██████╔╝███████║\n"
      " ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝╚═╝     ╚═╝ ╚═════╝ ╚══════╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
