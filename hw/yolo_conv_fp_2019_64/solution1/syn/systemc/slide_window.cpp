// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "slide_window.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic slide_window::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic slide_window::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> slide_window::ap_ST_fsm_pp0_stage0 = "1";
const sc_lv<3> slide_window::ap_ST_fsm_pp0_stage1 = "10";
const sc_lv<3> slide_window::ap_ST_fsm_pp0_stage2 = "100";
const bool slide_window::ap_const_boolean_1 = true;
const sc_lv<32> slide_window::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool slide_window::ap_const_boolean_0 = false;
const sc_lv<32> slide_window::ap_const_lv32_2 = "10";
const sc_lv<32> slide_window::ap_const_lv32_1 = "1";
const sc_lv<13> slide_window::ap_const_lv13_1A2 = "110100010";
const sc_lv<9> slide_window::ap_const_lv9_1 = "1";
const sc_lv<9> slide_window::ap_const_lv9_2 = "10";

slide_window::slide_window(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln1353_1_fu_183_p2);
    sensitive << ( ap_port_reg_conv_count_V );

    SC_METHOD(thread_add_ln1353_fu_161_p2);
    sensitive << ( ap_port_reg_conv_count_V );

    SC_METHOD(thread_add_ln265_1_fu_171_p2);
    sensitive << ( mul_ln265_reg_252 );
    sensitive << ( zext_ln265_2_fu_167_p1 );

    SC_METHOD(thread_add_ln265_2_fu_193_p2);
    sensitive << ( mul_ln265_reg_252 );
    sensitive << ( zext_ln265_3_fu_189_p1 );

    SC_METHOD(thread_add_ln265_fu_149_p2);
    sensitive << ( mul_ln265_reg_252 );
    sensitive << ( zext_ln265_1_fu_145_p1 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( ap_start );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_pp0_stage1);

    SC_METHOD(thread_ap_block_pp0_stage1_11001);

    SC_METHOD(thread_ap_block_pp0_stage1_subdone);
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_pp0_stage2);

    SC_METHOD(thread_ap_block_pp0_stage2_11001);

    SC_METHOD(thread_ap_block_pp0_stage2_subdone);
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_block_state2_pp0_stage1_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage2_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_enable_reg_pp0_iter0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0_reg );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_idle_pp0_0to0);
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_idle_pp0_1to1);
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage2_11001 );
    sensitive << ( ap_ce );

    SC_METHOD(thread_ap_reset_idle_pp0);
    sensitive << ( ap_start );
    sensitive << ( ap_idle_pp0_0to0 );

    SC_METHOD(thread_ap_return_0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_0_V_l_reg_294 );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_0_V_l_1_reg_299 );

    SC_METHOD(thread_ap_return_2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( line_buff_val_0_V_q0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_return_3);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_1_V_l_reg_319 );

    SC_METHOD(thread_ap_return_4);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_1_V_l_1_reg_324 );

    SC_METHOD(thread_ap_return_5);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( line_buff_val_1_V_q0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_ap_return_6);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_2_V_l_reg_329 );

    SC_METHOD(thread_ap_return_7);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( line_buff_val_2_V_l_1_reg_334 );

    SC_METHOD(thread_ap_return_8);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_ce );
    sensitive << ( line_buff_val_2_V_q0 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_line_buff_val_0_V_address0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( sext_ln265_fu_154_p1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_2_fu_198_p1 );
    sensitive << ( ap_block_pp0_stage2 );

    SC_METHOD(thread_line_buff_val_0_V_address1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_1_fu_176_p1 );

    SC_METHOD(thread_line_buff_val_0_V_ce0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage2_11001 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_line_buff_val_0_V_ce1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_line_buff_val_1_V_address0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( sext_ln265_fu_154_p1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_2_fu_198_p1 );
    sensitive << ( ap_block_pp0_stage2 );

    SC_METHOD(thread_line_buff_val_1_V_address1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_1_fu_176_p1 );

    SC_METHOD(thread_line_buff_val_1_V_ce0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage2_11001 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_line_buff_val_1_V_ce1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_line_buff_val_2_V_address0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( sext_ln265_fu_154_p1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_2_fu_198_p1 );
    sensitive << ( ap_block_pp0_stage2 );

    SC_METHOD(thread_line_buff_val_2_V_address1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( sext_ln265_1_fu_176_p1 );

    SC_METHOD(thread_line_buff_val_2_V_ce0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage2_11001 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_line_buff_val_2_V_ce1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_ce );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_mul_ln265_fu_139_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( mul_ln265_fu_139_p00 );

    SC_METHOD(thread_mul_ln265_fu_139_p00);
    sensitive << ( line_buff_val_V_offset );

    SC_METHOD(thread_mul_ln265_fu_139_p2);
    sensitive << ( mul_ln265_fu_139_p0 );

    SC_METHOD(thread_sext_ln265_1_fu_176_p1);
    sensitive << ( add_ln265_1_fu_171_p2 );

    SC_METHOD(thread_sext_ln265_2_fu_198_p1);
    sensitive << ( add_ln265_2_reg_289 );

    SC_METHOD(thread_sext_ln265_fu_154_p1);
    sensitive << ( add_ln265_fu_149_p2 );

    SC_METHOD(thread_zext_ln265_1_fu_145_p1);
    sensitive << ( ap_port_reg_conv_count_V );

    SC_METHOD(thread_zext_ln265_2_fu_167_p1);
    sensitive << ( add_ln1353_fu_161_p2 );

    SC_METHOD(thread_zext_ln265_3_fu_189_p1);
    sensitive << ( add_ln1353_1_fu_183_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_block_pp0_stage2_subdone );
    sensitive << ( ap_reset_idle_pp0 );
    sensitive << ( ap_idle_pp0_1to1 );
    sensitive << ( ap_block_pp0_stage1_subdone );

    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "slide_window_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
    sc_trace(mVcdFile, conv_count_V, "(port)conv_count_V");
    sc_trace(mVcdFile, line_buff_val_0_V_address0, "(port)line_buff_val_0_V_address0");
    sc_trace(mVcdFile, line_buff_val_0_V_ce0, "(port)line_buff_val_0_V_ce0");
    sc_trace(mVcdFile, line_buff_val_0_V_q0, "(port)line_buff_val_0_V_q0");
    sc_trace(mVcdFile, line_buff_val_0_V_address1, "(port)line_buff_val_0_V_address1");
    sc_trace(mVcdFile, line_buff_val_0_V_ce1, "(port)line_buff_val_0_V_ce1");
    sc_trace(mVcdFile, line_buff_val_0_V_q1, "(port)line_buff_val_0_V_q1");
    sc_trace(mVcdFile, line_buff_val_1_V_address0, "(port)line_buff_val_1_V_address0");
    sc_trace(mVcdFile, line_buff_val_1_V_ce0, "(port)line_buff_val_1_V_ce0");
    sc_trace(mVcdFile, line_buff_val_1_V_q0, "(port)line_buff_val_1_V_q0");
    sc_trace(mVcdFile, line_buff_val_1_V_address1, "(port)line_buff_val_1_V_address1");
    sc_trace(mVcdFile, line_buff_val_1_V_ce1, "(port)line_buff_val_1_V_ce1");
    sc_trace(mVcdFile, line_buff_val_1_V_q1, "(port)line_buff_val_1_V_q1");
    sc_trace(mVcdFile, line_buff_val_2_V_address0, "(port)line_buff_val_2_V_address0");
    sc_trace(mVcdFile, line_buff_val_2_V_ce0, "(port)line_buff_val_2_V_ce0");
    sc_trace(mVcdFile, line_buff_val_2_V_q0, "(port)line_buff_val_2_V_q0");
    sc_trace(mVcdFile, line_buff_val_2_V_address1, "(port)line_buff_val_2_V_address1");
    sc_trace(mVcdFile, line_buff_val_2_V_ce1, "(port)line_buff_val_2_V_ce1");
    sc_trace(mVcdFile, line_buff_val_2_V_q1, "(port)line_buff_val_2_V_q1");
    sc_trace(mVcdFile, line_buff_val_V_offset, "(port)line_buff_val_V_offset");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
    sc_trace(mVcdFile, ap_return_2, "(port)ap_return_2");
    sc_trace(mVcdFile, ap_return_3, "(port)ap_return_3");
    sc_trace(mVcdFile, ap_return_4, "(port)ap_return_4");
    sc_trace(mVcdFile, ap_return_5, "(port)ap_return_5");
    sc_trace(mVcdFile, ap_return_6, "(port)ap_return_6");
    sc_trace(mVcdFile, ap_return_7, "(port)ap_return_7");
    sc_trace(mVcdFile, ap_return_8, "(port)ap_return_8");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage2, "ap_CS_fsm_pp0_stage2");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage2_iter0, "ap_block_state3_pp0_stage2_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage2_11001, "ap_block_pp0_stage2_11001");
    sc_trace(mVcdFile, mul_ln265_fu_139_p2, "mul_ln265_fu_139_p2");
    sc_trace(mVcdFile, mul_ln265_reg_252, "mul_ln265_reg_252");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage1, "ap_CS_fsm_pp0_stage1");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage1_iter0, "ap_block_state2_pp0_stage1_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage1_11001, "ap_block_pp0_stage1_11001");
    sc_trace(mVcdFile, add_ln265_2_fu_193_p2, "add_ln265_2_fu_193_p2");
    sc_trace(mVcdFile, add_ln265_2_reg_289, "add_ln265_2_reg_289");
    sc_trace(mVcdFile, line_buff_val_0_V_l_reg_294, "line_buff_val_0_V_l_reg_294");
    sc_trace(mVcdFile, line_buff_val_0_V_l_1_reg_299, "line_buff_val_0_V_l_1_reg_299");
    sc_trace(mVcdFile, line_buff_val_1_V_l_reg_319, "line_buff_val_1_V_l_reg_319");
    sc_trace(mVcdFile, line_buff_val_1_V_l_1_reg_324, "line_buff_val_1_V_l_1_reg_324");
    sc_trace(mVcdFile, line_buff_val_2_V_l_reg_329, "line_buff_val_2_V_l_reg_329");
    sc_trace(mVcdFile, line_buff_val_2_V_l_1_reg_334, "line_buff_val_2_V_l_1_reg_334");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0_reg, "ap_enable_reg_pp0_iter0_reg");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_block_pp0_stage2_subdone, "ap_block_pp0_stage2_subdone");
    sc_trace(mVcdFile, ap_port_reg_conv_count_V, "ap_port_reg_conv_count_V");
    sc_trace(mVcdFile, sext_ln265_fu_154_p1, "sext_ln265_fu_154_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage1, "ap_block_pp0_stage1");
    sc_trace(mVcdFile, sext_ln265_1_fu_176_p1, "sext_ln265_1_fu_176_p1");
    sc_trace(mVcdFile, sext_ln265_2_fu_198_p1, "sext_ln265_2_fu_198_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage2, "ap_block_pp0_stage2");
    sc_trace(mVcdFile, mul_ln265_fu_139_p0, "mul_ln265_fu_139_p0");
    sc_trace(mVcdFile, zext_ln265_1_fu_145_p1, "zext_ln265_1_fu_145_p1");
    sc_trace(mVcdFile, add_ln265_fu_149_p2, "add_ln265_fu_149_p2");
    sc_trace(mVcdFile, add_ln1353_fu_161_p2, "add_ln1353_fu_161_p2");
    sc_trace(mVcdFile, zext_ln265_2_fu_167_p1, "zext_ln265_2_fu_167_p1");
    sc_trace(mVcdFile, add_ln265_1_fu_171_p2, "add_ln265_1_fu_171_p2");
    sc_trace(mVcdFile, add_ln1353_1_fu_183_p2, "add_ln1353_1_fu_183_p2");
    sc_trace(mVcdFile, zext_ln265_3_fu_189_p1, "zext_ln265_3_fu_189_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0_0to0, "ap_idle_pp0_0to0");
    sc_trace(mVcdFile, ap_reset_idle_pp0, "ap_reset_idle_pp0");
    sc_trace(mVcdFile, ap_idle_pp0_1to1, "ap_idle_pp0_1to1");
    sc_trace(mVcdFile, ap_block_pp0_stage1_subdone, "ap_block_pp0_stage1_subdone");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, mul_ln265_fu_139_p00, "mul_ln265_fu_139_p00");
#endif

    }
}

