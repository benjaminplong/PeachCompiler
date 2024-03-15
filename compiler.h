#ifndef PEACHCOMPILER_H
#define PEACHCOMPILER_H
#include <stdio.h>
enum
{
  COMPILER_FILE_COMPILED_OK,
  COMPLIER_FAILED_WITH_ERRORS
};
struct compile_process
{
  //Compiler flags for how the file should be compiled
  int flags;

  struct compile_process_input_file
  {
    FILE* fp;
    const char* abs_path;
  }cfile;

  FILE* ofile;
};
int compile_file(const char* filename, const char* out_filename, int flags);
struct compile_process* compile_process_create(const char* filename, const char* filename_out, int flags)
#endif