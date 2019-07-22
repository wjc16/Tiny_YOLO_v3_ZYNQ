// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "post_process_unit.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic post_process_unit::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic post_process_unit::ap_const_logic_0 = sc_dt::Log_0;
const bool post_process_unit::ap_const_boolean_1 = true;
const bool post_process_unit::ap_const_boolean_0 = false;
const sc_lv<1> post_process_unit::ap_const_lv1_1 = "1";
const sc_lv<32> post_process_unit::ap_const_lv32_10 = "10000";
const sc_lv<32> post_process_unit::ap_const_lv32_F = "1111";
const sc_lv<16> post_process_unit::ap_const_lv16_7FFF = "111111111111111";
const sc_lv<16> post_process_unit::ap_const_lv16_8000 = "1000000000000000";
const sc_lv<32> post_process_unit::ap_const_lv32_15 = "10101";
const sc_lv<32> post_process_unit::ap_const_lv32_8 = "1000";
const sc_lv<7> post_process_unit::ap_const_lv7_0 = "0000000";
const sc_lv<32> post_process_unit::ap_const_lv32_7 = "111";
const sc_lv<32> post_process_unit::ap_const_lv32_E = "1110";
const sc_lv<32> post_process_unit::ap_const_lv32_14 = "10100";
const sc_lv<22> post_process_unit::ap_const_lv22_1A = "11010";

