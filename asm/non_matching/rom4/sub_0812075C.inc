	THUMB_FUNC_START sub_0812075C
sub_0812075C: @ 0x0812075C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	ldr r2, _0812081C  @ =gRam
	ldr r1, _08120820  @ =0x00000E29
	add r0, r2, r1
	ldr r3, [sp, #8]
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r4, _08120824  @ =0x00001733
	add r0, r2, r4
	strb r1, [r0]
	ldr r7, _08120828  @ =0x00000E1F
	add r0, r2, r7
	add r0, r3, r0
	ldrb r3, [r0]
	sub r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldrb r1, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r7, r7, r2
	mov r8, r7
_08120798:
	lsl r1, r1, #24
	asr r2, r1, #24
	ldr r0, _0812082C  @ =gUnknown_02006890
	add r3, r2, r0
	ldrb r0, [r3]
	mov r9, r1
	cmp r0, #13
	bne _081207AA
	b _081209A4
_081207AA:
	ldr r4, _08120830  @ =gUnknown_02006880
	add r1, r2, r4
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _081207BC
	b _0812099C
_081207BC:
	mov r0, #3
	strb r0, [r1]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #13
	bne _081207D0
	b _081209A4
_081207D0:
	cmp r0, #2
	beq _081207D6
	b _0812099C
_081207D6:
	ldr r0, _0812081C  @ =gRam
	ldr r7, _08120824  @ =0x00001733
	add r1, r0, r7
	ldrb r1, [r1]
	mov r12, r0
	cmp r1, #0
	beq _081207E6
	b _081209A4
_081207E6:
	ldr r0, _08120834  @ =0x00001732
	add r0, r0, r12
	ldrb r0, [r0]
	cmp r0, #9
	bne _0812080A
	mov r4, #9
	ldr r3, _0812082C  @ =gUnknown_02006890
_081207F4:
	lsl r0, r4, #24
	asr r1, r0, #24
	add r2, r1, r3
	ldrb r0, [r2]
	cmp r0, #13
	beq _08120838
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _081207F4
_0812080A:
	ldr r1, _08120834  @ =0x00001732
	add r1, r1, r12
	ldrb r0, [r1]
	add r0, r0, #1
	cmp r0, #10
	bne _0812083E
	mov r0, #9
	b _0812083E
	.byte 0x00
	.byte 0x00
_0812081C:
	.4byte gRam
_08120820:
	.4byte 0x00000E29
_08120824:
	.4byte 0x00001733
_08120828:
	.4byte 0x00000E1F
_0812082C:
	.4byte gUnknown_02006890
_08120830:
	.4byte gUnknown_02006880
_08120834:
	.4byte 0x00001732
_08120838:
	mov r0, #0
	strb r0, [r2]
	b _08120846
_0812083E:
	strb r0, [r1]
	ldr r0, _08120870  @ =0x00001732
	add r0, r0, r12
	ldrb r4, [r0]
_08120846:
	ldr r6, _08120874  @ =gRam
	ldr r0, _08120878  @ =0x00001734
	add r5, r6, r0
	ldr r3, _0812087C  @ =gUnknown_02006AD8
	ldr r1, _08120880  @ =0x0000096C
	add r1, r1, r6
	mov r10, r1
_08120854:
	strb r4, [r5]
	lsr r4, r4, #4
	ldrb r1, [r3]
	add r0, r1, #3
	cmp r0, #207
	bgt _08120884
	strb r0, [r3]
	add r1, r1, #6
	mov r2, #151
	lsl r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	b _08120892
	.byte 0x00
	.byte 0x00
_08120870:
	.4byte 0x00001732
_08120874:
	.4byte gRam
_08120878:
	.4byte 0x00001734
_0812087C:
	.4byte gUnknown_02006AD8
_08120880:
	.4byte 0x0000096C
_08120884:
	mov r0, #207
	strb r0, [r3]
	mov r7, #151
	lsl r7, r7, #4
	add r1, r6, r7
	mov r0, #207
	strb r0, [r1]
_08120892:
	lsl r0, r4, #24
	asr r4, r0, #24
	ldr r1, _081208CC  @ =gUnknown_020068A0
	add r2, r4, r1
	ldrb r1, [r2]
	add r1, r1, #6
	strb r1, [r2]
	lsr r0, r0, #24
	mov r2, #63
	and r1, r1, r2
	str r3, [sp, #12]
	bl sub_080C06EC
	lsl r4, r4, #25
	lsr r4, r4, #24
	ldr r2, _081208D0  @ =gUnknown_03002B94
	mov r7, #0
	ldrsh r0, [r2, r7]
	ldr r3, [sp, #12]
	cmp r0, #0
	beq _081208D4
	mov r1, r8
	mov r2, #0
	ldrsh r0, [r1, r2]
	neg r0, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
	b _081208D8
	.byte 0x00
	.byte 0x00
_081208CC:
	.4byte gUnknown_020068A0
_081208D0:
	.4byte gUnknown_03002B94
_081208D4:
	mov r7, r8
	ldrh r2, [r7]
_081208D8:
	lsl r1, r4, #24
	asr r0, r1, #24
	ldr r7, _08120904  @ =gUnknown_020069A4
	add r0, r0, r7
	ldrh r0, [r0]
	add r0, r2, r0
	mov r2, r8
	strh r0, [r2]
	mov r7, r10
	mov r2, #0
	ldrsh r0, [r7, r2]
	ldr r7, _08120908  @ =gRam
	mov r12, r7
	cmp r0, #0
	beq _08120910
	ldr r2, _0812090C  @ =gUnknown_03002B98
	mov r7, #0
	ldrsh r0, [r2, r7]
	neg r0, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
	b _08120914
_08120904:
	.4byte gUnknown_020069A4
_08120908:
	.4byte gRam
_0812090C:
	.4byte gUnknown_03002B98
_08120910:
	ldr r0, _081209E8  @ =gUnknown_03002B98
	ldrh r2, [r0]
_08120914:
	asr r0, r1, #24
	ldr r1, _081209EC  @ =gUnknown_020069AC
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r2, r0
	ldr r2, _081209E8  @ =gUnknown_03002B98
	strh r0, [r2]
	ldrb r0, [r5]
	ldr r7, _081209F0  @ =gUnknown_020068A4
	add r0, r0, r7
	mov r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r1, [r5]
	add r7, r7, #64
	add r1, r1, r7
	ldr r2, _081209F4  @ =0x00000961
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r5]
	add r7, r7, #64
	add r0, r0, r7
	ldr r2, _081209E8  @ =gUnknown_03002B98
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r5]
	add r7, r7, #64
	add r0, r0, r7
	ldr r2, _081209F8  @ =gUnknown_03002B99
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r5]
	sub r0, r0, #16
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	blt _08120962
	b _08120854
