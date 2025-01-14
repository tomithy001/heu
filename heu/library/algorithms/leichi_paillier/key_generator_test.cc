// Copyright 2023 Polar Bear Tech (Xi 'an) Co., LTD.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "heu/library/algorithms/leichi_paillier/key_generator.h"
#include "gtest/gtest.h"

namespace heu::lib::algorithms::leichi_paillier::test {
  class KeyGenTest : public ::testing::TestWithParam<size_t> {};
  INSTANTIATE_TEST_SUITE_P(SubTest, KeyGenTest,
                          ::testing::Values(1024));

  TEST_P(KeyGenTest, SubTest) {
    SecretKey sk;
    PublicKey pk;
    KeyGenerator::Generate(GetParam(), &sk, &pk);
  }
}  // namespace heu::lib::algorithms::leichi_paillier::test