slide_window::~slide_window() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void slide_window::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        add_ln265_2_reg_289 = add_ln265_2_fu_193_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_port_reg_conv_count_V = conv_count_V.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        line_buff_val_0_V_l_1_reg_299 = line_buff_val_0_V_q1.read();
        line_buff_val_0_V_l_reg_294 = line_buff_val_0_V_q0.read();
        line_buff_val_1_V_l_1_reg_324 = line_buff_val_1_V_q1.read();
        line_buff_val_1_V_l_reg_319 = line_buff_val_1_V_q0.read();
        line_buff_val_2_V_l_1_reg_334 = line_buff_val_2_V_q1.read();
        line_buff_val_2_V_l_reg_329 = line_buff_val_2_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        mul_ln265_reg_252 = mul_ln265_fu_139_p2.read();
    }
}

void slide_window::thread_add_ln1353_1_fu_183_p2() {
    add_ln1353_1_fu_183_p2 = (!ap_port_reg_conv_count_V.read().is_01() || !ap_const_lv9_2.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_port_reg_conv_count_V.read()) + sc_biguint<9>(ap_const_lv9_2));
}

void slide_window::thread_add_ln1353_fu_161_p2() {
    add_ln1353_fu_161_p2 = (!ap_port_reg_conv_count_V.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_port_reg_conv_count_V.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void slide_window::thread_add_ln265_1_fu_171_p2() {
    add_ln265_1_fu_171_p2 = (!mul_ln265_reg_252.read().is_01() || !zext_ln265_2_fu_167_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(mul_ln265_reg_252.read()) + sc_biguint<13>(zext_ln265_2_fu_167_p1.read()));
}

void slide_window::thread_add_ln265_2_fu_193_p2() {
    add_ln265_2_fu_193_p2 = (!mul_ln265_reg_252.read().is_01() || !zext_ln265_3_fu_189_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(mul_ln265_reg_252.read()) + sc_biguint<13>(zext_ln265_3_fu_189_p1.read()));
}

void slide_window::thread_add_ln265_fu_149_p2() {
    add_ln265_fu_149_p2 = (!mul_ln265_reg_252.read().is_01() || !zext_ln265_1_fu_145_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(mul_ln265_reg_252.read()) + sc_biguint<13>(zext_ln265_1_fu_145_p1.read()));
}

void slide_window::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void slide_window::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void slide_window::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void slide_window::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void slide_window::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())));
}

