/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <string.h>

#include "../slstatus.h"

const char *
check_updates(void)
{
    const char *cmd = "checkupdates | wc -l";
    return run_command(cmd);
}
