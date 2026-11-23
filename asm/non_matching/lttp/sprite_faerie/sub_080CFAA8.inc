	.ALIGN 2, 0
	.GLOBAL sub_080CFAA8
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CFAA8, function
sub_080CFAA8:
 
    push {r4-r7,lr} 
    mov r7, r10 
    mov r6, r9 
    mov r5, r8 
    push {r5-r7} 
    sub sp, sp, #4 
    lsl r0, r0, #24 
    lsr r5, r0, #24 
    ldr r3, _080CFB68  @ =gRam 
    ldr r0, _080CFB6C  @ =0x00000F92 
    add r2, r3, r0 
    add r2, r5, r2 
    ldr r1, _080CFB70  @ =0x00000996 
    add r0, r3, r1 
    ldrb r0, [r0] 
    lsr r0, r0, #3 
    mov r1, #1 
    and r0, r0, r1 
    strb r0, [r2] 
    ldr r2, _080CFB74  @ =0x000009B2 
    add r0, r3, r2 
    ldrb r0, [r0] 
    lsl r0, r0, #24 
    asr r0, r0, #24 
    add r6, r3, #0 
    cmp r0, #0 
    beq _080CFB44 
    ldr r3, _080CFB78  @ =0x00000FD2 
    add r0, r6, r3 
    add r4, r5, r0 
    ldrb r0, [r4] 
    cmp r0, #0 
    bne _080CFB44 
    add r0, r5, #0 
    bl sub_080C7A20 
    mov r1, #3 
    and r1, r1, r0 
    cmp r1, #0 
    beq _080CFB18 
    ldr r0, _080CFB7C  @ =0x00000F22 
    add r1, r6, r0 
    add r1, r5, r1 
    ldrb r0, [r1] 
    mvn r0, r0 
    add r0, r0, #1 
    strb r0, [r1] 
    ldr r2, _080CFB80  @ =0x00000FB2 
    add r1, r6, r2 
    add r1, r5, r1 
    ldrb r0, [r1] 
    mvn r0, r0 
    add r0, r0, #1 
    strb r0, [r1] 
    mov r0, #32 
    strb r0, [r4] 
_080CFB18: 
    ldr r3, _080CFB84  @ =0x00001042 
    add r0, r6, r3 
    add r0, r5, r0 
    ldrb r0, [r0] 
    cmp r0, #12 
    beq _080CFB44 
    ldr r0, _080CFB88  @ =0x00000F12 
    add r1, r6, r0 
    add r1, r5, r1 
    ldrb r0, [r1] 
    mvn r0, r0 
    add r0, r0, #1 
    strb r0, [r1] 
    ldr r2, _080CFB8C  @ =0x00000F62 
    add r1, r6, r2 
    add r1, r5, r1 
    ldrb r0, [r1] 
    mvn r0, r0 
    add r0, r0, #1 
    strb r0, [r1] 
    mov r0, #32 
    strb r0, [r4] 
_080CFB44: 
    ldr r3, _080CFB7C  @ =0x00000F22 
    add r0, r6, r3 
    add r0, r5, r0 
    ldrb r0, [r0] 
    cmp r0, #0 
    beq _080CFBA8 
    lsl r0, r0, #24 
    cmp r0, #0 
    blt _080CFB94 
    ldr r1, _080CFB90  @ =0x00001122 
    add r0, r6, r1 
    add r0, r5, r0 
    ldrb r1, [r0] 
    mov r0, #64 
    add r2, r0, #0 
    orr r2, r2, r1 
    b _080CFBA0 
    .byte 0x00 
    .byte 0x00 
_080CFB68: 
    .4byte gRam 
_080CFB6C: 
    .4byte 0x00000F92 
_080CFB70: 
    .4byte 0x00000996 
_080CFB74: 
    .4byte 0x000009B2 
_080CFB78: 
    .4byte 0x00000FD2 
_080CFB7C: 
    .4byte 0x00000F22 
_080CFB80: 
    .4byte 0x00000FB2 
