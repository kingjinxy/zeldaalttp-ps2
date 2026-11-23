	.ALIGN 2, 0
	.GLOBAL sub_080D17F4
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080D17F4, function
sub_080D17F4:
 
    push {r4-r7,lr} 
    mov r7, r10 
    mov r6, r9 
    mov r5, r8 
    push {r5-r7} 
    sub sp, sp, #20 
    lsl r0, r0, #24 
    lsr r0, r0, #24 
    str r0, [sp, #8] 
    mov r1, sp 
    add r1, r1, #5 
    add r0, sp, #4 
    ldr r2, [sp, #8] 
    bl sub_080C5ACC 
    lsl r0, r0, #24 
    lsr r0, r0, #24 
    mov r10, r0 
    cmp r0, #0 
    beq _080D181E 
    b _080D19E0 
_080D181E: 
    ldr r0, [sp, #8] 
    bl sub_080C6340 
    ldr r6, _080D19F0  @ =gRam 
    ldr r1, _080D19F4  @ =0x00000F92 
    add r0, r6, r1 
    ldr r2, [sp, #8] 
    add r0, r2, r0 
    ldrb r0, [r0] 
    str r0, [sp, #12] 
    ldr r3, _080D19F8  @ =0x00000968 
    add r0, r6, r3 
    mov r1, #0 
    ldrsb r1, [r0, r1] 
    ldr r4, _080D19FC  @ =0x00000969 
    add r0, r6, r4 
    ldrb r0, [r0] 
    lsl r0, r0, #24 
    asr r0, r0, #24 
    lsl r0, r0, #8 
    add r1, r1, r0 
    lsl r1, r1, #16 
    lsr r1, r1, #16 
    str r1, [sp, #16] 
    add r0, sp, #4 
    ldrb r1, [r0] 
    ldr r5, _080D1A00  @ =gUnknown_03003E74 
    ldrh r0, [r5] 
    add r0, r0, r1 
    lsl r0, r0, #16 
    lsr r0, r0, #16 
    ldr r7, _080D1A04  @ =gUnknown_08174AAC 
    ldr r1, [sp, #12] 
    lsl r5, r1, #4 
    add r2, r5, r7 
    sub r3, r3, #8 
    add r3, r3, r6 
    mov r9, r3 
    ldrh r1, [r3] 
    ldrh r2, [r2] 
    add r1, r1, r2 
    lsl r1, r1, #16 
    lsr r1, r1, #16 
    add r3, r7, #2 
    add r3, r5, r3 
    sub r4, r4, #5 
    add r4, r4, r6 
    mov r8, r4 
    ldrh r2, [r4] 
    ldrh r3, [r3] 
    add r2, r2, r3 
    lsl r2, r2, #16 
    lsr r2, r2, #16 
    add r4, r7, #4 
    add r4, r5, r4 
    add r3, r7, #6 
    add r3, r5, r3 
    ldrh r3, [r3] 
    lsl r3, r3, #8 
    ldrh r4, [r4] 
    add r3, r3, r4 
    ldr r4, [sp, #16] 
    orr r3, r3, r4 
    lsl r3, r3, #16 
    lsr r3, r3, #16 
    mov r4, r10 
    str r4, [sp] 
    bl sub_080C6004 
    add r0, sp, #4 
    ldrb r1, [r0] 
    ldr r2, _080D1A00  @ =gUnknown_03003E74 
    ldrh r0, [r2] 
    add r0, r0, r1 
    add r0, r0, #1 
    lsl r0, r0, #16 
    lsr r0, r0, #16 
    add r2, r7, #0 
    add r2, r2, #8 
    add r2, r5, r2 
    mov r3, r9 
    ldrh r1, [r3] 
    ldrh r2, [r2] 
    add r1, r1, r2 
    lsl r1, r1, #16 
    lsr r1, r1, #16 
    add r3, r7, #0 
    add r3, r3, #10 
    add r3, r5, r3 
    mov r4, r8 
    ldrh r2, [r4] 
    ldrh r3, [r3] 
    add r2, r2, r3 
    lsl r2, r2, #16 
    lsr r2, r2, #16 
    add r4, r7, #0 
    add r4, r4, #12 
    add r4, r5, r4 
    add r3, r7, #0 
    add r3, r3, #14 
    add r5, r5, r3 
    ldrh r3, [r5] 
    lsl r3, r3, #8 
    ldrh r4, [r4] 
    add r3, r3, r4 
    ldr r5, [sp, #16] 
    orr r3, r3, r5 
    lsl r3, r3, #16 
    lsr r3, r3, #16 
    mov r4, r10 
    str r4, [sp] 
    bl sub_080C6004 
    mov r4, #0 
    ldr r7, _080D1A08  @ =gUnknown_08174B2C 
_080D1904: 
    ldr r5, _080D1A00  @ =gUnknown_03003E74 
    mov r10, r5 
    add r0, sp, #4 
    ldrb r1, [r0] 
    ldrh r0, [r5] 
    add r0, r0, r1 
    add r0, r0, #2 
    lsl r5, r4, #24 
    asr r5, r5, #24 
    add r0, r5, r0 
    lsl r0, r0, #16 
    lsr r0, r0, #16 
    lsl r6, r5, #3 
    add r2, r6, r7 
    ldr r1, _080D19F0  @ =gRam 
    mov r3, #150 
    lsl r3, r3, #4 
    add r1, r1, r3 
    mov r8, r1 
    ldrh r1, [r1] 
    ldrh r2, [r2] 
    add r1, r1, r2 
    lsl r1, r1, #16 
    lsr r1, r1, #16 
    add r3, r7, #2 
    add r3, r6, r3 
    ldr r4, _080D1A0C  @ =gUnknown_03002B94 
    ldrh r2, [r4] 
    ldrh r3, [r3] 
    add r2, r2, r3 
    lsl r2, r2, #16 
    lsr r2, r2, #16 
    add r4, r7, #4 
    add r4, r6, r4 
    ldr r3, _080D1A10  @ =gUnknown_08174B32 
    add r6, r6, r3 
    ldrh r3, [r6] 
    lsl r3, r3, #8 
    ldrh r4, [r4] 
    add r3, r3, r4 
    ldr r4, [sp, #16] 
    orr r3, r3, r4 
    lsl r3, r3, #16 
    lsr r3, r3, #16 
    mov r4, #2 
    mov r9, r4 
    str r4, [sp] 
    bl sub_080C6004 
    add r5, r5, #1 
    lsl r5, r5, #24 
    lsr r4, r5, #24 
    asr r5, r5, #24 
    cmp r5, #2 
    ble _080D1904 
    ldr r0, [sp, #12] 
    sub r0, r0, #3 
    lsl r0, r0, #24 
    lsr r0, r0, #24 
    mov r4, #0 
    cmp r0, #2 
    bhi _080D1982 
    mov r4, #1 
_080D1982: 
    add r0, sp, #4 
    ldrb r1, [r0] 
    mov r5, r10 
    ldrh r0, [r5] 
    add r0, r0, r1 
    add r0, r0, #5 
    lsl r0, r0, #16 
    lsr r0, r0, #16 
    ldr r6, _080D1A14  @ =gUnknown_08174B44 
    lsl r4, r4, #24 
    asr r4, r4, #21 
    add r2, r4, r6 
    mov r3, r8 
    ldrh r1, [r3] 
    ldrh r2, [r2] 
    add r1, r1, r2 
    lsl r1, r1, #16 
    lsr r1, r1, #16 
    add r3, r6, #2 
    add r3, r4, r3 
    mov r5, r8 
    ldrh r2, [r5, #4] 
    ldrh r3, [r3] 
    add r2, r2, r3 
    lsl r2, r2, #16 
    lsr r2, r2, #16 
    add r5, r6, #4 
    add r5, r4, r5 
    add r6, r6, #6 
    add r4, r4, r6 
    ldrh r3, [r4] 
    lsl r3, r3, #8 
    ldrh r5, [r5] 
    add r3, r3, r5 
    ldr r4, [sp, #16] 
    orr r3, r3, r4 
    lsl r3, r3, #16 
    lsr r3, r3, #16 
    mov r5, r9 
    str r5, [sp] 
    bl sub_080C6004 
    ldr r0, [sp, #8] 
    mov r1, #255 
    mov r2, #5 
    bl sub_080C6350 
_080D19E0: 
    add sp, sp, #20 
    pop {r3-r5} 
    mov r8, r3 
    mov r9, r4 
    mov r10, r5 
    pop {r4-r7} 
    pop {r0} 
    bx r0 
_080D19F0: 
    .4byte gRam 
_080D19F4: 
    .4byte 0x00000F92 
_080D19F8: 
    .4byte 0x00000968 
_080D19FC: 
    .4byte 0x00000969 
_080D1A00: 
    .4byte gUnknown_03003E74 
_080D1A04: 
    .4byte gUnknown_08174AAC 
_080D1A08: 
    .4byte gUnknown_08174B2C 
_080D1A0C: 
    .4byte gUnknown_03002B94 
_080D1A10: 
    .4byte gUnknown_08174B32 
_080D1A14: 
    .4byte gUnknown_08174B44 
    
