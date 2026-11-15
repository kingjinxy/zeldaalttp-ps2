	THUMB_FUNC_START sub_08123080
sub_08123080: @ 0x08123080
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _081232A4  @ =gUnknown_02006936
	ldrh r2, [r1]
	sub r0, r2, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _081230A0
	b _08123292
_081230A0:
	strh r2, [r1]
	add r1, r1, #2
	ldrb r0, [r1]
	ldr r5, _081232A8  @ =gRam
	cmp r0, #0
	bne _081230B8
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081232AC  @ =0x00000A3C
	add r1, r5, r0
	ldr r0, _081232B0  @ =0x0000FFF3
	strh r0, [r1]
_081230B8:
	add r2, r5, #0
	ldr r1, _081232B4  @ =0x00001827
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _081230CE
	b _08123292
_081230CE:
	mov r4, #1
	strb r4, [r1]
	ldr r1, _081232B8  @ =0x00001832
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _081230E6
	strb r4, [r1]
	mov r0, #41
	bl sub_080C1A8C
_081230E6:
	ldr r2, _081232BC  @ =0x00000E1F
	add r0, r5, r2
	add r2, r6, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _08123112
	ldr r0, _081232C0  @ =0x00001844
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08123112
	strb r4, [r2]
	bl sub_0808D4E8
	mov r0, #0
	mov r1, #56
	bl sub_081233BC
_08123112:
	ldr r0, _081232C4  @ =gUnknown_020068F8
	strb r6, [r0]
	ldr r1, _081232C8  @ =gUnknown_020068F9
	mov r0, #0
	strb r0, [r1]
	ldr r1, _081232CC  @ =gUnknown_03003E74
	mov r0, #0
	strh r0, [r1]
	mov r6, #11
	ldr r3, _081232A8  @ =gRam
_08123126:
	ldr r1, _081232D0  @ =gUnknown_020068EC
	add r7, r6, r1
	ldrb r0, [r7]
	cmp r0, #255
	bne _08123132
	b _08123260
_08123132:
	ldr r0, _081232D4  @ =gUnknown_020068E0
	add r2, r6, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0812314C
	mov r1, #1
	strb r1, [r2]
	ldrb r0, [r7]
	eor r0, r0, r1
	strb r0, [r7]
