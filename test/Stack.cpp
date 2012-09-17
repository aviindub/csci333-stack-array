#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  s->push(6);

  EXPECT_EQ(6, s->peek());
  delete s;
}


TEST(StackTest, Resize) {
    Stack* s = new Stack();
    for (int i = 0; i <= 24; i++) {
        s->push(i);
    {
    EXPECT_EQ(24, s->peek());
    delete s;
}