post_process_unit::post_process_unit(sc_module_name name) : sc_module(name), mVcdFile(0) {
    yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1 = new yolo_acc_top_mul_mul_6ns_16s_22_1_0<1,1,6,16,22>("yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1");
    yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1->din0(r_V_fu_355_p0);
    yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1->din1(activated_output_V_reg_380);
    yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1->dout(r_V_fu_355_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_activated_output_V_fu_152_p3);
    sensitive << ( or_ln340_fu_130_p2 );
    sensitive << ( select_ln340_fu_136_p3 );
    sensitive << ( select_ln388_fu_144_p3 );

    SC_METHOD(thread_and_ln415_fu_225_p2);
    sensitive << ( tmp_13_fu_218_p3 );
    sensitive << ( or_ln412_fu_212_p2 );

    SC_METHOD(thread_and_ln781_fu_307_p2);
    sensitive << ( Range2_all_ones_reg_406 );
    sensitive << ( carry_1_fu_259_p2 );

    SC_METHOD(thread_and_ln786_fu_312_p2);
    sensitive << ( p_Result_10_fu_264_p3 );
    sensitive << ( deleted_ones_fu_302_p2 );

    SC_METHOD(thread_and_ln97_1_fu_336_p2);
    sensitive << ( and_ln97_fu_332_p2 );
    sensitive << ( tmp_fu_180_p3 );

    SC_METHOD(thread_and_ln97_fu_332_p2);
    sensitive << ( leaky_V_read_reg_364_pp0_iter1_reg );
    sensitive << ( bias_en_V_read_reg_369_pp0_iter1_reg );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_state1_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter2);

    SC_METHOD(thread_ap_return);
    sensitive << ( select_ln97_1_fu_349_p3 );
    sensitive << ( ap_ce_reg );
    sensitive << ( ap_return_int_reg );

    SC_METHOD(thread_carry_1_fu_259_p2);
    sensitive << ( p_Result_9_reg_400 );
    sensitive << ( xor_ln416_1_fu_253_p2 );

    SC_METHOD(thread_deleted_ones_fu_302_p2);
    sensitive << ( Range2_all_ones_reg_406 );
    sensitive << ( or_ln416_fu_296_p2 );

    SC_METHOD(thread_lhs_V_fu_70_p0);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( data_in_V_int_reg );

    SC_METHOD(thread_lhs_V_fu_70_p1);
    sensitive << ( lhs_V_fu_70_p0 );

    SC_METHOD(thread_or_ln340_fu_130_p2);
    sensitive << ( p_Result_8_fu_98_p3 );
    sensitive << ( xor_ln340_fu_124_p2 );

    SC_METHOD(thread_or_ln412_fu_212_p2);
    sensitive << ( r_fu_207_p2 );
    sensitive << ( tmp_11_fu_200_p3 );

    SC_METHOD(thread_or_ln416_1_fu_290_p2);
    sensitive << ( tmp_14_fu_245_p3 );
    sensitive << ( xor_ln416_2_fu_285_p2 );

    SC_METHOD(thread_or_ln416_fu_296_p2);
    sensitive << ( or_ln416_1_fu_290_p2 );
    sensitive << ( xor_ln779_fu_279_p2 );

    SC_METHOD(thread_or_ln786_fu_318_p2);
    sensitive << ( and_ln781_fu_307_p2 );
    sensitive << ( and_ln786_fu_312_p2 );

    SC_METHOD(thread_p_Result_10_fu_264_p3);
    sensitive << ( p_Val2_18_fu_235_p2 );

    SC_METHOD(thread_p_Result_8_fu_98_p3);
    sensitive << ( p_Val2_16_fu_92_p2 );

    SC_METHOD(thread_p_Result_s_fu_84_p3);
    sensitive << ( ret_V_fu_78_p2 );

    SC_METHOD(thread_p_Val2_16_fu_92_p0);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( data_in_V_int_reg );

    SC_METHOD(thread_p_Val2_16_fu_92_p1);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( bias_V_int_reg );

    SC_METHOD(thread_p_Val2_16_fu_92_p2);
    sensitive << ( p_Val2_16_fu_92_p0 );
    sensitive << ( p_Val2_16_fu_92_p1 );

    SC_METHOD(thread_p_Val2_18_fu_235_p2);
    sensitive << ( sext_ln713_fu_196_p1 );
    sensitive << ( zext_ln415_fu_231_p1 );

    SC_METHOD(thread_r_V_fu_355_p0);
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_r_fu_207_p2);
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( bias_en_V_read_reg_369_pp0_iter1_reg );
    sensitive << ( trunc_ln718_reg_395 );
    sensitive << ( ap_ce_reg );

    SC_METHOD(thread_ret_V_fu_78_p2);
    sensitive << ( rhs_V_fu_74_p1 );
    sensitive << ( lhs_V_fu_70_p1 );

    SC_METHOD(thread_rhs_V_fu_74_p0);
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( bias_V_int_reg );

    SC_METHOD(thread_rhs_V_fu_74_p1);
    sensitive << ( rhs_V_fu_74_p0 );

    SC_METHOD(thread_select_ln340_4_fu_324_p3);
    sensitive << ( or_ln786_fu_318_p2 );
    sensitive << ( sext_ln415_fu_241_p1 );

    SC_METHOD(thread_select_ln340_fu_136_p3);
    sensitive << ( p_Val2_16_fu_92_p2 );
    sensitive << ( xor_ln340_8_fu_118_p2 );

    SC_METHOD(thread_select_ln388_fu_144_p3);
    sensitive << ( p_Val2_16_fu_92_p2 );
    sensitive << ( underflow_fu_112_p2 );

    SC_METHOD(thread_select_ln97_1_fu_349_p3);
    sensitive << ( bias_en_V_read_reg_369_pp0_iter1_reg );
    sensitive << ( data_in_V_read_reg_375_pp0_iter1_reg );
    sensitive << ( select_ln97_fu_342_p3 );

    SC_METHOD(thread_select_ln97_fu_342_p3);
    sensitive << ( activated_output_V_reg_380_pp0_iter1_reg );
    sensitive << ( and_ln97_1_fu_336_p2 );
    sensitive << ( select_ln340_4_fu_324_p3 );

    SC_METHOD(thread_sext_ln415_fu_241_p1);
    sensitive << ( p_Val2_18_fu_235_p2 );

    SC_METHOD(thread_sext_ln713_fu_196_p1);
    sensitive << ( trunc_ln_fu_187_p4 );

    SC_METHOD(thread_tmp_11_fu_200_p3);
    sensitive << ( r_V_reg_387 );

    SC_METHOD(thread_tmp_13_fu_218_p3);
    sensitive << ( r_V_reg_387 );

    SC_METHOD(thread_tmp_14_fu_245_p3);
    sensitive << ( p_Val2_18_fu_235_p2 );

    SC_METHOD(thread_tmp_17_fu_272_p3);
    sensitive << ( r_V_reg_387 );

    SC_METHOD(thread_tmp_fu_180_p3);
    sensitive << ( activated_output_V_reg_380_pp0_iter1_reg );

    SC_METHOD(thread_trunc_ln718_fu_163_p1);
    sensitive << ( r_V_fu_355_p2 );

    SC_METHOD(thread_trunc_ln_fu_187_p4);
    sensitive << ( r_V_reg_387 );

    SC_METHOD(thread_underflow_fu_112_p2);
    sensitive << ( p_Result_s_fu_84_p3 );
    sensitive << ( xor_ln786_fu_106_p2 );

    SC_METHOD(thread_xor_ln340_8_fu_118_p2);
    sensitive << ( p_Result_8_fu_98_p3 );
    sensitive << ( p_Result_s_fu_84_p3 );

    SC_METHOD(thread_xor_ln340_fu_124_p2);
    sensitive << ( p_Result_s_fu_84_p3 );

    SC_METHOD(thread_xor_ln416_1_fu_253_p2);
    sensitive << ( tmp_14_fu_245_p3 );

    SC_METHOD(thread_xor_ln416_2_fu_285_p2);
    sensitive << ( p_Result_9_reg_400 );

    SC_METHOD(thread_xor_ln779_fu_279_p2);
    sensitive << ( tmp_17_fu_272_p3 );

    SC_METHOD(thread_xor_ln786_fu_106_p2);
    sensitive << ( p_Result_8_fu_98_p3 );

    SC_METHOD(thread_zext_ln415_fu_231_p1);
    sensitive << ( and_ln415_fu_225_p2 );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "post_process_unit_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, data_in_V, "(port)data_in_V");
    sc_trace(mVcdFile, bias_V, "(port)bias_V");
    sc_trace(mVcdFile, bias_en_V, "(port)bias_en_V");
    sc_trace(mVcdFile, leaky_V, "(port)leaky_V");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
    sc_trace(mVcdFile, ap_ce, "(port)ap_ce");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, leaky_V_read_reg_364, "leaky_V_read_reg_364");
    sc_trace(mVcdFile, ap_block_state1_pp0_stage0_iter0, "ap_block_state1_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter1, "ap_block_state2_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter2, "ap_block_state3_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, leaky_V_read_reg_364_pp0_iter1_reg, "leaky_V_read_reg_364_pp0_iter1_reg");
    sc_trace(mVcdFile, bias_en_V_read_reg_369, "bias_en_V_read_reg_369");
    sc_trace(mVcdFile, bias_en_V_read_reg_369_pp0_iter1_reg, "bias_en_V_read_reg_369_pp0_iter1_reg");
    sc_trace(mVcdFile, data_in_V_read_reg_375, "data_in_V_read_reg_375");
    sc_trace(mVcdFile, data_in_V_read_reg_375_pp0_iter1_reg, "data_in_V_read_reg_375_pp0_iter1_reg");
    sc_trace(mVcdFile, activated_output_V_fu_152_p3, "activated_output_V_fu_152_p3");
    sc_trace(mVcdFile, activated_output_V_reg_380, "activated_output_V_reg_380");
    sc_trace(mVcdFile, activated_output_V_reg_380_pp0_iter1_reg, "activated_output_V_reg_380_pp0_iter1_reg");
    sc_trace(mVcdFile, r_V_fu_355_p2, "r_V_fu_355_p2");
    sc_trace(mVcdFile, r_V_reg_387, "r_V_reg_387");
    sc_trace(mVcdFile, trunc_ln718_fu_163_p1, "trunc_ln718_fu_163_p1");
    sc_trace(mVcdFile, trunc_ln718_reg_395, "trunc_ln718_reg_395");
    sc_trace(mVcdFile, p_Result_9_reg_400, "p_Result_9_reg_400");
    sc_trace(mVcdFile, Range2_all_ones_reg_406, "Range2_all_ones_reg_406");
    sc_trace(mVcdFile, lhs_V_fu_70_p0, "lhs_V_fu_70_p0");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, rhs_V_fu_74_p0, "rhs_V_fu_74_p0");
    sc_trace(mVcdFile, rhs_V_fu_74_p1, "rhs_V_fu_74_p1");
    sc_trace(mVcdFile, lhs_V_fu_70_p1, "lhs_V_fu_70_p1");
    sc_trace(mVcdFile, ret_V_fu_78_p2, "ret_V_fu_78_p2");
    sc_trace(mVcdFile, p_Val2_16_fu_92_p0, "p_Val2_16_fu_92_p0");
    sc_trace(mVcdFile, p_Val2_16_fu_92_p1, "p_Val2_16_fu_92_p1");
    sc_trace(mVcdFile, p_Val2_16_fu_92_p2, "p_Val2_16_fu_92_p2");
    sc_trace(mVcdFile, p_Result_8_fu_98_p3, "p_Result_8_fu_98_p3");
    sc_trace(mVcdFile, p_Result_s_fu_84_p3, "p_Result_s_fu_84_p3");
    sc_trace(mVcdFile, xor_ln786_fu_106_p2, "xor_ln786_fu_106_p2");
    sc_trace(mVcdFile, xor_ln340_fu_124_p2, "xor_ln340_fu_124_p2");
    sc_trace(mVcdFile, xor_ln340_8_fu_118_p2, "xor_ln340_8_fu_118_p2");
    sc_trace(mVcdFile, underflow_fu_112_p2, "underflow_fu_112_p2");
    sc_trace(mVcdFile, or_ln340_fu_130_p2, "or_ln340_fu_130_p2");
    sc_trace(mVcdFile, select_ln340_fu_136_p3, "select_ln340_fu_136_p3");
    sc_trace(mVcdFile, select_ln388_fu_144_p3, "select_ln388_fu_144_p3");
    sc_trace(mVcdFile, trunc_ln_fu_187_p4, "trunc_ln_fu_187_p4");
    sc_trace(mVcdFile, r_fu_207_p2, "r_fu_207_p2");
    sc_trace(mVcdFile, tmp_11_fu_200_p3, "tmp_11_fu_200_p3");
    sc_trace(mVcdFile, tmp_13_fu_218_p3, "tmp_13_fu_218_p3");
    sc_trace(mVcdFile, or_ln412_fu_212_p2, "or_ln412_fu_212_p2");
    sc_trace(mVcdFile, and_ln415_fu_225_p2, "and_ln415_fu_225_p2");
    sc_trace(mVcdFile, sext_ln713_fu_196_p1, "sext_ln713_fu_196_p1");
    sc_trace(mVcdFile, zext_ln415_fu_231_p1, "zext_ln415_fu_231_p1");
    sc_trace(mVcdFile, p_Val2_18_fu_235_p2, "p_Val2_18_fu_235_p2");
    sc_trace(mVcdFile, tmp_14_fu_245_p3, "tmp_14_fu_245_p3");
    sc_trace(mVcdFile, xor_ln416_1_fu_253_p2, "xor_ln416_1_fu_253_p2");
    sc_trace(mVcdFile, tmp_17_fu_272_p3, "tmp_17_fu_272_p3");
    sc_trace(mVcdFile, xor_ln416_2_fu_285_p2, "xor_ln416_2_fu_285_p2");
    sc_trace(mVcdFile, or_ln416_1_fu_290_p2, "or_ln416_1_fu_290_p2");
    sc_trace(mVcdFile, xor_ln779_fu_279_p2, "xor_ln779_fu_279_p2");
    sc_trace(mVcdFile, or_ln416_fu_296_p2, "or_ln416_fu_296_p2");
    sc_trace(mVcdFile, carry_1_fu_259_p2, "carry_1_fu_259_p2");
    sc_trace(mVcdFile, p_Result_10_fu_264_p3, "p_Result_10_fu_264_p3");
    sc_trace(mVcdFile, deleted_ones_fu_302_p2, "deleted_ones_fu_302_p2");
    sc_trace(mVcdFile, and_ln781_fu_307_p2, "and_ln781_fu_307_p2");
    sc_trace(mVcdFile, and_ln786_fu_312_p2, "and_ln786_fu_312_p2");
    sc_trace(mVcdFile, or_ln786_fu_318_p2, "or_ln786_fu_318_p2");
    sc_trace(mVcdFile, sext_ln415_fu_241_p1, "sext_ln415_fu_241_p1");
    sc_trace(mVcdFile, and_ln97_fu_332_p2, "and_ln97_fu_332_p2");
    sc_trace(mVcdFile, tmp_fu_180_p3, "tmp_fu_180_p3");
    sc_trace(mVcdFile, and_ln97_1_fu_336_p2, "and_ln97_1_fu_336_p2");
    sc_trace(mVcdFile, select_ln340_4_fu_324_p3, "select_ln340_4_fu_324_p3");
    sc_trace(mVcdFile, select_ln97_fu_342_p3, "select_ln97_fu_342_p3");
    sc_trace(mVcdFile, r_V_fu_355_p0, "r_V_fu_355_p0");
    sc_trace(mVcdFile, select_ln97_1_fu_349_p3, "select_ln97_1_fu_349_p3");
    sc_trace(mVcdFile, ap_ce_reg, "ap_ce_reg");
    sc_trace(mVcdFile, data_in_V_int_reg, "data_in_V_int_reg");
    sc_trace(mVcdFile, bias_V_int_reg, "bias_V_int_reg");
    sc_trace(mVcdFile, bias_en_V_int_reg, "bias_en_V_int_reg");
    sc_trace(mVcdFile, leaky_V_int_reg, "leaky_V_int_reg");
    sc_trace(mVcdFile, ap_return_int_reg, "ap_return_int_reg");
