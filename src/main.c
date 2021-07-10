#include <tice.h>
#include <stdlib.h>
#include <fileioc.h>

/* Main function, called first */
int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();

    /* Close any files that may be open already */
    ti_CloseAll();


    /* Print a string */
    os_PutStrFull("Hello, World.");

    /* Waits for a key */
    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}

void float2str(float value, char *str)
{
    real_t tmp_real = os_FloatToReal(value);
    os_RealToStr(str, &tmp_real, 8, 1, 2);
}
