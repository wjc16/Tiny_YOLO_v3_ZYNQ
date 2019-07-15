// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    typedef struct quad_fp_pack {
        ap_fixed<16, 8, (ap_q_mode) 4, (ap_o_mode)0, 0> sub_data_0;
        ap_fixed<16, 8, (ap_q_mode) 4, (ap_o_mode)0, 0> sub_data_1;
        ap_fixed<16, 8, (ap_q_mode) 4, (ap_o_mode)0, 0> sub_data_2;
        ap_fixed<16, 8, (ap_q_mode) 4, (ap_o_mode)0, 0> sub_data_3;
       } quad_fp_pack;

          template< int D ,int U ,int TI ,int TD > struct ap_axi_fp;
          template<> struct ap_axi_fp<64, 2, 5, 6> {
              quad_fp_pack data;
              ap_uint<8> keep;
              ap_uint<8> strb;
              ap_uint<2> user;
              ap_uint<1> last;
              ap_uint<5> id;
              ap_uint<6> dest;
             } ;



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "inStream_V_data"
#define AUTOTB_TVIN_inStream_V_data  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_data.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_data  "../tv/stream_size/stream_size_in_inStream_V_data.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_data  "../tv/stream_size/stream_ingress_status_inStream_V_data.dat"
// wrapc file define: "inStream_V_keep_V"
#define AUTOTB_TVIN_inStream_V_keep_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_keep_V  "../tv/stream_size/stream_size_in_inStream_V_keep_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V  "../tv/stream_size/stream_ingress_status_inStream_V_keep_V.dat"
// wrapc file define: "inStream_V_strb_V"
#define AUTOTB_TVIN_inStream_V_strb_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_strb_V  "../tv/stream_size/stream_size_in_inStream_V_strb_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V  "../tv/stream_size/stream_ingress_status_inStream_V_strb_V.dat"
// wrapc file define: "inStream_V_user_V"
#define AUTOTB_TVIN_inStream_V_user_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_user_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_user_V  "../tv/stream_size/stream_size_in_inStream_V_user_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V  "../tv/stream_size/stream_ingress_status_inStream_V_user_V.dat"
// wrapc file define: "inStream_V_last_V"
#define AUTOTB_TVIN_inStream_V_last_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_last_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_last_V  "../tv/stream_size/stream_size_in_inStream_V_last_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V  "../tv/stream_size/stream_ingress_status_inStream_V_last_V.dat"
// wrapc file define: "inStream_V_id_V"
#define AUTOTB_TVIN_inStream_V_id_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_id_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_id_V  "../tv/stream_size/stream_size_in_inStream_V_id_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V  "../tv/stream_size/stream_ingress_status_inStream_V_id_V.dat"
// wrapc file define: "inStream_V_dest_V"
#define AUTOTB_TVIN_inStream_V_dest_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_inStream_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_IN_inStream_V_dest_V  "../tv/stream_size/stream_size_in_inStream_V_dest_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V  "../tv/stream_size/stream_ingress_status_inStream_V_dest_V.dat"
// wrapc file define: "outStream_V_data"
#define AUTOTB_TVOUT_outStream_V_data  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_data.dat"
#define AUTOTB_TVIN_outStream_V_data  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_data.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_data  "../tv/stream_size/stream_size_out_outStream_V_data.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_data  "../tv/stream_size/stream_egress_status_outStream_V_data.dat"
// wrapc file define: "outStream_V_keep_V"
#define AUTOTB_TVOUT_outStream_V_keep_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_keep_V.dat"
#define AUTOTB_TVIN_outStream_V_keep_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_keep_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_keep_V  "../tv/stream_size/stream_size_out_outStream_V_keep_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_keep_V  "../tv/stream_size/stream_egress_status_outStream_V_keep_V.dat"
// wrapc file define: "outStream_V_strb_V"
#define AUTOTB_TVOUT_outStream_V_strb_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_strb_V.dat"
#define AUTOTB_TVIN_outStream_V_strb_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_strb_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_strb_V  "../tv/stream_size/stream_size_out_outStream_V_strb_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_strb_V  "../tv/stream_size/stream_egress_status_outStream_V_strb_V.dat"
// wrapc file define: "outStream_V_user_V"
#define AUTOTB_TVOUT_outStream_V_user_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_user_V.dat"
#define AUTOTB_TVIN_outStream_V_user_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_user_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_user_V  "../tv/stream_size/stream_size_out_outStream_V_user_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_user_V  "../tv/stream_size/stream_egress_status_outStream_V_user_V.dat"
// wrapc file define: "outStream_V_last_V"
#define AUTOTB_TVOUT_outStream_V_last_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_last_V.dat"
#define AUTOTB_TVIN_outStream_V_last_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_last_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_last_V  "../tv/stream_size/stream_size_out_outStream_V_last_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_last_V  "../tv/stream_size/stream_egress_status_outStream_V_last_V.dat"
// wrapc file define: "outStream_V_id_V"
#define AUTOTB_TVOUT_outStream_V_id_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_id_V.dat"
#define AUTOTB_TVIN_outStream_V_id_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_id_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_id_V  "../tv/stream_size/stream_size_out_outStream_V_id_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_id_V  "../tv/stream_size/stream_egress_status_outStream_V_id_V.dat"
// wrapc file define: "outStream_V_dest_V"
#define AUTOTB_TVOUT_outStream_V_dest_V  "../tv/cdatafile/c.yolo_conv_top.autotvout_outStream_V_dest_V.dat"
#define AUTOTB_TVIN_outStream_V_dest_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_outStream_V_dest_V.dat"
#define WRAPC_STREAM_SIZE_OUT_outStream_V_dest_V  "../tv/stream_size/stream_size_out_outStream_V_dest_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_outStream_V_dest_V  "../tv/stream_size/stream_egress_status_outStream_V_dest_V.dat"
// wrapc file define: "output_ch_V"
#define AUTOTB_TVIN_output_ch_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_output_ch_V.dat"
// wrapc file define: "input_ch_V"
#define AUTOTB_TVIN_input_ch_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_input_ch_V.dat"
// wrapc file define: "fold_output_ch_V"
#define AUTOTB_TVIN_fold_output_ch_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_fold_output_ch_V.dat"
// wrapc file define: "fold_input_ch_V"
#define AUTOTB_TVIN_fold_input_ch_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_fold_input_ch_V.dat"
// wrapc file define: "kernel_dim_V"
#define AUTOTB_TVIN_kernel_dim_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_kernel_dim_V.dat"
// wrapc file define: "input_h_V"
#define AUTOTB_TVIN_input_h_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_input_h_V.dat"
// wrapc file define: "input_w_V"
#define AUTOTB_TVIN_input_w_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_input_w_V.dat"
// wrapc file define: "real_input_h_V"
#define AUTOTB_TVIN_real_input_h_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_real_input_h_V.dat"
// wrapc file define: "leaky_V"
#define AUTOTB_TVIN_leaky_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_leaky_V.dat"
// wrapc file define: "fold_win_area_V"
#define AUTOTB_TVIN_fold_win_area_V  "../tv/cdatafile/c.yolo_conv_top.autotvin_fold_win_area_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "outStream_V_data"
#define AUTOTB_TVOUT_PC_outStream_V_data  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_data.dat"
// tvout file define: "outStream_V_keep_V"
#define AUTOTB_TVOUT_PC_outStream_V_keep_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_keep_V.dat"
// tvout file define: "outStream_V_strb_V"
#define AUTOTB_TVOUT_PC_outStream_V_strb_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_strb_V.dat"
// tvout file define: "outStream_V_user_V"
#define AUTOTB_TVOUT_PC_outStream_V_user_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_user_V.dat"
// tvout file define: "outStream_V_last_V"
#define AUTOTB_TVOUT_PC_outStream_V_last_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_last_V.dat"
// tvout file define: "outStream_V_id_V"
#define AUTOTB_TVOUT_PC_outStream_V_id_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_id_V.dat"
// tvout file define: "outStream_V_dest_V"
#define AUTOTB_TVOUT_PC_outStream_V_dest_V  "../tv/rtldatafile/rtl.yolo_conv_top.autotvout_outStream_V_dest_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			inStream_V_data_depth = 0;
			inStream_V_keep_V_depth = 0;
			inStream_V_strb_V_depth = 0;
			inStream_V_user_V_depth = 0;
			inStream_V_last_V_depth = 0;
			inStream_V_id_V_depth = 0;
			inStream_V_dest_V_depth = 0;
			outStream_V_data_depth = 0;
			outStream_V_keep_V_depth = 0;
			outStream_V_strb_V_depth = 0;
			outStream_V_user_V_depth = 0;
			outStream_V_last_V_depth = 0;
			outStream_V_id_V_depth = 0;
			outStream_V_dest_V_depth = 0;
			output_ch_V_depth = 0;
			input_ch_V_depth = 0;
			fold_output_ch_V_depth = 0;
			fold_input_ch_V_depth = 0;
			kernel_dim_V_depth = 0;
			input_h_V_depth = 0;
			input_w_V_depth = 0;
			real_input_h_V_depth = 0;
			leaky_V_depth = 0;
			fold_win_area_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{inStream_V_data " << inStream_V_data_depth << "}\n";
			total_list << "{inStream_V_keep_V " << inStream_V_keep_V_depth << "}\n";
			total_list << "{inStream_V_strb_V " << inStream_V_strb_V_depth << "}\n";
			total_list << "{inStream_V_user_V " << inStream_V_user_V_depth << "}\n";
			total_list << "{inStream_V_last_V " << inStream_V_last_V_depth << "}\n";
			total_list << "{inStream_V_id_V " << inStream_V_id_V_depth << "}\n";
			total_list << "{inStream_V_dest_V " << inStream_V_dest_V_depth << "}\n";
			total_list << "{outStream_V_data " << outStream_V_data_depth << "}\n";
			total_list << "{outStream_V_keep_V " << outStream_V_keep_V_depth << "}\n";
			total_list << "{outStream_V_strb_V " << outStream_V_strb_V_depth << "}\n";
			total_list << "{outStream_V_user_V " << outStream_V_user_V_depth << "}\n";
			total_list << "{outStream_V_last_V " << outStream_V_last_V_depth << "}\n";
			total_list << "{outStream_V_id_V " << outStream_V_id_V_depth << "}\n";
			total_list << "{outStream_V_dest_V " << outStream_V_dest_V_depth << "}\n";
			total_list << "{output_ch_V " << output_ch_V_depth << "}\n";
			total_list << "{input_ch_V " << input_ch_V_depth << "}\n";
			total_list << "{fold_output_ch_V " << fold_output_ch_V_depth << "}\n";
			total_list << "{fold_input_ch_V " << fold_input_ch_V_depth << "}\n";
			total_list << "{kernel_dim_V " << kernel_dim_V_depth << "}\n";
			total_list << "{input_h_V " << input_h_V_depth << "}\n";
			total_list << "{input_w_V " << input_w_V_depth << "}\n";
			total_list << "{real_input_h_V " << real_input_h_V_depth << "}\n";
			total_list << "{leaky_V " << leaky_V_depth << "}\n";
			total_list << "{fold_win_area_V " << fold_win_area_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int inStream_V_data_depth;
		int inStream_V_keep_V_depth;
		int inStream_V_strb_V_depth;
		int inStream_V_user_V_depth;
		int inStream_V_last_V_depth;
		int inStream_V_id_V_depth;
		int inStream_V_dest_V_depth;
		int outStream_V_data_depth;
		int outStream_V_keep_V_depth;
		int outStream_V_strb_V_depth;
		int outStream_V_user_V_depth;
		int outStream_V_last_V_depth;
		int outStream_V_id_V_depth;
		int outStream_V_dest_V_depth;
		int output_ch_V_depth;
		int input_ch_V_depth;
		int fold_output_ch_V_depth;
		int fold_input_ch_V_depth;
		int kernel_dim_V_depth;
		int input_h_V_depth;
		int input_w_V_depth;
		int real_input_h_V_depth;
		int leaky_V_depth;
		int fold_win_area_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void yolo_conv_top (
hls::stream<ap_axi_fp<64, 2, 5, 6 > > (&inStream),
hls::stream<ap_axi_fp<64, 2, 5, 6 > > (&outStream),
ap_uint<6> output_ch,
ap_uint<6> input_ch,
ap_uint<4> fold_output_ch,
ap_uint<4> fold_input_ch,
ap_uint<3> kernel_dim,
ap_uint<9> input_h,
ap_uint<9> input_w,
ap_uint<9> real_input_h,
ap_uint<1> leaky,
ap_uint<3> fold_win_area);