#endif

    }
}

post_process_unit::~post_process_unit() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete yolo_acc_top_mul_mul_6ns_16s_22_1_0_U1;
}

void post_process_unit::thread_ap_clk_no_reset_() {
    ap_ce_reg = ap_ce.read();
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(bias_en_V_read_reg_369.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_ce_reg.read(), ap_const_logic_1))) {
        Range2_all_ones_reg_406 = r_V_fu_355_p2.read().range(21, 21);
        p_Result_9_reg_400 = r_V_fu_355_p2.read().range(21, 21);
        r_V_reg_387 = r_V_fu_355_p2.read();
        trunc_ln718_reg_395 = trunc_ln718_fu_163_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_ce_reg.read(), ap_const_logic_1))) {
        activated_output_V_reg_380 = activated_output_V_fu_152_p3.read();
        activated_output_V_reg_380_pp0_iter1_reg = activated_output_V_reg_380.read();
        bias_en_V_read_reg_369 = bias_en_V_int_reg.read();
        bias_en_V_read_reg_369_pp0_iter1_reg = bias_en_V_read_reg_369.read();
        data_in_V_read_reg_375 = data_in_V_int_reg.read();
        data_in_V_read_reg_375_pp0_iter1_reg = data_in_V_read_reg_375.read();
        leaky_V_read_reg_364 = leaky_V_int_reg.read();
        leaky_V_read_reg_364_pp0_iter1_reg = leaky_V_read_reg_364.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return_int_reg = select_ln97_1_fu_349_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce.read())) {
        bias_V_int_reg = bias_V.read();
        bias_en_V_int_reg = bias_en_V.read();
        data_in_V_int_reg = data_in_V.read();
        leaky_V_int_reg = leaky_V.read();
    }
}