void slide_window::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void slide_window::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_0);
}

void slide_window::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void slide_window::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void slide_window::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void slide_window::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void slide_window::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void slide_window::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void slide_window::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void slide_window::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void slide_window::thread_ap_idle_pp0_1to1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read())) {
        ap_idle_pp0_1to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to1 = ap_const_logic_0;
    }
}

void slide_window::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void slide_window::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void slide_window::thread_ap_return_0() {
    ap_return_0 = line_buff_val_0_V_l_reg_294.read();
}

void slide_window::thread_ap_return_1() {
    ap_return_1 = line_buff_val_0_V_l_1_reg_299.read();
}

void slide_window::thread_ap_return_2() {
    ap_return_2 = line_buff_val_0_V_q0.read();
}

void slide_window::thread_ap_return_3() {
    ap_return_3 = line_buff_val_1_V_l_reg_319.read();
}

void slide_window::thread_ap_return_4() {
    ap_return_4 = line_buff_val_1_V_l_1_reg_324.read();
}

void slide_window::thread_ap_return_5() {
    ap_return_5 = line_buff_val_1_V_q0.read();
}

void slide_window::thread_ap_return_6() {
    ap_return_6 = line_buff_val_2_V_l_reg_329.read();
}

void slide_window::thread_ap_return_7() {
    ap_return_7 = line_buff_val_2_V_l_1_reg_334.read();
}

