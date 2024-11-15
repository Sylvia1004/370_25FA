1. for verilator

    verilator --cc risc_v_processor.v adder.v ALU.v Decoder.v InstrMem.v PC.v two_to_one_Mux.v RegFile.v ImmGen.v DataMem.v ControlUnit.v ALUcontrol.v --exe --build sim_top.cpp -o simulation

    ./obj_dir/simulation

2. for sim.cpp

    NO .v for submodules should be included!!

3. for top.v

    put the elements you would like to display from cpp file in OUTPUT !!! 

    (to do this, assign your wire to a new op value and state this op in your ports)