void post_process_unit::thread_activated_output_V_fu_152_p3() {
    activated_output_V_fu_152_p3 = (!or_ln340_fu_130_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln340_fu_130_p2.read()[0].to_bool())? select_ln340_fu_136_p3.read(): select_ln388_fu_144_p3.read());
}

void post_process_unit::thread_and_ln415_fu_225_p2() {
    and_ln415_fu_225_p2 = (tmp_13_fu_218_p3.read() & or_ln412_fu_212_p2.read());
}

void post_process_unit::thread_and_ln781_fu_307_p2() {
    and_ln781_fu_307_p2 = (carry_1_fu_259_p2.read() & Range2_all_ones_reg_406.read());
}

void post_process_unit::thread_and_ln786_fu_312_p2() {
    and_ln786_fu_312_p2 = (p_Result_10_fu_264_p3.read() & deleted_ones_fu_302_p2.read());
}

void post_process_unit::thread_and_ln97_1_fu_336_p2() {
    and_ln97_1_fu_336_p2 = (and_ln97_fu_332_p2.read() & tmp_fu_180_p3.read());
}

void post_process_unit::thread_and_ln97_fu_332_p2() {
    and_ln97_fu_332_p2 = (leaky_V_read_reg_364_pp0_iter1_reg.read() & bias_en_V_read_reg_369_pp0_iter1_reg.read());
}