_08120962:
	ldr r3, _081209FC  @ =gRam
	ldr r4, _08120A00  @ =0x00000968
	add r2, r3, r4
	ldr r7, _08120A04  @ =0x00000952
	add r1, r3, r7
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #8
	strh r0, [r2]
	ldr r1, _081209F8  @ =gUnknown_03002B99
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _0812099C
	ldr r0, _08120A08  @ =0x00000958
	add r0, r0, r12
	mov r3, r8
	ldrh r1, [r3]
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	ldrh r0, [r2]
	orr r0, r0, r1
	str r0, [sp]
	mov r0, #37
	mov r1, sp
	bl sub_0812A324
_0812099C:
	mov r4, r9
	lsr r0, r4, #24
	bl sub_08120D24
_081209A4:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r9
	lsr r1, r0, #24
	cmp r0, #0
	blt _081209B2
	b _08120798
_081209B2:
	ldr r0, _08120A0C  @ =gUnknown_020068A0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _081209C4
	ldr r1, _08120A10  @ =gUnknown_020069B4
	mov r0, #1
	strb r0, [r1]
_081209C4:
	ldr r0, _081209FC  @ =gRam
	ldr r7, _08120A14  @ =0x00000E1F
	add r1, r0, r7
	ldr r2, [sp, #8]
	add r1, r2, r1
	ldr r3, _08120A18  @ =0x00001732
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081209E8:
	.4byte gUnknown_03002B98
_081209EC:
	.4byte gUnknown_020069AC
_081209F0:
	.4byte gUnknown_020068A4
_081209F4:
	.4byte 0x00000961
_081209F8:
	.4byte gUnknown_03002B99
_081209FC:
	.4byte gRam
_08120A00:
	.4byte 0x00000968
_08120A04:
	.4byte 0x00000952
_08120A08:
	.4byte 0x00000958
_08120A0C:
	.4byte gUnknown_020068A0
_08120A10:
	.4byte gUnknown_020069B4
_08120A14:
	.4byte 0x00000E1F
_08120A18:
	.4byte 0x00001732
	THUMB_FUNC_END sub_0812075C

