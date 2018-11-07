#include "picosha2.h"
#include <string>

using namespace std;

int hash_comp_const (const char * a, const char *b)
{
  const unsigned char *_a = (const unsigned char *) a;
  const unsigned char *_b = (const unsigned char *) b;
  unsigned char result = 0;
  size_t i;
  size_t size = strlen(a);

  for (i = 0; i < size; i++) {
    result |= _a[i] ^ _b[i];
  }

  return result; /* returns 0 if equal, nonzero otherwise */
}

string hash_sha256 (string source) {
  vector<unsigned char> hash(picosha2::k_digest_size);
  picosha2::hash256(source.begin(), source.end(), hash.begin(), hash.end());

  return picosha2::bytes_to_hex_string(hash.begin(), hash.end());
}
