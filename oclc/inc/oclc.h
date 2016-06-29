
// These functions are used to control behavior of the libraries which
// call them.
//
// The current list of controls is as follows:
//
//    int __oclc_have_fast_fma32(void)
//        - fma on float arguments is faster than separate multiply then add
//
//    int __oclc_have_fast_fma64(void)
//        - fma on double arguments is faster than separate multiply then add
//
//    int __oclc_finite_only_opt(void)
//        - the application will only pass finite arguments and expects only finite results
//
//    int __oclc_fast_relaxed_opt(void)
//        - the aopplication accepts optimizations that may lower the accuracy of the results
//
//    int __oclc_daz_opt(void)
//        - the application allows subnormal inputs or outputs to be flushed to zero
//
//    int __oclc_amd_opt(void)
//        - the applicaiton is running on an AMD device
//
//    int __oclc_correctly_rounded_sqrt32(void)
//        - the application is expecting sqrt(float) to produce a correctly rounded result
//
//    int __oclc_ISA_version
//        - the ISA version of the target device
//
// it is expected that the implementation provides these as if compiled from the following
// C code:
//
//     __attribute__((always_inline, const)) int __oclc_...(void) { return 0; /* or 1 */ }
// 
// allowing them and any control flow associated with them to be optimized away


extern __attribute__((const)) int __oclc_have_fast_fma32(void);
extern __attribute__((const)) int __oclc_have_fast_fma64(void);
extern __attribute__((const)) int __oclc_finite_only_opt(void);
extern __attribute__((const)) int __oclc_fast_relaxed_opt(void);
extern __attribute__((const)) int __oclc_daz_opt(void);
extern __attribute__((const)) int __oclc_amd_opt(void);
extern __attribute__((const)) int __oclc_correctly_rounded_sqrt32(void);
extern __attribute__((const)) int __oclc_ISA_version(void);

