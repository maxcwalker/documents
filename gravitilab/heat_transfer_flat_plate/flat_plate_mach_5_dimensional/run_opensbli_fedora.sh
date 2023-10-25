#!bin/bash
rm *.h5
eval "$(conda shell.bash hook)"
conda activate venv3
python $1
conda activate venv3
make clean
make opensbli_mpi
mpirun -np 8 ./opensbli_mpi
