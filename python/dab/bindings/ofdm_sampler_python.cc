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
/* BINDTOOL_HEADER_FILE(ofdm_sampler.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(343e68a0b1f7e3df2bc3f6e97c3e55ec)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <dab/ofdm_sampler.h>
// pydoc.h is automatically generated in the build directory
#include <ofdm_sampler_pydoc.h>

void bind_ofdm_sampler(py::module& m)
{

    using ofdm_sampler    = ::gr::dab::ofdm_sampler;


    py::class_<ofdm_sampler, gr::block, gr::basic_block,
        std::shared_ptr<ofdm_sampler>>(m, "ofdm_sampler", D(ofdm_sampler))

        .def(py::init(&ofdm_sampler::make),
           py::arg("fft_length"),
           py::arg("cp_length"),
           py::arg("symbols_per_frame"),
           py::arg("gap"),
           D(ofdm_sampler,make)
        )
        



        ;




}








