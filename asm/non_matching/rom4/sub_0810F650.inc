	THUMB_FUNC_START sub_0810F650
sub_0810F650: @ 0x0810F650
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r8, r0
	add r6, r1, #0
	add r4, r2, #0
	add r5, r3, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	lsl r6, r6, #24
	lsr r6, r6, #24
	lsl r4, r4, #16
	lsr r4, r4, #16
	lsl r5, r5, #16
	lsr r5, r5, #16
	str r5, [sp]
	mov r0, #233
	mov r1, r8
	bl sub_080CA538
	ldr r1, _0810F720  @ =gRam
	mov r9, r1
	ldr r1, _0810F724  @ =0x00001052
	add r1, r1, r9
	add r1, r0, r1
	strb r6, [r1]
	ldr r2, _0810F728  @ =0x00000EE2
	add r2, r2, r9
	mov r10, r2
	mov r1, r8
	add r1, r1, r10
	ldrb r3, [r1]
	ldr r5, _0810F72C  @ =0x00000F02
	add r5, r5, r9
	mov r12, r5
	mov r1, r8
	add r1, r1, r12
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r3, r3, r1
	ldr r6, _0810F730  @ =0x00000ED2
	add r6, r6, r9
	mov r2, r8
	add r1, r2, r6
	ldrb r2, [r1]
	ldr r7, _0810F734  @ =0x00000EF2
	add r7, r7, r9
	mov r5, r8
	add r1, r5, r7
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r2, r2, r1
	lsl r3, r3, #16
	asr r3, r3, #16
	lsl r4, r4, #16
	asr r4, r4, #16
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	lsl r2, r2, #16
	asr r2, r2, #16
	ldr r1, [sp]
	lsl r5, r1, #16
	asr r5, r5, #16
	add r2, r2, r5
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r10, r10, r0
	mov r5, r10
	strb r3, [r5]
	add r12, r12, r0
	lsr r3, r3, #8
	mov r1, r12
	strb r3, [r1]
	add r6, r0, r6
	strb r2, [r6]
	add r0, r0, r7
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r0, _0810F738  @ =0x00001132
	add r0, r0, r9
	add r0, r0, r8
	mov r1, #3
	strb r1, [r0]
	ldr r2, _0810F73C  @ =0x00000E75
	add r9, r9, r2
	add r8, r8, r9
	mov r5, r8
	ldrb r1, [r5]
	mov r0, #32
	orr r0, r0, r1
	strb r0, [r5]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810F720:
	.4byte gRam
_0810F724:
	.4byte 0x00001052
_0810F728:
	.4byte 0x00000EE2
_0810F72C:
	.4byte 0x00000F02
_0810F730:
	.4byte 0x00000ED2
_0810F734:
	.4byte 0x00000EF2
_0810F738:
	.4byte 0x00001132
_0810F73C:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_0810F650

