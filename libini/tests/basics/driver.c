#include <ini/ini.h>

#include <stdio.h>
#include <string.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  static const char path[] = "driver.ini";

  FILE *f = fopen (path, "w");
  assert (f != NULL);
  fputs ("[owner]\n"
         "name = John Doe\n"
         "\n"
         "[database]\n"
         "port = 143\n",
         f);
  fclose (f);

  ini_t *ini = ini_load (path);
  assert (ini != NULL);

  const char *name = ini_get (ini, "owner", "name");
  assert (name != NULL && strcmp (name, "John Doe") == 0);

  int port = 0;
  assert (ini_sget (ini, "database", "port", "%d", &port) != 0);
  assert (port == 143);

  assert (ini_get (ini, "owner", "missing") == NULL);

  ini_free (ini);

  remove (path);

  return 0;
}