void slide_window::thread_ap_return_8() {
    ap_return_8 = line_buff_val_2_V_q0.read();
}

void slide_window::thread_line_buff_val_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            line_buff_val_0_V_address0 =  (sc_lv<12>) (sext_ln265_2_fu_198_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            line_buff_val_0_V_address0 =  (sc_lv<12>) (sext_ln265_fu_154_p1.read());
        } else {
            line_buff_val_0_V_address0 = "XXXXXXXXXXXX";
        }
    } else {
        line_buff_val_0_V_address0 = "XXXXXXXXXXXX";
    }
}

void slide_window::thread_line_buff_val_0_V_address1() {
    line_buff_val_0_V_address1 =  (sc_lv<12>) (sext_ln265_1_fu_176_p1.read());
}

void slide_window::thread_line_buff_val_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        line_buff_val_0_V_ce0 = ap_const_logic_1;
    } else {
        line_buff_val_0_V_ce0 = ap_const_logic_0;
    }
}

void slide_window::thread_line_buff_val_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        line_buff_val_0_V_ce1 = ap_const_logic_1;
    } else {
        line_buff_val_0_V_ce1 = ap_const_logic_0;
    }
}

void slide_window::thread_line_buff_val_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            line_buff_val_1_V_address0 =  (sc_lv<12>) (sext_ln265_2_fu_198_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            line_buff_val_1_V_address0 =  (sc_lv<12>) (sext_ln265_fu_154_p1.read());
        } else {
            line_buff_val_1_V_address0 = "XXXXXXXXXXXX";
        }
    } else {
        line_buff_val_1_V_address0 = "XXXXXXXXXXXX";
    }
}

