#include <algorithm>
#include <memory>

#include "UI.hpp"

namespace AudioSync {

std::unique_ptr<UI_Base> UI_Base::getUI() {
    std::unique_ptr<UI_Base> ui;
    return std::move(ui); // TODO: Incorrect return value
}

}

