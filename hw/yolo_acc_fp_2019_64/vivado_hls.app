<project xmlns="com.autoesl.autopilot.project" name="yolo_acc_fp_2019_64" top="yolo_acc_top">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../tb/yolo_acc_tb.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../tb/weight_file.h" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../tb/layer_output_sdk.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../tb/layer_input.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="yolo_acc_fp_2019_64/src/layer_parameter.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="yolo_acc_fp_2019_64/src/yolo_acc.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="yolo_acc_fp_2019_64/src/yolo_acc.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="yolo_acc_fp_2019_64/src/yolo_fp.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="yolo_acc_fp_2019_64/src/yolo_stream.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>