_080CFB84: 
    .4byte 0x00001042 
_080CFB88: 
    .4byte 0x00000F12 
_080CFB8C: 
    .4byte 0x00000F62 
_080CFB90: 
    .4byte 0x00001122 
_080CFB94: 
    ldr r2, _080CFCFC  @ =0x00001122 
    add r0, r6, r2 
    add r0, r5, r0 
    ldrb r0, [r0] 
    mov r2, #191 
    and r2, r2, r0 
_080CFBA0: 
    ldr r3, _080CFCFC  @ =0x00001122 
    add r0, r6, r3 
    add r0, r5, r0 
    strb r2, [r0] 
_080CFBA8: 
    add r0, r5, #0 
    bl Sprite3_Move 
    ldr r4, _080CFD00  @ =gRam 
    ldr r0, _080CFD04  @ =0x00000996 
    add r6, r4, r0 
    ldrb r1, [r6] 
    mov r0, #63 
    and r0, r0, r1 
    cmp r0, #0 
    bne _080CFC10 
    bl GetRandomInt 
    ldr r2, _080CFD08  @ =0x00000968 
    add r1, r4, r2 
    strb r0, [r1] 
    ldr r3, _080CFD0C  @ =0x000016C5 
    add r0, r4, r3 
    ldrb r1, [r0] 
    add r2, r2, #1 
    add r0, r4, r2 
    strb r1, [r0] 
    bl GetRandomInt 
    ldr r3, _080CFD10  @ =0x0000096C 
    add r1, r4, r3 
    strb r0, [r1] 
    ldr r1, _080CFD14  @ =0x000016C1 
    add r0, r4, r1 
    ldrb r1, [r0] 
    ldr r2, _080CFD18  @ =0x0000096D 
    add r0, r4, r2 
    strb r1, [r0] 
    add r0, r5, #0 
    mov r1, #16 
    bl sub_080C2DCC 
    ldr r3, _080CFD1C  @ =0x00000F62 
    add r0, r4, r3 
    add r0, r5, r0 
    mov r2, #150 
    lsl r2, r2, #4 
    add r1, r4, r2 
    ldrb r1, [r1] 
    strb r1, [r0] 
    add r3, r3, #80 
    add r0, r4, r3 
    add r0, r5, r0 
    add r2, r2, #1 
    add r1, r4, r2 
    ldrb r1, [r1] 
    strb r1, [r0] 
_080CFC10: 
    ldrb r0, [r6] 
    mov r3, #15 
    and r3, r3, r0 
    cmp r3, #0 
    bne _080CFCC0 
    ldr r0, _080CFD20  @ =0x00000961 
    add r7, r4, r0 
    mov r0, #255 
    strb r0, [r7] 
    ldr r1, _080CFD24  @ =0x00000965 
    add r1, r1, r4 
    mov r12, r1 
    mov r2, #1 
    neg r2, r2 
    mov r9, r2 
    add r0, r2, #0 
    strb r0, [r1] 
    ldr r1, _080CFD1C  @ =0x00000F62 
    add r0, r4, r1 
    add r0, r5, r0 
    ldrb r0, [r0] 
    mov r2, #150 
    lsl r2, r2, #4 
    add r2, r2, r4 
    mov r8, r2 
    strb r0, [r2] 
    lsl r0, r0, #24 
    cmp r0, #0 
    blt _080CFC4C 
    strb r3, [r7] 
_080CFC4C: 
    ldr r1, _080CFD28  @ =0x00000F12 
    add r0, r4, r1 
    add r2, r5, r0 
    ldrb r0, [r2] 
    ldr r1, _080CFD2C  @ =0x00000964 
    add r6, r4, r1 
    strb r0, [r6] 
    lsl r0, r0, #24 
    cmp r0, #0 
    blt _080CFC64 
    mov r0, r12 
    strb r3, [r0] 
