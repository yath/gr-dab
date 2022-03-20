/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(reed_solomon_decode_bb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8440fac7171bc21013d41a62befad3fe)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <dab/reed_solomon_decode_bb.h>
// pydoc.h is automatically generated in the build directory
#include <reed_solomon_decode_bb_pydoc.h>

void bind_reed_solomon_decode_bb(py::module& m)
{

    using reed_solomon_decode_bb    = ::gr::dab::reed_solomon_decode_bb;


    py::class_<reed_solomon_decode_bb, gr::block, gr::basic_block,
        std::shared_ptr<reed_solomon_decode_bb>>(m, "reed_solomon_decode_bb", D(reed_solomon_decode_bb))

        .def(py::init(&reed_solomon_decode_bb::make),
           py::arg("bit_rate_n"),
           D(reed_solomon_decode_bb,make)
        )
        




        
        .def("get_corrected_errors",&reed_solomon_decode_bb::get_corrected_errors,       
            D(reed_solomon_decode_bb,get_corrected_errors)
        )

        ;




}