void post_process_unit::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void post_process_unit::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void post_process_unit::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void post_process_unit::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void post_process_unit::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void post_process_unit::thread_ap_return() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_ce_reg.read())) {
        ap_return = ap_return_int_reg.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_ce_reg.read())) {
        ap_return = select_ln97_1_fu_349_p3.read();
    }
}

void post_process_unit::thread_carry_1_fu_259_p2() {
    carry_1_fu_259_p2 = (p_Result_9_reg_400.read() & xor_ln416_1_fu_253_p2.read());
}

void post_process_unit::thread_deleted_ones_fu_302_p2() {
    deleted_ones_fu_302_p2 = (Range2_all_ones_reg_406.read() & or_ln416_fu_296_p2.read());
}

void post_process_unit::thread_lhs_V_fu_70_p0() {
    lhs_V_fu_70_p0 = data_in_V_int_reg.read();
}

void post_process_unit::thread_lhs_V_fu_70_p1() {
    lhs_V_fu_70_p1 = esl_sext<17,16>(lhs_V_fu_70_p0.read());
}

void post_process_unit::thread_or_ln340_fu_130_p2() {
    or_ln340_fu_130_p2 = (p_Result_8_fu_98_p3.read() | xor_ln340_fu_124_p2.read());
}

void post_process_unit::thread_or_ln412_fu_212_p2() {
    or_ln412_fu_212_p2 = (r_fu_207_p2.read() | tmp_11_fu_200_p3.read());
}