_080CFC64: 
    mov r1, r8 
    mov r0, #0 
    ldrsh r1, [r1, r0] 
    mov r10, r1 
    mov r0, #0 
    ldrsh r1, [r6, r0] 
    add r0, r1, #0 
    add r0, r0, r10 
    asr r0, r0, #1 
    strb r0, [r2] 
    ldrb r0, [r7] 
    mov r1, r9 
    orr r0, r0, r1 
    strb r0, [r7] 
    mov r2, r12 
    ldrb r0, [r2] 
    orr r0, r0, r1 
    strb r0, [r2] 
    ldr r1, _080CFD30  @ =0x00000FB2 
    add r0, r4, r1 
    add r0, r5, r0 
    ldrb r0, [r0] 
    mov r2, r8 
    strb r0, [r2] 
    lsl r0, r0, #24 
    cmp r0, #0 
    blt _080CFC9C 
    strb r3, [r7] 
_080CFC9C: 
    ldr r1, _080CFD34  @ =0x00000F22 
    add r0, r4, r1 
    add r2, r5, r0 
    ldrb r0, [r2] 
    strb r0, [r6] 
    lsl r0, r0, #24 
    cmp r0, #0 
    blt _080CFCB0 
    mov r0, r12 
    strb r3, [r0] 
_080CFCB0: 
    mov r1, r8 
    mov r3, #0 
    ldrsh r0, [r1, r3] 
    mov r3, #0 
    ldrsh r1, [r6, r3] 
    add r0, r0, r1 
    asr r0, r0, #1 
    strb r0, [r2] 
_080CFCC0: 
    add r0, r5, #0 
    bl sub_080C2C4C 
    bl GetRandomInt 
    ldr r2, _080CFD00  @ =gRam 
    ldr r3, _080CFD38  @ =0x00001152 
    add r1, r2, r3 
    add r4, r5, r1 
    ldr r3, _080CFD3C  @ =gUnknown_08174A10 
    mov r1, #1 
    and r1, r1, r0 
    add r1, r1, r3 
    ldrb r0, [r1] 
    ldrb r1, [r4] 
    add r0, r0, r1 
    strb r0, [r4] 
    ldrb r1, [r3] 
    add r0, r0, r1 
    strb r0, [r4] 
    ldr r3, _080CFD40  @ =0x00001142 
    add r2, r2, r3 
    add r1, r5, r2 
    ldrb r0, [r1] 
    cmp r0, #7 
    bhi _080CFD44 
    mov r0, #8 
    strb r0, [r1] 
    mov r0, #5 
    b _080CFD4E 
_080CFCFC: 
    .4byte 0x00001122 
_080CFD00: 
    .4byte gRam 
_080CFD04: 
    .4byte 0x00000996 
_080CFD08: 
    .4byte 0x00000968 
_080CFD0C: 
    .4byte 0x000016C5 
_080CFD10: 
    .4byte 0x0000096C 
_080CFD14: 
    .4byte 0x000016C1 
_080CFD18: 
    .4byte 0x0000096D 
_080CFD1C: 
    .4byte 0x00000F62 
_080CFD20: 
    .4byte 0x00000961 
_080CFD24: 
    .4byte 0x00000965 
_080CFD28: 
    .4byte 0x00000F12 
_080CFD2C: 
    .4byte 0x00000964 
_080CFD30: 
    .4byte 0x00000FB2 
_080CFD34: 
    .4byte 0x00000F22 
_080CFD38: 
    .4byte 0x00001152 
_080CFD3C: 
    .4byte gUnknown_08174A10 
_080CFD40: 
    .4byte 0x00001142 
_080CFD44: 
    cmp r0, #24 
    bls _080CFD50 
    mov r0, #24 
    strb r0, [r1] 
    mov r0, #251 
_080CFD4E: 
    strb r0, [r4] 
_080CFD50: 
    add sp, sp, #4 
    pop {r3-r5} 
    mov r8, r3 
    mov r9, r4 
    mov r10, r5 
    pop {r4-r7} 
    pop {r0} 
    bx r0 
    
