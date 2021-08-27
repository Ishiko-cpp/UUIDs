/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDVersion4Generator.h"

namespace Ishiko
{
namespace UUIDs
{

UUID UUIDVersion4Generator::generate(Error& error)
{
    return m_generator();
}

}
}
