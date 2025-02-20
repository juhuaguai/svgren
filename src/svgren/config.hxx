/*
The MIT License (MIT)

Copyright (c) 2015-2023 Ivan Gagis <igagis@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

/* ================ LICENSE END ================ */

#pragma once

// drawing backend variants
// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define SVGREN_BACKEND_CAIRO 1
// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define SVGREN_BACKEND_AGG 2
// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define SVGREN_BACKEND_SKIA 3

#ifndef SVGREN_BACKEND
#	define SVGREN_BACKEND SVGREN_BACKEND_AGG
#endif

#include <rasterimage/image.hpp>
#include <svgdom/config.hpp>

namespace svgren {

using real = svgdom::real;

using image_type = rasterimage::image<uint8_t, 4>;

// TODO: image_type::pixel_type
using pixel = uint32_t;

} // namespace svgren
