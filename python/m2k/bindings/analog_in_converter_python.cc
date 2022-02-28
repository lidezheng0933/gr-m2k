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
/* BINDTOOL_HEADER_FILE(analog_in_converter.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7682a4c664184c4a2a5c33b3693f7db1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/m2k/analog_in_converter.h>
// pydoc.h is automatically generated in the build directory
#include <analog_in_converter_pydoc.h>

void bind_analog_in_converter(py::module& m)
{

    using analog_in_converter    = ::gr::m2k::analog_in_converter;


    py::class_<analog_in_converter, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<analog_in_converter>>(m, "analog_in_converter", D(analog_in_converter))

        .def(py::init(&analog_in_converter::make),
           py::arg("uri"),
           D(analog_in_converter,make)
        )
        




        
        .def_static("make_from",&analog_in_converter::make_from,       
            py::arg("context"),
            D(analog_in_converter,make_from)
        )

        ;




}








