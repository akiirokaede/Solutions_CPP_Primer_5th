// 拷贝自网络，用于验证
// 第四种情况，如果不加 delete p，则 g++ 编译器不会报错，但是 p 就变成了 dangling pointer，可以断定这是一个糟糕的写法
#include <iostream>
#include <vector>
#include <string>
#include <memory>


void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{
    auto p = new int();
    auto sp = std::make_shared<int>();

    /** @brief
     *  legal. Just copy sp which is a shared_ptr to process().
     */
    //process(sp);

    /** @brief
     *  illegale.plain pointer can not convert to smart pointer implicitly.
     */
    //process(new int());

    /** @brief
     *  illegale.plain pointer can not convert to smart pointer implicitly.
     */
    //process(p);

    /** @brief
     *  Legal. But it's a bad practice to do so. 
     *  Because using smart pointer together with raw pointer could potentially cause problems. 
     *  For example double free as shown in #145.
     * 
     *  Check issue #145 for detail, thx @endyul for reporting
     */
    process(std::shared_ptr<int>(p));
    return 0;
}