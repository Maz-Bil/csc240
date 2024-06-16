#include<iostream>

int main()
{
  std::cout << "Hello World!" << std::endl;
}

/*
This is the difference when using namespace std.
By including "using namespace std;" we no longer need to prefix standard library names with "std::".

With "using namespace std;":
#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!" << endl;
}

*/