void post_process_unit::thread_or_ln416_1_fu_290_p2() {
    or_ln416_1_fu_290_p2 = (tmp_14_fu_245_p3.read() | xor_ln416_2_fu_285_p2.read());
}

void post_process_unit::thread_or_ln416_fu_296_p2() {
    or_ln416_fu_296_p2 = (or_ln416_1_fu_290_p2.read() | xor_ln779_fu_279_p2.read());
}

void post_process_unit::thread_or_ln786_fu_318_p2() {
    or_ln786_fu_318_p2 = (and_ln781_fu_307_p2.read() | and_ln786_fu_312_p2.read());
}

void post_process_unit::thread_p_Result_10_fu_264_p3() {
    p_Result_10_fu_264_p3 = p_Val2_18_fu_235_p2.read().range(14, 14);
}

void post_process_unit::thread_p_Result_8_fu_98_p3() {
    p_Result_8_fu_98_p3 = p_Val2_16_fu_92_p2.read().range(15, 15);
}

void post_process_unit::thread_p_Result_s_fu_84_p3() {
    p_Result_s_fu_84_p3 = ret_V_fu_78_p2.read().range(16, 16);
}

void post_process_unit::thread_p_Val2_16_fu_92_p0() {
    p_Val2_16_fu_92_p0 = data_in_V_int_reg.read();
}

