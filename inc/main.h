/*!
 * \brief A tool for finding JIS-based character strings in a binary stream
 * \author Damian Rogers (damian@sudden-desu.net)
 * \version 1.0
 * \date 2017.12.30
 * \copyright GNU Public License
 */
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <fstream>
#include <iomanip>
#include <iostream>

#include "cp932.h"
#include "eucjp.h"
#include "jis_encoding.h"
#include "shift_jis.h"
#include "types.h"

/*!
 * \enum encodings
 * \brief List of supported JIS encodings
 */
enum enctypes { shift_jis, cp932, eucjp };

void process_args(int argc, char **argv);

void print_help();
