/** \file RayTraceCUDA_kernel.cuh
 * \author Tomasz Jakubczyk
 * \brief RayTrace CUDA kernel header
 */

extern "C"
{
    __global__
    void RayTraceD(float* Br, float* Vb, float* VH, int Vb_length, int VH_length, HandlesStructures S, float* IC, float* PX);
}