void post_process_unit::thread_p_Val2_16_fu_92_p1() {
    p_Val2_16_fu_92_p1 = bias_V_int_reg.read();
}

void post_process_unit::thread_p_Val2_16_fu_92_p2() {
    p_Val2_16_fu_92_p2 = (!p_Val2_16_fu_92_p0.read().is_01() || !p_Val2_16_fu_92_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(p_Val2_16_fu_92_p0.read()) + sc_bigint<16>(p_Val2_16_fu_92_p1.read()));
}

void post_process_unit::thread_p_Val2_18_fu_235_p2() {
    p_Val2_18_fu_235_p2 = (!sext_ln713_fu_196_p1.read().is_01() || !zext_ln415_fu_231_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln713_fu_196_p1.read()) + sc_biguint<15>(zext_ln415_fu_231_p1.read()));
}

void post_process_unit::thread_r_V_fu_355_p0() {
    r_V_fu_355_p0 =  (sc_lv<6>) (ap_const_lv22_1A);
}

void post_process_unit::thread_r_fu_207_p2() {
    r_fu_207_p2 = (!trunc_ln718_reg_395.read().is_01() || !ap_const_lv7_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln718_reg_395.read() != ap_const_lv7_0);
}

void post_process_unit::thread_ret_V_fu_78_p2() {
    ret_V_fu_78_p2 = (!rhs_V_fu_74_p1.read().is_01() || !lhs_V_fu_70_p1.read().is_01())? sc_lv<17>(): (sc_bigint<17>(rhs_V_fu_74_p1.read()) + sc_bigint<17>(lhs_V_fu_70_p1.read()));
}

void post_process_unit::thread_rhs_V_fu_74_p0() {
    rhs_V_fu_74_p0 = bias_V_int_reg.read();
}

void post_process_unit::thread_rhs_V_fu_74_p1() {
    rhs_V_fu_74_p1 = esl_sext<17,16>(rhs_V_fu_74_p0.read());
}

void post_process_unit::thread_select_ln340_4_fu_324_p3() {
    select_ln340_4_fu_324_p3 = (!or_ln786_fu_318_p2.read()[0].is_01())? sc_lv<16>(): ((or_ln786_fu_318_p2.read()[0].to_bool())? sext_ln415_fu_241_p1.read(): ap_const_lv16_8000);
}

void post_process_unit::thread_select_ln340_fu_136_p3() {
    select_ln340_fu_136_p3 = (!xor_ln340_8_fu_118_p2.read()[0].is_01())? sc_lv<16>(): ((xor_ln340_8_fu_118_p2.read()[0].to_bool())? ap_const_lv16_7FFF: p_Val2_16_fu_92_p2.read());
}

void post_process_unit::thread_select_ln388_fu_144_p3() {
    select_ln388_fu_144_p3 = (!underflow_fu_112_p2.read()[0].is_01())? sc_lv<16>(): ((underflow_fu_112_p2.read()[0].to_bool())? ap_const_lv16_8000: p_Val2_16_fu_92_p2.read());
}

