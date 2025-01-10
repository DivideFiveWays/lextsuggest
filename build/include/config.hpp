#pragma once

#ifdef INSTALL_PREFIX
#define DATA_DIR INSTALL_PREFIX "/share/lextsuggest"
#else
#define DATA_DIR "/home/prox/gdir/lextsuggest/build/bin/data"
#endif