void slide_window::thread_line_buff_val_1_V_address1() {
    line_buff_val_1_V_address1 =  (sc_lv<12>) (sext_ln265_1_fu_176_p1.read());
}

void slide_window::thread_line_buff_val_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        line_buff_val_1_V_ce0 = ap_const_logic_1;
    } else {
        line_buff_val_1_V_ce0 = ap_const_logic_0;
    }
}

void slide_window::thread_line_buff_val_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        line_buff_val_1_V_ce1 = ap_const_logic_1;
    } else {
        line_buff_val_1_V_ce1 = ap_const_logic_0;
    }
}

void slide_window::thread_line_buff_val_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
            line_buff_val_2_V_address0 =  (sc_lv<12>) (sext_ln265_2_fu_198_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
            line_buff_val_2_V_address0 =  (sc_lv<12>) (sext_ln265_fu_154_p1.read());
        } else {
            line_buff_val_2_V_address0 = "XXXXXXXXXXXX";
        }
    } else {
        line_buff_val_2_V_address0 = "XXXXXXXXXXXX";
    }
}

void slide_window::thread_line_buff_val_2_V_address1() {
    line_buff_val_2_V_address1 =  (sc_lv<12>) (sext_ln265_1_fu_176_p1.read());
}

void slide_window::thread_line_buff_val_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)))) {
        line_buff_val_2_V_ce0 = ap_const_logic_1;
    } else {
        line_buff_val_2_V_ce0 = ap_const_logic_0;
    }
}

void slide_window::thread_line_buff_val_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_ce.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        line_buff_val_2_V_ce1 = ap_const_logic_1;
    } else {
        line_buff_val_2_V_ce1 = ap_const_logic_0;
    }
}

void slide_window::thread_mul_ln265_fu_139_p0() {
    mul_ln265_fu_139_p0 =  (sc_lv<4>) (mul_ln265_fu_139_p00.read());
}

void slide_window::thread_mul_ln265_fu_139_p00() {
    mul_ln265_fu_139_p00 = esl_zext<13,4>(line_buff_val_V_offset.read());
}

void slide_window::thread_mul_ln265_fu_139_p2() {
    mul_ln265_fu_139_p2 = (!mul_ln265_fu_139_p0.read().is_01() || !ap_const_lv13_1A2.is_01())? sc_lv<13>(): sc_biguint<4>(mul_ln265_fu_139_p0.read()) * sc_biguint<13>(ap_const_lv13_1A2);
}

void slide_window::thread_sext_ln265_1_fu_176_p1() {
    sext_ln265_1_fu_176_p1 = esl_sext<64,13>(add_ln265_1_fu_171_p2.read());
}

void slide_window::thread_sext_ln265_2_fu_198_p1() {
    sext_ln265_2_fu_198_p1 = esl_sext<64,13>(add_ln265_2_reg_289.read());
}

void slide_window::thread_sext_ln265_fu_154_p1() {
    sext_ln265_fu_154_p1 = esl_sext<64,13>(add_ln265_fu_149_p2.read());
}

void slide_window::thread_zext_ln265_1_fu_145_p1() {
    zext_ln265_1_fu_145_p1 = esl_zext<13,9>(ap_port_reg_conv_count_V.read());
}

void slide_window::thread_zext_ln265_2_fu_167_p1() {
    zext_ln265_2_fu_167_p1 = esl_zext<13,9>(add_ln1353_fu_161_p2.read());
}

void slide_window::thread_zext_ln265_3_fu_189_p1() {
    zext_ln265_3_fu_189_p1 = esl_zext<13,9>(add_ln1353_1_fu_183_p2.read());
}

void slide_window::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}
