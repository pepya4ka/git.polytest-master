// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "foo.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic foo::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic foo::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> foo::ap_ST_fsm_state1 = "1";
const sc_lv<4> foo::ap_ST_fsm_state2 = "10";
const sc_lv<4> foo::ap_ST_fsm_state3 = "100";
const sc_lv<4> foo::ap_ST_fsm_state4 = "1000";
const sc_lv<32> foo::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> foo::ap_const_lv32_1 = "1";
const sc_lv<32> foo::ap_const_lv32_2 = "10";
const sc_lv<3> foo::ap_const_lv3_0 = "000";
const sc_lv<32> foo::ap_const_lv32_3 = "11";
const sc_lv<3> foo::ap_const_lv3_4 = "100";
const sc_lv<3> foo::ap_const_lv3_1 = "1";
const sc_lv<1> foo::ap_const_lv1_1 = "1";
const bool foo::ap_const_boolean_1 = true;

foo::foo(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln9_1_fu_81_p2);
    sensitive << ( acc );
    sensitive << ( d_load_reg_106 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln8_fu_55_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln8_fu_55_p2 );

    SC_METHOD(thread_d_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln9_1_fu_67_p1 );
    sensitive << ( zext_ln9_fu_72_p1 );

    SC_METHOD(thread_d_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_d_d0);
    sensitive << ( acc );
    sensitive << ( d_load_reg_106 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_d_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_fu_61_p2);
    sensitive << ( i_0_reg_43 );

    SC_METHOD(thread_icmp_ln8_fu_55_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_43 );

    SC_METHOD(thread_zext_ln9_1_fu_67_p1);
    sensitive << ( i_fu_61_p2 );

    SC_METHOD(thread_zext_ln9_fu_72_p1);
    sensitive << ( i_0_reg_43 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln8_fu_55_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
    acc = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "foo_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, d_address0, "(port)d_address0");
    sc_trace(mVcdFile, d_ce0, "(port)d_ce0");
    sc_trace(mVcdFile, d_we0, "(port)d_we0");
    sc_trace(mVcdFile, d_d0, "(port)d_d0");
    sc_trace(mVcdFile, d_q0, "(port)d_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, acc, "acc");
    sc_trace(mVcdFile, i_fu_61_p2, "i_fu_61_p2");
    sc_trace(mVcdFile, i_reg_96, "i_reg_96");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln8_fu_55_p2, "icmp_ln8_fu_55_p2");
    sc_trace(mVcdFile, d_load_reg_106, "d_load_reg_106");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, i_0_reg_43, "i_0_reg_43");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln9_1_fu_67_p1, "zext_ln9_1_fu_67_p1");
    sc_trace(mVcdFile, zext_ln9_fu_72_p1, "zext_ln9_fu_72_p1");
    sc_trace(mVcdFile, add_ln9_1_fu_81_p2, "add_ln9_1_fu_81_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("foo.hdltvin.dat");
    mHdltvoutHandle.open("foo.hdltvout.dat");
}

foo::~foo() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void foo::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_0_reg_43 = i_reg_96.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_43 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        acc = add_ln9_1_fu_81_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        d_load_reg_106 = d_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_96 = i_fu_61_p2.read();
    }
}

void foo::thread_add_ln9_1_fu_81_p2() {
    add_ln9_1_fu_81_p2 = (!d_load_reg_106.read().is_01() || !acc.read().is_01())? sc_lv<32>(): (sc_biguint<32>(d_load_reg_106.read()) + sc_biguint<32>(acc.read()));
}

void foo::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void foo::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void foo::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void foo::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void foo::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_fu_55_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void foo::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void foo::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_fu_55_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void foo::thread_d_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        d_address0 =  (sc_lv<3>) (zext_ln9_fu_72_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        d_address0 =  (sc_lv<3>) (zext_ln9_1_fu_67_p1.read());
    } else {
        d_address0 = "XXX";
    }
}

void foo::thread_d_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        d_ce0 = ap_const_logic_1;
    } else {
        d_ce0 = ap_const_logic_0;
    }
}

void foo::thread_d_d0() {
    d_d0 = (!d_load_reg_106.read().is_01() || !acc.read().is_01())? sc_lv<32>(): (sc_biguint<32>(d_load_reg_106.read()) + sc_biguint<32>(acc.read()));
}

void foo::thread_d_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        d_we0 = ap_const_logic_1;
    } else {
        d_we0 = ap_const_logic_0;
    }
}

void foo::thread_i_fu_61_p2() {
    i_fu_61_p2 = (!i_0_reg_43.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_0_reg_43.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void foo::thread_icmp_ln8_fu_55_p2() {
    icmp_ln8_fu_55_p2 = (!i_0_reg_43.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_43.read() == ap_const_lv3_4);
}

void foo::thread_zext_ln9_1_fu_67_p1() {
    zext_ln9_1_fu_67_p1 = esl_zext<64,3>(i_fu_61_p2.read());
}

void foo::thread_zext_ln9_fu_72_p1() {
    zext_ln9_fu_72_p1 = esl_zext<64,3>(i_0_reg_43.read());
}

void foo::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln8_fu_55_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<4>) ("XXXX");
            break;
    }
}

void foo::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"d_address0\" :  \"" << d_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"d_ce0\" :  \"" << d_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"d_we0\" :  \"" << d_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"d_d0\" :  \"" << d_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"d_q0\" :  \"" << d_q0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

