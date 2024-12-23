// This file is released into the public domain.
// Read LICENSE.txt for more information.

#include <benchmark/benchmark.h>

static void BM_Code1(benchmark::State& state) {
  // Initialize something...
  for (auto _ : state) {
    // Do something to measure...
  }
}
BENCHMARK(BM_Code1);

static void BM_Code2(benchmark::State& state) {
  // Initialize something...
  for (auto _ : state) {
    // Do something to measure...
  }
}
BENCHMARK(BM_Code2);

BENCHMARK_MAIN();
