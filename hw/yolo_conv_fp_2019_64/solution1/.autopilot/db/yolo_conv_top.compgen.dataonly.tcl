# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_CTRL_BUS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
output_ch_V { 
	dir I
	width 6
	depth 1
	mode ap_none
	offset 16
	offset_end 23
}
input_ch_V { 
	dir I
	width 6
	depth 1
	mode ap_none
	offset 24
	offset_end 31
}
fold_output_ch_V { 
	dir I
	width 4
	depth 1
	mode ap_none
	offset 32
	offset_end 39
}
fold_input_ch_V { 
	dir I
	width 4
	depth 1
	mode ap_none
	offset 40
	offset_end 47
}
kernel_dim_V { 
	dir I
	width 3
	depth 1
	mode ap_none
	offset 48
	offset_end 55
}
input_h_V { 
	dir I
	width 9
	depth 1
	mode ap_none
	offset 56
	offset_end 63
}
input_w_V { 
	dir I
	width 9
	depth 1
	mode ap_none
	offset 64
	offset_end 71
}
real_input_h_V { 
	dir I
	width 9
	depth 1
	mode ap_none
	offset 72
	offset_end 79
}
leaky_V { 
	dir I
	width 1
	depth 1
	mode ap_none
	offset 80
	offset_end 87
}
fold_win_area_V { 
	dir I
	width 3
	depth 1
	mode ap_none
	offset 88
	offset_end 95
}
}
dict set axilite_register_dict CTRL_BUS $port_CTRL_BUS