_0812314C:
	ldr r5, _081232C4  @ =gUnknown_020068F8
	ldr r1, _081232D8  @ =0x00000E29
	add r0, r3, r1
	ldrb r2, [r5]
	add r0, r0, r2
	ldrb r1, [r7]
	strb r1, [r0]
	ldrb r1, [r5]
	ldr r0, _081232DC  @ =gUnknown_03002FF5
	add r1, r1, r0
	ldr r2, _081232E0  @ =gUnknown_020068A4
	add r2, r6, r2
	str r2, [sp]
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r1, [r5]
	ldr r0, _081232E4  @ =gUnknown_03003009
	add r1, r1, r0
	ldr r2, _081232E8  @ =gUnknown_020068B0
	add r2, r6, r2
	str r2, [sp, #4]
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r1, [r5]
	ldr r0, _081232EC  @ =gUnknown_03002FFF
	add r1, r1, r0
	ldr r2, _081232F0  @ =gUnknown_020068BC
	add r2, r6, r2
	str r2, [sp, #8]
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r1, [r5]
	ldr r0, _081232F4  @ =gUnknown_03003013
	add r1, r1, r0
	ldr r2, _081232F8  @ =gUnknown_020068C8
	add r2, r2, r6
	mov r10, r2
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r1, [r5]
	ldr r0, _081232FC  @ =0x00000A92
	add r0, r0, r3
	mov r8, r0
	add r1, r1, r8
	ldr r2, _08123300  @ =gUnknown_020068D4
	add r2, r2, r6
	mov r9, r2
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _08123304  @ =0x00000DED
	add r1, r3, r0
	ldrb r2, [r5]
	add r1, r1, r2
	ldr r2, _08123308  @ =gUnknown_02006880
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0812330C  @ =0x00000DF7
	add r1, r3, r0
	ldrb r2, [r5]
	add r1, r1, r2
	ldr r2, _08123310  @ =gUnknown_0200688C
	add r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08123314  @ =gUnknown_02006898
	add r0, r6, r1
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	ldr r2, _08123318  @ =0x00000A88
	add r0, r3, r2
	ldrb r2, [r5]
	add r0, r0, r2
	strb r1, [r0]
	ldrb r0, [r5]
	str r3, [sp, #12]
	bl sub_080BF774
	ldrb r0, [r5]
	bl sub_080C1768
	ldrb r0, [r5]
	mov r1, #0
	bl sub_080BF804
	ldr r3, [sp, #12]
	ldr r0, _0812331C  @ =0x00001734
	add r4, r3, r0
	mov r1, #0
	strb r1, [r4]
	ldrb r0, [r5]
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #239
	bls _08123210
	mov r0, #255
	strb r0, [r4]
_08123210:
	ldrb r0, [r5]
	str r3, [sp, #12]
	bl sub_08123324
	ldrb r1, [r4]
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldr r3, [sp, #12]
	cmp r0, #0
	bge _08123226
	strb r1, [r7]
_08123226:
	ldrb r0, [r5]
	ldr r2, _081232DC  @ =gUnknown_03002FF5
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r1, [sp]
	strb r0, [r1]
	ldrb r0, [r5]
	ldr r2, _081232E4  @ =gUnknown_03003009
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r1, [sp, #4]
	strb r0, [r1]
	ldrb r0, [r5]
	ldr r2, _081232EC  @ =gUnknown_03002FFF
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r1, [sp, #8]
	strb r0, [r1]
	ldrb r0, [r5]
	ldr r2, _081232F4  @ =gUnknown_03003013
	add r0, r0, r2
	ldrb r0, [r0]
	mov r1, r10
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, r8
	ldrb r0, [r0]
	mov r2, r9
	strb r0, [r2]
_08123260:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	blt _0812326C
	b _08123126
_0812326C:
	mov r6, #11
	ldr r1, _081232D0  @ =gUnknown_020068EC
_08123270:
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #255
	bne _08123292
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _08123270
	ldr r0, _081232A8  @ =gRam
	ldr r1, _081232C4  @ =gUnknown_020068F8
	ldr r2, _08123320  @ =0x00000E15
	add r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
_08123292:
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
_081232A4:
	.4byte gUnknown_02006936
_081232A8:
	.4byte gRam
_081232AC:
	.4byte 0x00000A3C
_081232B0:
	.4byte 0x0000FFF3
_081232B4:
	.4byte 0x00001827
_081232B8:
	.4byte 0x00001832
_081232BC:
	.4byte 0x00000E1F
_081232C0:
	.4byte 0x00001844
_081232C4:
	.4byte gUnknown_020068F8
_081232C8:
	.4byte gUnknown_020068F9
_081232CC:
	.4byte gUnknown_03003E74
_081232D0:
	.4byte gUnknown_020068EC
_081232D4:
	.4byte gUnknown_020068E0
_081232D8:
	.4byte 0x00000E29
_081232DC:
	.4byte gUnknown_03002FF5
_081232E0:
	.4byte gUnknown_020068A4
_081232E4:
	.4byte gUnknown_03003009
_081232E8:
	.4byte gUnknown_020068B0
_081232EC:
	.4byte gUnknown_03002FFF
_081232F0:
	.4byte gUnknown_020068BC
_081232F4:
	.4byte gUnknown_03003013
_081232F8:
	.4byte gUnknown_020068C8
_081232FC:
	.4byte 0x00000A92
_08123300:
	.4byte gUnknown_020068D4
_08123304:
	.4byte 0x00000DED
_08123308:
	.4byte gUnknown_02006880
_0812330C:
	.4byte 0x00000DF7
_08123310:
	.4byte gUnknown_0200688C
_08123314:
	.4byte gUnknown_02006898
_08123318:
	.4byte 0x00000A88
_0812331C:
	.4byte 0x00001734
_08123320:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08123080