void post_process_unit::thread_select_ln97_1_fu_349_p3() {
    select_ln97_1_fu_349_p3 = (!bias_en_V_read_reg_369_pp0_iter1_reg.read()[0].is_01())? sc_lv<16>(): ((bias_en_V_read_reg_369_pp0_iter1_reg.read()[0].to_bool())? select_ln97_fu_342_p3.read(): data_in_V_read_reg_375_pp0_iter1_reg.read());
}

void post_process_unit::thread_select_ln97_fu_342_p3() {
    select_ln97_fu_342_p3 = (!and_ln97_1_fu_336_p2.read()[0].is_01())? sc_lv<16>(): ((and_ln97_1_fu_336_p2.read()[0].to_bool())? select_ln340_4_fu_324_p3.read(): activated_output_V_reg_380_pp0_iter1_reg.read());
}

void post_process_unit::thread_sext_ln415_fu_241_p1() {
    sext_ln415_fu_241_p1 = esl_sext<16,15>(p_Val2_18_fu_235_p2.read());
}

void post_process_unit::thread_sext_ln713_fu_196_p1() {
    sext_ln713_fu_196_p1 = esl_sext<15,14>(trunc_ln_fu_187_p4.read());
}

void post_process_unit::thread_tmp_11_fu_200_p3() {
    tmp_11_fu_200_p3 = r_V_reg_387.read().range(8, 8);
}

void post_process_unit::thread_tmp_13_fu_218_p3() {
    tmp_13_fu_218_p3 = r_V_reg_387.read().range(7, 7);
}

void post_process_unit::thread_tmp_14_fu_245_p3() {
    tmp_14_fu_245_p3 = p_Val2_18_fu_235_p2.read().range(14, 14);
}

void post_process_unit::thread_tmp_17_fu_272_p3() {
    tmp_17_fu_272_p3 = r_V_reg_387.read().range(20, 20);
}

void post_process_unit::thread_tmp_fu_180_p3() {
    tmp_fu_180_p3 = activated_output_V_reg_380_pp0_iter1_reg.read().range(15, 15);
}

void post_process_unit::thread_trunc_ln718_fu_163_p1() {
    trunc_ln718_fu_163_p1 = r_V_fu_355_p2.read().range(7-1, 0);
}

void post_process_unit::thread_trunc_ln_fu_187_p4() {
    trunc_ln_fu_187_p4 = r_V_reg_387.read().range(21, 8);
}

void post_process_unit::thread_underflow_fu_112_p2() {
    underflow_fu_112_p2 = (p_Result_s_fu_84_p3.read() & xor_ln786_fu_106_p2.read());
}

void post_process_unit::thread_xor_ln340_8_fu_118_p2() {
    xor_ln340_8_fu_118_p2 = (p_Result_s_fu_84_p3.read() ^ p_Result_8_fu_98_p3.read());
}

void post_process_unit::thread_xor_ln340_fu_124_p2() {
    xor_ln340_fu_124_p2 = (p_Result_s_fu_84_p3.read() ^ ap_const_lv1_1);
}

void post_process_unit::thread_xor_ln416_1_fu_253_p2() {
    xor_ln416_1_fu_253_p2 = (tmp_14_fu_245_p3.read() ^ ap_const_lv1_1);
}

void post_process_unit::thread_xor_ln416_2_fu_285_p2() {
    xor_ln416_2_fu_285_p2 = (p_Result_9_reg_400.read() ^ ap_const_lv1_1);
}

void post_process_unit::thread_xor_ln779_fu_279_p2() {
    xor_ln779_fu_279_p2 = (tmp_17_fu_272_p3.read() ^ ap_const_lv1_1);
}

void post_process_unit::thread_xor_ln786_fu_106_p2() {
    xor_ln786_fu_106_p2 = (p_Result_8_fu_98_p3.read() ^ ap_const_lv1_1);
}

void post_process_unit::thread_zext_ln415_fu_231_p1() {
    zext_ln415_fu_231_p1 = esl_zext<15,1>(and_ln415_fu_225_p2.read());
}

}
