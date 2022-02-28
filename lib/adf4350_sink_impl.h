/* -*- c++ -*- */
/*
 * Copyright 2022 Analog Devices Inc..
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_M2K_ADF4350_SINK_IMPL_H
#define INCLUDED_M2K_ADF4350_SINK_IMPL_H

#include <gnuradio/m2k/adf4350_sink.h>
#include <pmt/pmt.h>

extern "C" {
#include "drivers/adf4350.h"
}

namespace gr {
  namespace m2k {

    class adf4350_sink_impl : public adf4350_sink
    {
	    std::string d_uri;
	    adf4350_dev *d_adf4350_device;

    public:
	    adf4350_sink_impl(const std::string &uri,
					      uint8_t clock,
					      uint8_t mosi,
					      uint8_t miso,
					      uint8_t chip_select,
					      uint32_t clkin,
					      uint32_t channel_spacing,
					      uint32_t power_up_frequency,
					      uint32_t reference_div_factor,
					      uint8_t reference_doubler_enable,
					      uint8_t reference_div2_enable,

					      /* r2_user_settings */
					      uint8_t phase_detector_polarity_positive_enable,
					      uint8_t lock_detect_precision_6ns_enable,
					      uint8_t lock_detect_function_integer_n_enable,
					      uint32_t charge_pump_current,
					      uint32_t muxout_select,
					      uint8_t low_spur_mode_enable,

					      /* r3_user_settings */
					      uint8_t cycle_slip_reduction_enable,
					      uint8_t charge_cancellation_enable,
					      uint8_t anti_backlash_3ns_enable,
					      uint8_t band_select_clock_mode_high_enable,
					      uint32_t clk_divider_12bit,
					      uint32_t clk_divider_mode,

					      /* r4_user_settings */
					      uint8_t aux_output_enable,
					      uint8_t aux_output_fundamental_enable,
					      uint8_t mute_till_lock_enable,
					      uint32_t output_power,
					      uint32_t aux_output_power);

	    ~adf4350_sink_impl();

	    void write_attribute(pmt::pmt_t pdu);

	};
  } // namespace m2k
} // namespace gr

#endif /* INCLUDED_M2K_ADF4350_SINK_IMPL_H */