void AESL_WRAP_yolo_conv_top (
hls::stream<ap_axi_fp<64, 2, 5, 6 > > (&inStream),
hls::stream<ap_axi_fp<64, 2, 5, 6 > > (&outStream),
ap_uint<6> output_ch,
ap_uint<6> input_ch,
ap_uint<4> fold_output_ch,
ap_uint<4> fold_input_ch,
ap_uint<3> kernel_dim,
ap_uint<9> input_h,
ap_uint<9> input_w,
ap_uint<9> real_input_h,
ap_uint<1> leaky,
ap_uint<3> fold_win_area)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "inStream"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data, AESL_token); // pop_size
			int aesl_tmp_1 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_1; i++)
			{
				inStream.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_inStream_V_data, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "outStream"
		std::vector<ap_axi_fp<64, 2, 5, 6 > > aesl_tmp_3;
		int aesl_tmp_4;
		int aesl_tmp_5 = 0;

		// read output stream size: "outStream"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_outStream_V_data, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_outStream_V_data, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_outStream_V_data, AESL_token); // pop_size
			aesl_tmp_4 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_outStream_V_data, AESL_token); // [[/transaction]]
		}

		// output port post check: "outStream_V_data"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_data, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_data, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_data, AESL_token); // data

			std::vector<sc_bv<64> > outStream_V_data_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_data', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_data_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_data, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_data))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_data
				{
					// bitslice(15, 0)
					// {
						// celement: outStream.V.data.sub_data_0.V(15, 0)
						// {
							sc_lv<16>* outStream_V_data_sub_data_0_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }
					// bitslice(31, 16)
					// {
						// celement: outStream.V.data.sub_data_1.V(15, 0)
						// {
							sc_lv<16>* outStream_V_data_sub_data_1_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }
					// bitslice(47, 32)
					// {
						// celement: outStream.V.data.sub_data_2.V(15, 0)
						// {
							sc_lv<16>* outStream_V_data_sub_data_2_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }
					// bitslice(63, 48)
					// {
						// celement: outStream.V.data.sub_data_3.V(15, 0)
						// {
							sc_lv<16>* outStream_V_data_sub_data_3_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<16>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_0.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data.sub_data_0) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_data_sub_data_0_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(outStream_V_data_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(31, 16)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_1.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data.sub_data_1) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_data_sub_data_1_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(outStream_V_data_pc_buffer[hls_map_index].range(31, 16));
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(47, 32)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_2.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data.sub_data_2) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_data_sub_data_2_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(outStream_V_data_pc_buffer[hls_map_index].range(47, 32));
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(63, 48)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_3.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].data.sub_data_3) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_data_sub_data_3_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(outStream_V_data_pc_buffer[hls_map_index].range(63, 48));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_0.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data.sub_data_0
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data.sub_data_0
									// output_left_conversion : (aesl_tmp_3[i_0].data.sub_data_0).range()
									// output_type_conversion : (outStream_V_data_sub_data_0_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data.sub_data_0) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_3[i_0].data.sub_data_0).range() = (outStream_V_data_sub_data_0_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(31, 16)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_1.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data.sub_data_1
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data.sub_data_1
									// output_left_conversion : (aesl_tmp_3[i_0].data.sub_data_1).range()
									// output_type_conversion : (outStream_V_data_sub_data_1_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data.sub_data_1) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_3[i_0].data.sub_data_1).range() = (outStream_V_data_sub_data_1_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(47, 32)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_2.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data.sub_data_2
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data.sub_data_2
									// output_left_conversion : (aesl_tmp_3[i_0].data.sub_data_2).range()
									// output_type_conversion : (outStream_V_data_sub_data_2_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data.sub_data_2) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_3[i_0].data.sub_data_2).range() = (outStream_V_data_sub_data_2_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
					// bitslice(63, 48)
					{
						int hls_map_index = 0;
						// celement: outStream.V.data.sub_data_3.V(15, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].data.sub_data_3
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].data.sub_data_3
									// output_left_conversion : (aesl_tmp_3[i_0].data.sub_data_3).range()
									// output_type_conversion : (outStream_V_data_sub_data_3_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].data.sub_data_3) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_3[i_0].data.sub_data_3).range() = (outStream_V_data_sub_data_3_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_keep_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_keep_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_keep_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_keep_V, AESL_token); // data

			std::vector<sc_bv<8> > outStream_V_keep_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_keep_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_keep_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_keep_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_keep_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_keep_V
				{
					// bitslice(7, 0)
					// {
						// celement: outStream.V.keep.V(7, 0)
						// {
							sc_lv<8>* outStream_V_keep_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.keep.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(outStream_V_keep_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.keep.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].keep
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].keep
									// output_left_conversion : aesl_tmp_3[i_0].keep
									// output_type_conversion : (outStream_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].keep = (outStream_V_keep_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_strb_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_strb_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_strb_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_strb_V, AESL_token); // data

			std::vector<sc_bv<8> > outStream_V_strb_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_strb_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_strb_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_strb_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_strb_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_strb_V
				{
					// bitslice(7, 0)
					// {
						// celement: outStream.V.strb.V(7, 0)
						// {
							sc_lv<8>* outStream_V_strb_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<8>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.strb.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(7, 0) = sc_bv<8>(outStream_V_strb_V_pc_buffer[hls_map_index].range(7, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.strb.V(7, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].strb
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].strb
									// output_left_conversion : aesl_tmp_3[i_0].strb
									// output_type_conversion : (outStream_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].strb = (outStream_V_strb_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_user_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_user_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_user_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_user_V, AESL_token); // data

			std::vector<sc_bv<2> > outStream_V_user_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_user_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_user_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_user_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_user_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_user_V
				{
					// bitslice(1, 0)
					// {
						// celement: outStream.V.user.V(1, 0)
						// {
							sc_lv<2>* outStream_V_user_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<2>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.user.V(1, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(1, 0) = sc_bv<2>(outStream_V_user_V_pc_buffer[hls_map_index].range(1, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(1, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.user.V(1, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].user
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].user
									// output_left_conversion : aesl_tmp_3[i_0].user
									// output_type_conversion : (outStream_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].user = (outStream_V_user_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_last_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_last_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_last_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_last_V, AESL_token); // data

			std::vector<sc_bv<1> > outStream_V_last_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_last_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_last_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_last_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_last_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_last_V
				{
					// bitslice(0, 0)
					// {
						// celement: outStream.V.last.V(0, 0)
						// {
							sc_lv<1>* outStream_V_last_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<1>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(0, 0) = sc_bv<1>(outStream_V_last_V_pc_buffer[hls_map_index].range(0, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(0, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.last.V(0, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].last
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].last
									// output_left_conversion : aesl_tmp_3[i_0].last
									// output_type_conversion : (outStream_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].last = (outStream_V_last_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_id_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_id_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_id_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_id_V, AESL_token); // data

			std::vector<sc_bv<5> > outStream_V_id_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_id_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_id_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_id_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_id_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_id_V
				{
					// bitslice(4, 0)
					// {
						// celement: outStream.V.id.V(4, 0)
						// {
							sc_lv<5>* outStream_V_id_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<5>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(4, 0) = sc_bv<5>(outStream_V_id_V_pc_buffer[hls_map_index].range(4, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(4, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.id.V(4, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].id
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].id
									// output_left_conversion : aesl_tmp_3[i_0].id
									// output_type_conversion : (outStream_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].id = (outStream_V_id_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "outStream_V_dest_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_dest_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_dest_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_dest_V, AESL_token); // data

			std::vector<sc_bv<6> > outStream_V_dest_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'outStream_V_dest_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					outStream_V_dest_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_outStream_V_dest_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_outStream_V_dest_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_4)
			{
				aesl_tmp_4 = i;
			}

			if (aesl_tmp_4 > 0 && aesl_tmp_3.size() < aesl_tmp_4)
			{
				int aesl_tmp_3_size = aesl_tmp_3.size();

				for (int tmp_aesl_tmp_3 = 0; tmp_aesl_tmp_3 < aesl_tmp_4 - aesl_tmp_3_size; tmp_aesl_tmp_3++)
				{
					ap_axi_fp<64, 2, 5, 6 > tmp;
					aesl_tmp_3.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: outStream_V_dest_V
				{
					// bitslice(5, 0)
					// {
						// celement: outStream.V.dest.V(5, 0)
						// {
							sc_lv<6>* outStream_V_dest_V_lv0_0_0_1_lv1_0_0_1 = new sc_lv<6>[aesl_tmp_4 - aesl_tmp_5];
						// }
					// }

					// bitslice(5, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.dest.V(5, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										outStream_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index].range(5, 0) = sc_bv<6>(outStream_V_dest_V_pc_buffer[hls_map_index].range(5, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(5, 0)
					{
						int hls_map_index = 0;
						// celement: outStream.V.dest.V(5, 0)
						{
							// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
							for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (1)
								for (int i_1 = 0; i_1 <= 0; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_3[i_0].dest
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_3[0].dest
									// output_left_conversion : aesl_tmp_3[i_0].dest
									// output_type_conversion : (outStream_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
									{
										aesl_tmp_3[i_0].dest = (outStream_V_dest_V_lv0_0_0_1_lv1_0_0_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "outStream"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			outStream.write(aesl_tmp_3[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "inStream_V_data"
		char* tvin_inStream_V_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_data);
		char* wrapc_stream_size_in_inStream_V_data = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_data);
		char* wrapc_stream_ingress_status_inStream_V_data = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data);

		// "inStream_V_keep_V"
		char* tvin_inStream_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_keep_V);
		char* wrapc_stream_size_in_inStream_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V);
		char* wrapc_stream_ingress_status_inStream_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V);

		// "inStream_V_strb_V"
		char* tvin_inStream_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_strb_V);
		char* wrapc_stream_size_in_inStream_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V);
		char* wrapc_stream_ingress_status_inStream_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V);

		// "inStream_V_user_V"
		char* tvin_inStream_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_user_V);
		char* wrapc_stream_size_in_inStream_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_user_V);
		char* wrapc_stream_ingress_status_inStream_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V);

		// "inStream_V_last_V"
		char* tvin_inStream_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_last_V);
		char* wrapc_stream_size_in_inStream_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_last_V);
		char* wrapc_stream_ingress_status_inStream_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V);

		// "inStream_V_id_V"
		char* tvin_inStream_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_id_V);
		char* wrapc_stream_size_in_inStream_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_id_V);
		char* wrapc_stream_ingress_status_inStream_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V);

		// "inStream_V_dest_V"
		char* tvin_inStream_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_inStream_V_dest_V);
		char* wrapc_stream_size_in_inStream_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V);
		char* wrapc_stream_ingress_status_inStream_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V);

		// "outStream_V_data"
		char* tvin_outStream_V_data = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_data);
		char* tvout_outStream_V_data = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_data);
		char* wrapc_stream_size_out_outStream_V_data = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_data);
		char* wrapc_stream_egress_status_outStream_V_data = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_data);

		// "outStream_V_keep_V"
		char* tvin_outStream_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_keep_V);
		char* tvout_outStream_V_keep_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_keep_V);
		char* wrapc_stream_size_out_outStream_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_keep_V);
		char* wrapc_stream_egress_status_outStream_V_keep_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_keep_V);

		// "outStream_V_strb_V"
		char* tvin_outStream_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_strb_V);
		char* tvout_outStream_V_strb_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_strb_V);
		char* wrapc_stream_size_out_outStream_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_strb_V);
		char* wrapc_stream_egress_status_outStream_V_strb_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_strb_V);

		// "outStream_V_user_V"
		char* tvin_outStream_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_user_V);
		char* tvout_outStream_V_user_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_user_V);
		char* wrapc_stream_size_out_outStream_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_user_V);
		char* wrapc_stream_egress_status_outStream_V_user_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_user_V);

		// "outStream_V_last_V"
		char* tvin_outStream_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_last_V);
		char* tvout_outStream_V_last_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_last_V);
		char* wrapc_stream_size_out_outStream_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_last_V);
		char* wrapc_stream_egress_status_outStream_V_last_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_last_V);

		// "outStream_V_id_V"
		char* tvin_outStream_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_id_V);
		char* tvout_outStream_V_id_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_id_V);
		char* wrapc_stream_size_out_outStream_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_id_V);
		char* wrapc_stream_egress_status_outStream_V_id_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_id_V);

		// "outStream_V_dest_V"
		char* tvin_outStream_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_outStream_V_dest_V);
		char* tvout_outStream_V_dest_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_outStream_V_dest_V);
		char* wrapc_stream_size_out_outStream_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_outStream_V_dest_V);
		char* wrapc_stream_egress_status_outStream_V_dest_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_outStream_V_dest_V);

		// "output_ch_V"
		char* tvin_output_ch_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_output_ch_V);

		// "input_ch_V"
		char* tvin_input_ch_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_ch_V);

		// "fold_output_ch_V"
		char* tvin_fold_output_ch_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fold_output_ch_V);

		// "fold_input_ch_V"
		char* tvin_fold_input_ch_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fold_input_ch_V);

		// "kernel_dim_V"
		char* tvin_kernel_dim_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_kernel_dim_V);

		// "input_h_V"
		char* tvin_input_h_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_h_V);

		// "input_w_V"
		char* tvin_input_w_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_w_V);

		// "real_input_h_V"
		char* tvin_real_input_h_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_real_input_h_V);

		// "leaky_V"
		char* tvin_leaky_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_leaky_V);

		// "fold_win_area_V"
		char* tvin_fold_win_area_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fold_win_area_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "inStream"
		std::vector<ap_axi_fp<64, 2, 5, 6 > > aesl_tmp_0;
		int aesl_tmp_1 = 0;
		while (!inStream.empty())
		{
			aesl_tmp_0.push_back(inStream.read());
			aesl_tmp_1++;
		}

		// dump stream tvin: "outStream"
		std::vector<ap_axi_fp<64, 2, 5, 6 > > aesl_tmp_3;
		int aesl_tmp_4 = 0;
		while (!outStream.empty())
		{
			aesl_tmp_3.push_back(outStream.read());
			aesl_tmp_4++;
		}

		// [[transaction]]
		sprintf(tvin_output_ch_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_output_ch_V, tvin_output_ch_V);

		sc_bv<6> output_ch_V_tvin_wrapc_buffer;

		// RTL Name: output_ch_V
		{
			// bitslice(5, 0)
			{
				// celement: output_ch.V(5, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : output_ch
						// sub_1st_elem          : 
						// ori_name_1st_elem     : output_ch
						// regulate_c_name       : output_ch_V
						// input_type_conversion : (output_ch).to_string(2).c_str()
						if (&(output_ch) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<6> output_ch_V_tmp_mem;
							output_ch_V_tmp_mem = (output_ch).to_string(2).c_str();
							output_ch_V_tvin_wrapc_buffer.range(5, 0) = output_ch_V_tmp_mem.range(5, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_output_ch_V, "%s\n", (output_ch_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_output_ch_V, tvin_output_ch_V);
		}

		tcl_file.set_num(1, &tcl_file.output_ch_V_depth);
		sprintf(tvin_output_ch_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_output_ch_V, tvin_output_ch_V);

		// [[transaction]]
		sprintf(tvin_input_ch_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_ch_V, tvin_input_ch_V);

		sc_bv<6> input_ch_V_tvin_wrapc_buffer;

		// RTL Name: input_ch_V
		{
			// bitslice(5, 0)
			{
				// celement: input_ch.V(5, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : input_ch
						// sub_1st_elem          : 
						// ori_name_1st_elem     : input_ch
						// regulate_c_name       : input_ch_V
						// input_type_conversion : (input_ch).to_string(2).c_str()
						if (&(input_ch) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<6> input_ch_V_tmp_mem;
							input_ch_V_tmp_mem = (input_ch).to_string(2).c_str();
							input_ch_V_tvin_wrapc_buffer.range(5, 0) = input_ch_V_tmp_mem.range(5, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_input_ch_V, "%s\n", (input_ch_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_ch_V, tvin_input_ch_V);
		}

		tcl_file.set_num(1, &tcl_file.input_ch_V_depth);
		sprintf(tvin_input_ch_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_ch_V, tvin_input_ch_V);

		// [[transaction]]
		sprintf(tvin_fold_output_ch_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fold_output_ch_V, tvin_fold_output_ch_V);

		sc_bv<4> fold_output_ch_V_tvin_wrapc_buffer;

		// RTL Name: fold_output_ch_V
		{
			// bitslice(3, 0)
			{
				// celement: fold_output_ch.V(3, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : fold_output_ch
						// sub_1st_elem          : 
						// ori_name_1st_elem     : fold_output_ch
						// regulate_c_name       : fold_output_ch_V
						// input_type_conversion : (fold_output_ch).to_string(2).c_str()
						if (&(fold_output_ch) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<4> fold_output_ch_V_tmp_mem;
							fold_output_ch_V_tmp_mem = (fold_output_ch).to_string(2).c_str();
							fold_output_ch_V_tvin_wrapc_buffer.range(3, 0) = fold_output_ch_V_tmp_mem.range(3, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fold_output_ch_V, "%s\n", (fold_output_ch_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fold_output_ch_V, tvin_fold_output_ch_V);
		}

		tcl_file.set_num(1, &tcl_file.fold_output_ch_V_depth);
		sprintf(tvin_fold_output_ch_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fold_output_ch_V, tvin_fold_output_ch_V);

		// [[transaction]]
		sprintf(tvin_fold_input_ch_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fold_input_ch_V, tvin_fold_input_ch_V);

		sc_bv<4> fold_input_ch_V_tvin_wrapc_buffer;

		// RTL Name: fold_input_ch_V
		{
			// bitslice(3, 0)
			{
				// celement: fold_input_ch.V(3, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : fold_input_ch
						// sub_1st_elem          : 
						// ori_name_1st_elem     : fold_input_ch
						// regulate_c_name       : fold_input_ch_V
						// input_type_conversion : (fold_input_ch).to_string(2).c_str()
						if (&(fold_input_ch) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<4> fold_input_ch_V_tmp_mem;
							fold_input_ch_V_tmp_mem = (fold_input_ch).to_string(2).c_str();
							fold_input_ch_V_tvin_wrapc_buffer.range(3, 0) = fold_input_ch_V_tmp_mem.range(3, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fold_input_ch_V, "%s\n", (fold_input_ch_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fold_input_ch_V, tvin_fold_input_ch_V);
		}

		tcl_file.set_num(1, &tcl_file.fold_input_ch_V_depth);
		sprintf(tvin_fold_input_ch_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fold_input_ch_V, tvin_fold_input_ch_V);

		// [[transaction]]
		sprintf(tvin_kernel_dim_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_kernel_dim_V, tvin_kernel_dim_V);

		sc_bv<3> kernel_dim_V_tvin_wrapc_buffer;

		// RTL Name: kernel_dim_V
		{
			// bitslice(2, 0)
			{
				// celement: kernel_dim.V(2, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : kernel_dim
						// sub_1st_elem          : 
						// ori_name_1st_elem     : kernel_dim
						// regulate_c_name       : kernel_dim_V
						// input_type_conversion : (kernel_dim).to_string(2).c_str()
						if (&(kernel_dim) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<3> kernel_dim_V_tmp_mem;
							kernel_dim_V_tmp_mem = (kernel_dim).to_string(2).c_str();
							kernel_dim_V_tvin_wrapc_buffer.range(2, 0) = kernel_dim_V_tmp_mem.range(2, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_kernel_dim_V, "%s\n", (kernel_dim_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_kernel_dim_V, tvin_kernel_dim_V);
		}

		tcl_file.set_num(1, &tcl_file.kernel_dim_V_depth);
		sprintf(tvin_kernel_dim_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_kernel_dim_V, tvin_kernel_dim_V);

		// [[transaction]]
		sprintf(tvin_input_h_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_h_V, tvin_input_h_V);

		sc_bv<9> input_h_V_tvin_wrapc_buffer;

		// RTL Name: input_h_V
		{
			// bitslice(8, 0)
			{
				// celement: input_h.V(8, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : input_h
						// sub_1st_elem          : 
						// ori_name_1st_elem     : input_h
						// regulate_c_name       : input_h_V
						// input_type_conversion : (input_h).to_string(2).c_str()
						if (&(input_h) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<9> input_h_V_tmp_mem;
							input_h_V_tmp_mem = (input_h).to_string(2).c_str();
							input_h_V_tvin_wrapc_buffer.range(8, 0) = input_h_V_tmp_mem.range(8, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_input_h_V, "%s\n", (input_h_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_h_V, tvin_input_h_V);
		}

		tcl_file.set_num(1, &tcl_file.input_h_V_depth);
		sprintf(tvin_input_h_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_h_V, tvin_input_h_V);

		// [[transaction]]
		sprintf(tvin_input_w_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_w_V, tvin_input_w_V);

		sc_bv<9> input_w_V_tvin_wrapc_buffer;

		// RTL Name: input_w_V
		{
			// bitslice(8, 0)
			{
				// celement: input_w.V(8, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : input_w
						// sub_1st_elem          : 
						// ori_name_1st_elem     : input_w
						// regulate_c_name       : input_w_V
						// input_type_conversion : (input_w).to_string(2).c_str()
						if (&(input_w) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<9> input_w_V_tmp_mem;
							input_w_V_tmp_mem = (input_w).to_string(2).c_str();
							input_w_V_tvin_wrapc_buffer.range(8, 0) = input_w_V_tmp_mem.range(8, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_input_w_V, "%s\n", (input_w_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_w_V, tvin_input_w_V);
		}

		tcl_file.set_num(1, &tcl_file.input_w_V_depth);
		sprintf(tvin_input_w_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_w_V, tvin_input_w_V);

		// [[transaction]]
		sprintf(tvin_real_input_h_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_real_input_h_V, tvin_real_input_h_V);

		sc_bv<9> real_input_h_V_tvin_wrapc_buffer;

		// RTL Name: real_input_h_V
		{
			// bitslice(8, 0)
			{
				// celement: real_input_h.V(8, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : real_input_h
						// sub_1st_elem          : 
						// ori_name_1st_elem     : real_input_h
						// regulate_c_name       : real_input_h_V
						// input_type_conversion : (real_input_h).to_string(2).c_str()
						if (&(real_input_h) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<9> real_input_h_V_tmp_mem;
							real_input_h_V_tmp_mem = (real_input_h).to_string(2).c_str();
							real_input_h_V_tvin_wrapc_buffer.range(8, 0) = real_input_h_V_tmp_mem.range(8, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_real_input_h_V, "%s\n", (real_input_h_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_real_input_h_V, tvin_real_input_h_V);
		}

		tcl_file.set_num(1, &tcl_file.real_input_h_V_depth);
		sprintf(tvin_real_input_h_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_real_input_h_V, tvin_real_input_h_V);

		// [[transaction]]
		sprintf(tvin_leaky_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_leaky_V, tvin_leaky_V);

		sc_bv<1> leaky_V_tvin_wrapc_buffer;

		// RTL Name: leaky_V
		{
			// bitslice(0, 0)
			{
				// celement: leaky.V(0, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : leaky
						// sub_1st_elem          : 
						// ori_name_1st_elem     : leaky
						// regulate_c_name       : leaky_V
						// input_type_conversion : (leaky).to_string(2).c_str()
						if (&(leaky) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<1> leaky_V_tmp_mem;
							leaky_V_tmp_mem = (leaky).to_string(2).c_str();
							leaky_V_tvin_wrapc_buffer.range(0, 0) = leaky_V_tmp_mem.range(0, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_leaky_V, "%s\n", (leaky_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_leaky_V, tvin_leaky_V);
		}

		tcl_file.set_num(1, &tcl_file.leaky_V_depth);
		sprintf(tvin_leaky_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_leaky_V, tvin_leaky_V);

		// [[transaction]]
		sprintf(tvin_fold_win_area_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fold_win_area_V, tvin_fold_win_area_V);

		sc_bv<3> fold_win_area_V_tvin_wrapc_buffer;

		// RTL Name: fold_win_area_V
		{
			// bitslice(2, 0)
			{
				// celement: fold_win_area.V(2, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : fold_win_area
						// sub_1st_elem          : 
						// ori_name_1st_elem     : fold_win_area
						// regulate_c_name       : fold_win_area_V
						// input_type_conversion : (fold_win_area).to_string(2).c_str()
						if (&(fold_win_area) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<3> fold_win_area_V_tmp_mem;
							fold_win_area_V_tmp_mem = (fold_win_area).to_string(2).c_str();
							fold_win_area_V_tvin_wrapc_buffer.range(2, 0) = fold_win_area_V_tmp_mem.range(2, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fold_win_area_V, "%s\n", (fold_win_area_V_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fold_win_area_V, tvin_fold_win_area_V);
		}

		tcl_file.set_num(1, &tcl_file.fold_win_area_V_depth);
		sprintf(tvin_fold_win_area_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fold_win_area_V, tvin_fold_win_area_V);

		// push back input stream: "inStream"
		for (int i = 0; i < aesl_tmp_1; i++)
		{
			inStream.write(aesl_tmp_0[i]);
		}

		// push back input stream: "outStream"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			outStream.write(aesl_tmp_3[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		yolo_conv_top(inStream, outStream, output_ch, input_ch, fold_output_ch, fold_input_ch, kernel_dim, input_h, input_w, real_input_h, leaky, fold_win_area);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "inStream"
		int aesl_tmp_2 = inStream.size();

		// pop output stream: "outStream"
		int aesl_tmp_5 = aesl_tmp_4;
		aesl_tmp_4 = 0;
     aesl_tmp_3.clear();
		while (!outStream.empty())
		{
			aesl_tmp_3.push_back(outStream.read());
			aesl_tmp_4++;
		}

		// [[transaction]]
		sprintf(tvin_inStream_V_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_data, tvin_inStream_V_data);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, tvin_inStream_V_data);

		sc_bv<64>* inStream_V_data_tvin_wrapc_buffer = new sc_bv<64>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_data
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.data.sub_data_0.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data.sub_data_0
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data.sub_data_0
							// regulate_c_name       : inStream_V_data_sub_data_0_V
							// input_type_conversion : (aesl_tmp_0[i_0].data.sub_data_0).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_0[0].data.sub_data_0) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> inStream_V_data_sub_data_0_V_tmp_mem;
								inStream_V_data_sub_data_0_V_tmp_mem = (aesl_tmp_0[i_0].data.sub_data_0).range().to_string(SC_BIN).c_str();
								inStream_V_data_tvin_wrapc_buffer[hls_map_index].range(15, 0) = inStream_V_data_sub_data_0_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(31, 16)
			{
				int hls_map_index = 0;
				// celement: inStream.V.data.sub_data_1.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data.sub_data_1
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data.sub_data_1
							// regulate_c_name       : inStream_V_data_sub_data_1_V
							// input_type_conversion : (aesl_tmp_0[i_0].data.sub_data_1).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_0[0].data.sub_data_1) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> inStream_V_data_sub_data_1_V_tmp_mem;
								inStream_V_data_sub_data_1_V_tmp_mem = (aesl_tmp_0[i_0].data.sub_data_1).range().to_string(SC_BIN).c_str();
								inStream_V_data_tvin_wrapc_buffer[hls_map_index].range(31, 16) = inStream_V_data_sub_data_1_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(47, 32)
			{
				int hls_map_index = 0;
				// celement: inStream.V.data.sub_data_2.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data.sub_data_2
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data.sub_data_2
							// regulate_c_name       : inStream_V_data_sub_data_2_V
							// input_type_conversion : (aesl_tmp_0[i_0].data.sub_data_2).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_0[0].data.sub_data_2) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> inStream_V_data_sub_data_2_V_tmp_mem;
								inStream_V_data_sub_data_2_V_tmp_mem = (aesl_tmp_0[i_0].data.sub_data_2).range().to_string(SC_BIN).c_str();
								inStream_V_data_tvin_wrapc_buffer[hls_map_index].range(47, 32) = inStream_V_data_sub_data_2_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(63, 48)
			{
				int hls_map_index = 0;
				// celement: inStream.V.data.sub_data_3.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].data.sub_data_3
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].data.sub_data_3
							// regulate_c_name       : inStream_V_data_sub_data_3_V
							// input_type_conversion : (aesl_tmp_0[i_0].data.sub_data_3).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_0[0].data.sub_data_3) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> inStream_V_data_sub_data_3_V_tmp_mem;
								inStream_V_data_sub_data_3_V_tmp_mem = (aesl_tmp_0[i_0].data.sub_data_3).range().to_string(SC_BIN).c_str();
								inStream_V_data_tvin_wrapc_buffer[hls_map_index].range(63, 48) = inStream_V_data_sub_data_3_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_data, "%s\n", (inStream_V_data_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_data, tvin_inStream_V_data);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_data = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, stream_ingress_size_inStream_V_data.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_data--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, stream_ingress_size_inStream_V_data.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_data = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, stream_ingress_size_inStream_V_data.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_data_depth);
		sprintf(tvin_inStream_V_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_data, tvin_inStream_V_data);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_data, tvin_inStream_V_data);

		// release memory allocation
		delete [] inStream_V_data_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data, wrapc_stream_size_in_inStream_V_data);
		sprintf(wrapc_stream_size_in_inStream_V_data, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data, wrapc_stream_size_in_inStream_V_data);
		sprintf(wrapc_stream_size_in_inStream_V_data, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_data, wrapc_stream_size_in_inStream_V_data);

		// [[transaction]]
		sprintf(tvin_inStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, tvin_inStream_V_keep_V);

		sc_bv<8>* inStream_V_keep_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_keep_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.keep.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].keep
							// regulate_c_name       : inStream_V_keep_V
							// input_type_conversion : (aesl_tmp_0[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_0[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> inStream_V_keep_V_tmp_mem;
								inStream_V_keep_V_tmp_mem = (aesl_tmp_0[i_0].keep).to_string(2).c_str();
								inStream_V_keep_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = inStream_V_keep_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_keep_V, "%s\n", (inStream_V_keep_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_keep_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, stream_ingress_size_inStream_V_keep_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_keep_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, stream_ingress_size_inStream_V_keep_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_keep_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, stream_ingress_size_inStream_V_keep_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_keep_V_depth);
		sprintf(tvin_inStream_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_keep_V, tvin_inStream_V_keep_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_keep_V, tvin_inStream_V_keep_V);

		// release memory allocation
		delete [] inStream_V_keep_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);
		sprintf(wrapc_stream_size_in_inStream_V_keep_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);
		sprintf(wrapc_stream_size_in_inStream_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_keep_V, wrapc_stream_size_in_inStream_V_keep_V);

		// [[transaction]]
		sprintf(tvin_inStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, tvin_inStream_V_strb_V);

		sc_bv<8>* inStream_V_strb_V_tvin_wrapc_buffer = new sc_bv<8>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_strb_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.strb.V(7, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].strb
							// regulate_c_name       : inStream_V_strb_V
							// input_type_conversion : (aesl_tmp_0[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_0[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> inStream_V_strb_V_tmp_mem;
								inStream_V_strb_V_tmp_mem = (aesl_tmp_0[i_0].strb).to_string(2).c_str();
								inStream_V_strb_V_tvin_wrapc_buffer[hls_map_index].range(7, 0) = inStream_V_strb_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_strb_V, "%s\n", (inStream_V_strb_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_strb_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, stream_ingress_size_inStream_V_strb_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_strb_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, stream_ingress_size_inStream_V_strb_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_strb_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, stream_ingress_size_inStream_V_strb_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_strb_V_depth);
		sprintf(tvin_inStream_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_strb_V, tvin_inStream_V_strb_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_strb_V, tvin_inStream_V_strb_V);

		// release memory allocation
		delete [] inStream_V_strb_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);
		sprintf(wrapc_stream_size_in_inStream_V_strb_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);
		sprintf(wrapc_stream_size_in_inStream_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_strb_V, wrapc_stream_size_in_inStream_V_strb_V);

		// [[transaction]]
		sprintf(tvin_inStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, tvin_inStream_V_user_V);

		sc_bv<2>* inStream_V_user_V_tvin_wrapc_buffer = new sc_bv<2>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_user_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.user.V(1, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].user
							// regulate_c_name       : inStream_V_user_V
							// input_type_conversion : (aesl_tmp_0[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_0[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> inStream_V_user_V_tmp_mem;
								inStream_V_user_V_tmp_mem = (aesl_tmp_0[i_0].user).to_string(2).c_str();
								inStream_V_user_V_tvin_wrapc_buffer[hls_map_index].range(1, 0) = inStream_V_user_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_user_V, "%s\n", (inStream_V_user_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_user_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, stream_ingress_size_inStream_V_user_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_user_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, stream_ingress_size_inStream_V_user_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_user_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, stream_ingress_size_inStream_V_user_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_user_V_depth);
		sprintf(tvin_inStream_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_user_V, tvin_inStream_V_user_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_user_V, tvin_inStream_V_user_V);

		// release memory allocation
		delete [] inStream_V_user_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);
		sprintf(wrapc_stream_size_in_inStream_V_user_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);
		sprintf(wrapc_stream_size_in_inStream_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_user_V, wrapc_stream_size_in_inStream_V_user_V);

		// [[transaction]]
		sprintf(tvin_inStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, tvin_inStream_V_last_V);

		sc_bv<1>* inStream_V_last_V_tvin_wrapc_buffer = new sc_bv<1>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.last.V(0, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].last
							// regulate_c_name       : inStream_V_last_V
							// input_type_conversion : (aesl_tmp_0[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_0[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> inStream_V_last_V_tmp_mem;
								inStream_V_last_V_tmp_mem = (aesl_tmp_0[i_0].last).to_string(2).c_str();
								inStream_V_last_V_tvin_wrapc_buffer[hls_map_index].range(0, 0) = inStream_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_last_V, "%s\n", (inStream_V_last_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_last_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, stream_ingress_size_inStream_V_last_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_last_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, stream_ingress_size_inStream_V_last_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_last_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, stream_ingress_size_inStream_V_last_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_last_V_depth);
		sprintf(tvin_inStream_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_last_V, tvin_inStream_V_last_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_last_V, tvin_inStream_V_last_V);

		// release memory allocation
		delete [] inStream_V_last_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);
		sprintf(wrapc_stream_size_in_inStream_V_last_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);
		sprintf(wrapc_stream_size_in_inStream_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_last_V, wrapc_stream_size_in_inStream_V_last_V);

		// [[transaction]]
		sprintf(tvin_inStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, tvin_inStream_V_id_V);

		sc_bv<5>* inStream_V_id_V_tvin_wrapc_buffer = new sc_bv<5>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.id.V(4, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].id
							// regulate_c_name       : inStream_V_id_V
							// input_type_conversion : (aesl_tmp_0[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_0[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> inStream_V_id_V_tmp_mem;
								inStream_V_id_V_tmp_mem = (aesl_tmp_0[i_0].id).to_string(2).c_str();
								inStream_V_id_V_tvin_wrapc_buffer[hls_map_index].range(4, 0) = inStream_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_id_V, "%s\n", (inStream_V_id_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_id_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, stream_ingress_size_inStream_V_id_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_id_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, stream_ingress_size_inStream_V_id_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_id_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, stream_ingress_size_inStream_V_id_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_id_V_depth);
		sprintf(tvin_inStream_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_id_V, tvin_inStream_V_id_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_id_V, tvin_inStream_V_id_V);

		// release memory allocation
		delete [] inStream_V_id_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);
		sprintf(wrapc_stream_size_in_inStream_V_id_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);
		sprintf(wrapc_stream_size_in_inStream_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_id_V, wrapc_stream_size_in_inStream_V_id_V);

		// [[transaction]]
		sprintf(tvin_inStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, tvin_inStream_V_dest_V);

		sc_bv<6>* inStream_V_dest_V_tvin_wrapc_buffer = new sc_bv<6>[aesl_tmp_1 - aesl_tmp_2];

		// RTL Name: inStream_V_dest_V
		{
			// bitslice(5, 0)
			{
				int hls_map_index = 0;
				// celement: inStream.V.dest.V(5, 0)
				{
					// carray: (0) => (aesl_tmp_1 - aesl_tmp_2 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_1 - aesl_tmp_2 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_0[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_0[0].dest
							// regulate_c_name       : inStream_V_dest_V
							// input_type_conversion : (aesl_tmp_0[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_0[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<6> inStream_V_dest_V_tmp_mem;
								inStream_V_dest_V_tmp_mem = (aesl_tmp_0[i_0].dest).to_string(2).c_str();
								inStream_V_dest_V_tvin_wrapc_buffer[hls_map_index].range(5, 0) = inStream_V_dest_V_tmp_mem.range(5, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			sprintf(tvin_inStream_V_dest_V, "%s\n", (inStream_V_dest_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_1 > aesl_tmp_2)
     {
		sc_int<32> stream_ingress_size_inStream_V_dest_V = aesl_tmp_1;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, stream_ingress_size_inStream_V_dest_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, "\n");

		for (int i = 0; i < aesl_tmp_1 - aesl_tmp_2; i++)
		{
			stream_ingress_size_inStream_V_dest_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, stream_ingress_size_inStream_V_dest_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_inStream_V_dest_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, stream_ingress_size_inStream_V_dest_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_1 - aesl_tmp_2, &tcl_file.inStream_V_dest_V_depth);
		sprintf(tvin_inStream_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_inStream_V_dest_V, tvin_inStream_V_dest_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_inStream_V_dest_V, tvin_inStream_V_dest_V);

		// release memory allocation
		delete [] inStream_V_dest_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_inStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);
		sprintf(wrapc_stream_size_in_inStream_V_dest_V, "%d\n", aesl_tmp_1 - aesl_tmp_2);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);
		sprintf(wrapc_stream_size_in_inStream_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_inStream_V_dest_V, wrapc_stream_size_in_inStream_V_dest_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_data, tvout_outStream_V_data);

		sc_bv<64>* outStream_V_data_tvout_wrapc_buffer = new sc_bv<64>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_data
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.data.sub_data_0.V(15, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data.sub_data_0
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data.sub_data_0
							// regulate_c_name       : outStream_V_data_sub_data_0_V
							// input_type_conversion : (aesl_tmp_3[i_0].data.sub_data_0).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_3[0].data.sub_data_0) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> outStream_V_data_sub_data_0_V_tmp_mem;
								outStream_V_data_sub_data_0_V_tmp_mem = (aesl_tmp_3[i_0].data.sub_data_0).range().to_string(SC_BIN).c_str();
								outStream_V_data_tvout_wrapc_buffer[hls_map_index].range(15, 0) = outStream_V_data_sub_data_0_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(31, 16)
			{
				int hls_map_index = 0;
				// celement: outStream.V.data.sub_data_1.V(15, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data.sub_data_1
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data.sub_data_1
							// regulate_c_name       : outStream_V_data_sub_data_1_V
							// input_type_conversion : (aesl_tmp_3[i_0].data.sub_data_1).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_3[0].data.sub_data_1) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> outStream_V_data_sub_data_1_V_tmp_mem;
								outStream_V_data_sub_data_1_V_tmp_mem = (aesl_tmp_3[i_0].data.sub_data_1).range().to_string(SC_BIN).c_str();
								outStream_V_data_tvout_wrapc_buffer[hls_map_index].range(31, 16) = outStream_V_data_sub_data_1_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(47, 32)
			{
				int hls_map_index = 0;
				// celement: outStream.V.data.sub_data_2.V(15, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data.sub_data_2
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data.sub_data_2
							// regulate_c_name       : outStream_V_data_sub_data_2_V
							// input_type_conversion : (aesl_tmp_3[i_0].data.sub_data_2).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_3[0].data.sub_data_2) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> outStream_V_data_sub_data_2_V_tmp_mem;
								outStream_V_data_sub_data_2_V_tmp_mem = (aesl_tmp_3[i_0].data.sub_data_2).range().to_string(SC_BIN).c_str();
								outStream_V_data_tvout_wrapc_buffer[hls_map_index].range(47, 32) = outStream_V_data_sub_data_2_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
			// bitslice(63, 48)
			{
				int hls_map_index = 0;
				// celement: outStream.V.data.sub_data_3.V(15, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].data.sub_data_3
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].data.sub_data_3
							// regulate_c_name       : outStream_V_data_sub_data_3_V
							// input_type_conversion : (aesl_tmp_3[i_0].data.sub_data_3).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_3[0].data.sub_data_3) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> outStream_V_data_sub_data_3_V_tmp_mem;
								outStream_V_data_sub_data_3_V_tmp_mem = (aesl_tmp_3[i_0].data.sub_data_3).range().to_string(SC_BIN).c_str();
								outStream_V_data_tvout_wrapc_buffer[hls_map_index].range(63, 48) = outStream_V_data_sub_data_3_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_data, "%s\n", (outStream_V_data_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_data, tvout_outStream_V_data);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_data_depth);
		sprintf(tvout_outStream_V_data, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_data, tvout_outStream_V_data);

		// release memory allocation
		delete [] outStream_V_data_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_data, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_data, wrapc_stream_size_out_outStream_V_data);
		sprintf(wrapc_stream_size_out_outStream_V_data, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_data, wrapc_stream_size_out_outStream_V_data);
		sprintf(wrapc_stream_size_out_outStream_V_data, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_data, wrapc_stream_size_out_outStream_V_data);

		// [[transaction]]
		sprintf(tvout_outStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_keep_V, tvout_outStream_V_keep_V);

		sc_bv<8>* outStream_V_keep_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_keep_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.keep.V(7, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].keep
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].keep
							// regulate_c_name       : outStream_V_keep_V
							// input_type_conversion : (aesl_tmp_3[i_0].keep).to_string(2).c_str()
							if (&(aesl_tmp_3[0].keep) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> outStream_V_keep_V_tmp_mem;
								outStream_V_keep_V_tmp_mem = (aesl_tmp_3[i_0].keep).to_string(2).c_str();
								outStream_V_keep_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = outStream_V_keep_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_keep_V, "%s\n", (outStream_V_keep_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_keep_V, tvout_outStream_V_keep_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_keep_V_depth);
		sprintf(tvout_outStream_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_keep_V, tvout_outStream_V_keep_V);

		// release memory allocation
		delete [] outStream_V_keep_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_keep_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_keep_V, wrapc_stream_size_out_outStream_V_keep_V);
		sprintf(wrapc_stream_size_out_outStream_V_keep_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_keep_V, wrapc_stream_size_out_outStream_V_keep_V);
		sprintf(wrapc_stream_size_out_outStream_V_keep_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_keep_V, wrapc_stream_size_out_outStream_V_keep_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_strb_V, tvout_outStream_V_strb_V);

		sc_bv<8>* outStream_V_strb_V_tvout_wrapc_buffer = new sc_bv<8>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_strb_V
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.strb.V(7, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].strb
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].strb
							// regulate_c_name       : outStream_V_strb_V
							// input_type_conversion : (aesl_tmp_3[i_0].strb).to_string(2).c_str()
							if (&(aesl_tmp_3[0].strb) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> outStream_V_strb_V_tmp_mem;
								outStream_V_strb_V_tmp_mem = (aesl_tmp_3[i_0].strb).to_string(2).c_str();
								outStream_V_strb_V_tvout_wrapc_buffer[hls_map_index].range(7, 0) = outStream_V_strb_V_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_strb_V, "%s\n", (outStream_V_strb_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_strb_V, tvout_outStream_V_strb_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_strb_V_depth);
		sprintf(tvout_outStream_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_strb_V, tvout_outStream_V_strb_V);

		// release memory allocation
		delete [] outStream_V_strb_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_strb_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_strb_V, wrapc_stream_size_out_outStream_V_strb_V);
		sprintf(wrapc_stream_size_out_outStream_V_strb_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_strb_V, wrapc_stream_size_out_outStream_V_strb_V);
		sprintf(wrapc_stream_size_out_outStream_V_strb_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_strb_V, wrapc_stream_size_out_outStream_V_strb_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_user_V, tvout_outStream_V_user_V);

		sc_bv<2>* outStream_V_user_V_tvout_wrapc_buffer = new sc_bv<2>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_user_V
		{
			// bitslice(1, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.user.V(1, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].user
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].user
							// regulate_c_name       : outStream_V_user_V
							// input_type_conversion : (aesl_tmp_3[i_0].user).to_string(2).c_str()
							if (&(aesl_tmp_3[0].user) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<2> outStream_V_user_V_tmp_mem;
								outStream_V_user_V_tmp_mem = (aesl_tmp_3[i_0].user).to_string(2).c_str();
								outStream_V_user_V_tvout_wrapc_buffer[hls_map_index].range(1, 0) = outStream_V_user_V_tmp_mem.range(1, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_user_V, "%s\n", (outStream_V_user_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_user_V, tvout_outStream_V_user_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_user_V_depth);
		sprintf(tvout_outStream_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_user_V, tvout_outStream_V_user_V);

		// release memory allocation
		delete [] outStream_V_user_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_user_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_user_V, wrapc_stream_size_out_outStream_V_user_V);
		sprintf(wrapc_stream_size_out_outStream_V_user_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_user_V, wrapc_stream_size_out_outStream_V_user_V);
		sprintf(wrapc_stream_size_out_outStream_V_user_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_user_V, wrapc_stream_size_out_outStream_V_user_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_last_V, tvout_outStream_V_last_V);

		sc_bv<1>* outStream_V_last_V_tvout_wrapc_buffer = new sc_bv<1>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_last_V
		{
			// bitslice(0, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.last.V(0, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].last
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].last
							// regulate_c_name       : outStream_V_last_V
							// input_type_conversion : (aesl_tmp_3[i_0].last).to_string(2).c_str()
							if (&(aesl_tmp_3[0].last) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<1> outStream_V_last_V_tmp_mem;
								outStream_V_last_V_tmp_mem = (aesl_tmp_3[i_0].last).to_string(2).c_str();
								outStream_V_last_V_tvout_wrapc_buffer[hls_map_index].range(0, 0) = outStream_V_last_V_tmp_mem.range(0, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_last_V, "%s\n", (outStream_V_last_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_last_V, tvout_outStream_V_last_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_last_V_depth);
		sprintf(tvout_outStream_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_last_V, tvout_outStream_V_last_V);

		// release memory allocation
		delete [] outStream_V_last_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_last_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_last_V, wrapc_stream_size_out_outStream_V_last_V);
		sprintf(wrapc_stream_size_out_outStream_V_last_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_last_V, wrapc_stream_size_out_outStream_V_last_V);
		sprintf(wrapc_stream_size_out_outStream_V_last_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_last_V, wrapc_stream_size_out_outStream_V_last_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_id_V, tvout_outStream_V_id_V);

		sc_bv<5>* outStream_V_id_V_tvout_wrapc_buffer = new sc_bv<5>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_id_V
		{
			// bitslice(4, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.id.V(4, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].id
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].id
							// regulate_c_name       : outStream_V_id_V
							// input_type_conversion : (aesl_tmp_3[i_0].id).to_string(2).c_str()
							if (&(aesl_tmp_3[0].id) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<5> outStream_V_id_V_tmp_mem;
								outStream_V_id_V_tmp_mem = (aesl_tmp_3[i_0].id).to_string(2).c_str();
								outStream_V_id_V_tvout_wrapc_buffer[hls_map_index].range(4, 0) = outStream_V_id_V_tmp_mem.range(4, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_id_V, "%s\n", (outStream_V_id_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_id_V, tvout_outStream_V_id_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_id_V_depth);
		sprintf(tvout_outStream_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_id_V, tvout_outStream_V_id_V);

		// release memory allocation
		delete [] outStream_V_id_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_id_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_id_V, wrapc_stream_size_out_outStream_V_id_V);
		sprintf(wrapc_stream_size_out_outStream_V_id_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_id_V, wrapc_stream_size_out_outStream_V_id_V);
		sprintf(wrapc_stream_size_out_outStream_V_id_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_id_V, wrapc_stream_size_out_outStream_V_id_V);

		// [[transaction]]
		sprintf(tvout_outStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_dest_V, tvout_outStream_V_dest_V);

		sc_bv<6>* outStream_V_dest_V_tvout_wrapc_buffer = new sc_bv<6>[aesl_tmp_4 - aesl_tmp_5];

		// RTL Name: outStream_V_dest_V
		{
			// bitslice(5, 0)
			{
				int hls_map_index = 0;
				// celement: outStream.V.dest.V(5, 0)
				{
					// carray: (aesl_tmp_5) => (aesl_tmp_4 - 1) @ (1)
					for (int i_0 = aesl_tmp_5; i_0 <= aesl_tmp_4 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (1)
						for (int i_1 = 0; i_1 <= 0; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_3[i_0].dest
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_3[0].dest
							// regulate_c_name       : outStream_V_dest_V
							// input_type_conversion : (aesl_tmp_3[i_0].dest).to_string(2).c_str()
							if (&(aesl_tmp_3[0].dest) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<6> outStream_V_dest_V_tmp_mem;
								outStream_V_dest_V_tmp_mem = (aesl_tmp_3[i_0].dest).to_string(2).c_str();
								outStream_V_dest_V_tvout_wrapc_buffer[hls_map_index].range(5, 0) = outStream_V_dest_V_tmp_mem.range(5, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_4 - aesl_tmp_5; i++)
		{
			sprintf(tvout_outStream_V_dest_V, "%s\n", (outStream_V_dest_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_outStream_V_dest_V, tvout_outStream_V_dest_V);
		}

		tcl_file.set_num(aesl_tmp_4 - aesl_tmp_5, &tcl_file.outStream_V_dest_V_depth);
		sprintf(tvout_outStream_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_outStream_V_dest_V, tvout_outStream_V_dest_V);

		// release memory allocation
		delete [] outStream_V_dest_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_outStream_V_dest_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_dest_V, wrapc_stream_size_out_outStream_V_dest_V);
		sprintf(wrapc_stream_size_out_outStream_V_dest_V, "%d\n", aesl_tmp_4 - aesl_tmp_5);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_dest_V, wrapc_stream_size_out_outStream_V_dest_V);
		sprintf(wrapc_stream_size_out_outStream_V_dest_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_outStream_V_dest_V, wrapc_stream_size_out_outStream_V_dest_V);

		// push back output stream: "outStream"
		for (int i = 0; i < aesl_tmp_4; i++)
		{
			outStream.write(aesl_tmp_3[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "inStream_V_data"
		delete [] tvin_inStream_V_data;
		delete [] wrapc_stream_size_in_inStream_V_data;
		// release memory allocation: "inStream_V_keep_V"
		delete [] tvin_inStream_V_keep_V;
		delete [] wrapc_stream_size_in_inStream_V_keep_V;
		// release memory allocation: "inStream_V_strb_V"
		delete [] tvin_inStream_V_strb_V;
		delete [] wrapc_stream_size_in_inStream_V_strb_V;
		// release memory allocation: "inStream_V_user_V"
		delete [] tvin_inStream_V_user_V;
		delete [] wrapc_stream_size_in_inStream_V_user_V;
		// release memory allocation: "inStream_V_last_V"
		delete [] tvin_inStream_V_last_V;
		delete [] wrapc_stream_size_in_inStream_V_last_V;
		// release memory allocation: "inStream_V_id_V"
		delete [] tvin_inStream_V_id_V;
		delete [] wrapc_stream_size_in_inStream_V_id_V;
		// release memory allocation: "inStream_V_dest_V"
		delete [] tvin_inStream_V_dest_V;
		delete [] wrapc_stream_size_in_inStream_V_dest_V;
		// release memory allocation: "outStream_V_data"
		delete [] tvout_outStream_V_data;
		delete [] tvin_outStream_V_data;
		delete [] wrapc_stream_size_out_outStream_V_data;
		// release memory allocation: "outStream_V_keep_V"
		delete [] tvout_outStream_V_keep_V;
		delete [] tvin_outStream_V_keep_V;
		delete [] wrapc_stream_size_out_outStream_V_keep_V;
		// release memory allocation: "outStream_V_strb_V"
		delete [] tvout_outStream_V_strb_V;
		delete [] tvin_outStream_V_strb_V;
		delete [] wrapc_stream_size_out_outStream_V_strb_V;
		// release memory allocation: "outStream_V_user_V"
		delete [] tvout_outStream_V_user_V;
		delete [] tvin_outStream_V_user_V;
		delete [] wrapc_stream_size_out_outStream_V_user_V;
		// release memory allocation: "outStream_V_last_V"
		delete [] tvout_outStream_V_last_V;
		delete [] tvin_outStream_V_last_V;
		delete [] wrapc_stream_size_out_outStream_V_last_V;
		// release memory allocation: "outStream_V_id_V"
		delete [] tvout_outStream_V_id_V;
		delete [] tvin_outStream_V_id_V;
		delete [] wrapc_stream_size_out_outStream_V_id_V;
		// release memory allocation: "outStream_V_dest_V"
		delete [] tvout_outStream_V_dest_V;
		delete [] tvin_outStream_V_dest_V;
		delete [] wrapc_stream_size_out_outStream_V_dest_V;
		// release memory allocation: "output_ch_V"
		delete [] tvin_output_ch_V;
		// release memory allocation: "input_ch_V"
		delete [] tvin_input_ch_V;
		// release memory allocation: "fold_output_ch_V"
		delete [] tvin_fold_output_ch_V;
		// release memory allocation: "fold_input_ch_V"
		delete [] tvin_fold_input_ch_V;
		// release memory allocation: "kernel_dim_V"
		delete [] tvin_kernel_dim_V;
		// release memory allocation: "input_h_V"
		delete [] tvin_input_h_V;
		// release memory allocation: "input_w_V"
		delete [] tvin_input_w_V;
		// release memory allocation: "real_input_h_V"
		delete [] tvin_real_input_h_V;
		// release memory allocation: "leaky_V"
		delete [] tvin_leaky_V;
		// release memory allocation: "fold_win_area_V"
		delete [] tvin_fold_win_area_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}
