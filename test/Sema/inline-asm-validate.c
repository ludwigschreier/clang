// RUN: %clang_cc1 -triple arm64-apple-macosx10.8.0 -fsyntax-only -verify %s
// expected-no-diagnostics

unsigned t, r, *p;

int foo (void) {
  __asm__ __volatile__( "stxr   %w[_t], %[_r], [%[_p]]" : [_t] "=&r" (t) : [_p] "p" (p), [_r] "r" (r) : "memory");
  return 1;
}
