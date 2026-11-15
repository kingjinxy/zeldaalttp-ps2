	THUMB_FUNC_START sub_080F6D94
sub_080F6D94: @ 0x080F6D94
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F6EC8  @ =gRam
	ldr r0, _080F6ECC  @ =0x00000DA6
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #3
	bls _080F6DB2
	b _080F6EBA
_080F6DB2:
	mov r0, #97
	add r1, r4, #0
	bl sub_080CA538
	add r7, r0, #0
	cmp r7, #0
	blt _080F6EBA
	add r0, r4, #0
	mov r1, #89
	bl sub_080CF140
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldr r4, _080F6ED0  @ =0x000015E8
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r2, #0
	ldrsh r1, [r1, r2]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080F6ED4  @ =0x00000964
	add r3, r6, r4
	ldr r2, _080F6ED8  @ =0x000015E9
	add r0, r6, r2
	mov r2, #0
	ldrsb r2, [r0, r2]
	mov r4, #0
	ldrsh r0, [r3, r4]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080F6EDC  @ =0x00000EE2
	add r3, r6, r2
	add r3, r7, r3
	strb r1, [r3]
	ldr r4, _080F6EE0  @ =gUnknown_03003132
	add r4, r4, r7
	mov r9, r4
	lsr r1, r1, #8
	strb r1, [r4]
	ldr r1, _080F6EE4  @ =0x00000ED2
	add r5, r6, r1
	add r5, r7, r5
	strb r0, [r5]
	add r2, r2, #16
	add r4, r6, r2
	add r4, r7, r4
	lsr r0, r0, #8
	strb r0, [r4]
	lsl r0, r7, #24
	lsr r0, r0, #24
	mov r1, #32
	str r3, [sp]
	bl sub_080C35FC
	ldr r1, _080F6EE8  @ =0x00001012
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #63
	strb r1, [r0]
	ldr r2, _080F6EEC  @ =0x00001132
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #84
	strb r1, [r0]
	ldr r1, _080F6EF0  @ =0x00000F82
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080F6EF4  @ =0x00000E75
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #72
	strb r1, [r0]
	ldr r1, _080F6EF8  @ =0x00001122
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #3
	strb r1, [r0]
	add r2, r2, #48
	add r0, r6, r2
	add r0, r7, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080F6EFC  @ =0x00000FD2
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #12
	strb r1, [r0]
	add r2, r2, #237
	add r1, r6, r2
	add r1, r7, r1
	mov r2, r8
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _080F6F00  @ =gUnknown_08179B8C
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r2, [r0]
	mov r7, #31
	ldr r3, [sp]
	mov r6, r9
_080F6E8E:
	ldr r0, _080F6F04  @ =gUnknown_0200EE18
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080F6F08  @ =gUnknown_0200EE98
	add r1, r2, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r0, _080F6F0C  @ =gUnknown_0200EF18
	add r1, r2, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r0, _080F6F10  @ =gUnknown_0200EF98
	add r1, r2, r0
	ldrb r0, [r4]
	strb r0, [r1]
	sub r7, r7, #1
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r7, #0
	bge _080F6E8E
_080F6EBA:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F6EC8:
	.4byte gRam
_080F6ECC:
	.4byte 0x00000DA6
_080F6ED0:
	.4byte 0x000015E8
_080F6ED4:
	.4byte 0x00000964
_080F6ED8:
	.4byte 0x000015E9
_080F6EDC:
	.4byte 0x00000EE2
_080F6EE0:
	.4byte gUnknown_03003132
_080F6EE4:
	.4byte 0x00000ED2
_080F6EE8:
	.4byte 0x00001012
_080F6EEC:
	.4byte 0x00001132
_080F6EF0:
	.4byte 0x00000F82
_080F6EF4:
	.4byte 0x00000E75
_080F6EF8:
	.4byte 0x00001122
_080F6EFC:
	.4byte 0x00000FD2
_080F6F00:
	.4byte gUnknown_08179B8C
_080F6F04:
	.4byte gUnknown_0200EE18
_080F6F08:
	.4byte gUnknown_0200EE98
_080F6F0C:
	.4byte gUnknown_0200EF18
_080F6F10:
	.4byte gUnknown_0200EF98
	THUMB_FUNC_END sub_080F6D94

