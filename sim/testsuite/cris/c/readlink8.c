/* Check that rare readlink calls don't cause the simulator to abort.
#notarget: cris*-*-elf
#sim: --sysroot=$pwd --env-unset PWD
 */
#define SYSROOTED 1
#include "readlink2.c"
