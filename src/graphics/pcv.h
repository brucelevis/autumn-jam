#pragma once
#include <bgfx/bgfx.h>

namespace Graphics {

struct PosColorVertex {
    float x, y, z;
    uint32_t abgr; /* reverse? */

    static void init() {
        decl.begin()
            .add(bgfx::Attrib::Position, 3, bgfx::AttribType::Float)
            .add(bgfx::Attrib::Color0, 4, bgfx::AttribType::Uint8, true)
            .end();
    }

    static bgfx::VertexDecl decl;
};
}
