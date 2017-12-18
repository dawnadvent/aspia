//
// PROJECT:         Aspia
// FILE:            system_info/category_memory.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_SYSTEM_INFO__CATEGORY_MEMORY_H
#define _ASPIA_SYSTEM_INFO__CATEGORY_MEMORY_H

#include "protocol/category.h"

namespace aspia {

class CategoryMemory : public CategoryInfo
{
public:
    CategoryMemory();

    const char* Name() const final;
    IconId Icon() const final;

    const char* Guid() const final;
    void Parse(Table& table, const std::string& data) final;
    std::string Serialize() final;

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryMemory);
};

} // namespace aspia

#endif // _ASPIA_SYSTEM_INFO__CATEGORY_MEMORY_H