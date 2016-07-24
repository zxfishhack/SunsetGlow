all:libSunsetGlow.a example.out compute-client.out compute-responser.out compute-server.out 

ALL_INCLUESlibSunsetGlow.a= include//SGParallelMachine.h include//SGParallelMachine.h

libSunsetGlow.a:  build/src_SGParallelMachine_cpp.o build/src_compute_SGCompute_CS_pb-c_c.o build/src_compute_SGCompute_SR_pb-c_c.o build/third_protobuf-c_protobuf-c_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-client_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-data-buffer_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-dispatch_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-server_c.o 
	rm -f libSunsetGlow.a
	ar rcs libSunsetGlow.a  build/src_SGParallelMachine_cpp.o build/src_compute_SGCompute_CS_pb-c_c.o build/src_compute_SGCompute_SR_pb-c_c.o build/third_protobuf-c_protobuf-c_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-client_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-data-buffer_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-dispatch_c.o build/third_protobuf-c-rpc_protobuf-c-rpc-server_c.o ${SELF_VARIABLES}
build/src_SGParallelMachine_cpp.o : src/SGParallelMachine.cpp   ${ALL_INCLUESlibSunsetGlow.a}
	g++ -std=c++11 -O3 -g -fPIC -o build/src_SGParallelMachine_cpp.o -c src/SGParallelMachine.cpp -Iinclude -I../Renascence/include/ -Ithird
  
build/src_compute_SGCompute_CS_pb-c_c.o : src/compute/SGCompute.CS.pb-c.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/src_compute_SGCompute_CS_pb-c_c.o -c src/compute/SGCompute.CS.pb-c.c -Iinclude -I../Renascence/include/ -Ithird
  
build/src_compute_SGCompute_SR_pb-c_c.o : src/compute/SGCompute.SR.pb-c.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/src_compute_SGCompute_SR_pb-c_c.o -c src/compute/SGCompute.SR.pb-c.c -Iinclude -I../Renascence/include/ -Ithird
  
build/third_protobuf-c_protobuf-c_c.o : third/protobuf-c/protobuf-c.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/third_protobuf-c_protobuf-c_c.o -c third/protobuf-c/protobuf-c.c -Iinclude -I../Renascence/include/ -Ithird
  
build/third_protobuf-c-rpc_protobuf-c-rpc-client_c.o : third/protobuf-c-rpc/protobuf-c-rpc-client.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/third_protobuf-c-rpc_protobuf-c-rpc-client_c.o -c third/protobuf-c-rpc/protobuf-c-rpc-client.c -Iinclude -I../Renascence/include/ -Ithird
  
build/third_protobuf-c-rpc_protobuf-c-rpc-data-buffer_c.o : third/protobuf-c-rpc/protobuf-c-rpc-data-buffer.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/third_protobuf-c-rpc_protobuf-c-rpc-data-buffer_c.o -c third/protobuf-c-rpc/protobuf-c-rpc-data-buffer.c -Iinclude -I../Renascence/include/ -Ithird
  
build/third_protobuf-c-rpc_protobuf-c-rpc-dispatch_c.o : third/protobuf-c-rpc/protobuf-c-rpc-dispatch.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/third_protobuf-c-rpc_protobuf-c-rpc-dispatch_c.o -c third/protobuf-c-rpc/protobuf-c-rpc-dispatch.c -Iinclude -I../Renascence/include/ -Ithird
  
build/third_protobuf-c-rpc_protobuf-c-rpc-server_c.o : third/protobuf-c-rpc/protobuf-c-rpc-server.c   ${ALL_INCLUESlibSunsetGlow.a}
	gcc -std=c11 -O3 -g -fPIC -o build/third_protobuf-c-rpc_protobuf-c-rpc-server_c.o -c third/protobuf-c-rpc/protobuf-c-rpc-server.c -Iinclude -I../Renascence/include/ -Ithird
  

ALL_INCLUESexample.out=

example.out:  build/simple_main_cpp.o libSunsetGlow.a
	g++ -std=c++11   build/simple_main_cpp.o -O3 -g -fPIC   ./libSunsetGlow.a -o example.out ${SELF_VARIABLES}
build/simple_main_cpp.o : simple_main.cpp libSunsetGlow.a  ${ALL_INCLUESexample.out}
	g++ -std=c++11 -O3 -g -fPIC -o build/simple_main_cpp.o -c simple_main.cpp -Iinclude -I../Renascence/include/ -Ithird
  

ALL_INCLUEScompute-client.out=

compute-client.out:  build/__compute-client_cpp.o libSunsetGlow.a
	g++ -std=c++11   build/__compute-client_cpp.o -O3 -g -fPIC   ./libSunsetGlow.a -o compute-client.out ${SELF_VARIABLES}
build/__compute-client_cpp.o : ./compute-client.cpp libSunsetGlow.a  ${ALL_INCLUEScompute-client.out}
	g++ -std=c++11 -O3 -g -fPIC -o build/__compute-client_cpp.o -c ./compute-client.cpp -Iinclude -I../Renascence/include/ -Ithird
  

ALL_INCLUEScompute-responser.out=

compute-responser.out:  build/__compute-responser_cpp.o libSunsetGlow.a
	g++ -std=c++11   build/__compute-responser_cpp.o -O3 -g -fPIC   ./libSunsetGlow.a -o compute-responser.out ${SELF_VARIABLES}
build/__compute-responser_cpp.o : ./compute-responser.cpp libSunsetGlow.a  ${ALL_INCLUEScompute-responser.out}
	g++ -std=c++11 -O3 -g -fPIC -o build/__compute-responser_cpp.o -c ./compute-responser.cpp -Iinclude -I../Renascence/include/ -Ithird
  

ALL_INCLUEScompute-server.out=

compute-server.out:  build/__compute-server_cpp.o libSunsetGlow.a
	g++ -std=c++11   build/__compute-server_cpp.o -O3 -g -fPIC   ./libSunsetGlow.a -o compute-server.out ${SELF_VARIABLES}
build/__compute-server_cpp.o : ./compute-server.cpp libSunsetGlow.a  ${ALL_INCLUEScompute-server.out}
	g++ -std=c++11 -O3 -g -fPIC -o build/__compute-server_cpp.o -c ./compute-server.cpp -Iinclude -I../Renascence/include/ -Ithird
  

clean:
	rm build/*.o
	rm libSunsetGlow.a
	rm example.out
	rm compute-client.out
	rm compute-responser.out
	rm compute-server.out