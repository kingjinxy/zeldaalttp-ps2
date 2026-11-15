	THUMB_FUNC_START sub_0810B5B4
sub_0810B5B4: @ 0x0810B5B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0810B658  @ =gRam
	ldr r1, _0810B65C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0810B692
	mov r1, #29
	ldr r3, _0810B660  @ =0x000011D2
	add r6, r2, r3
	mov r5, #1
	ldr r0, _0810B664  @ =0x000015F8
	add r7, r2, r0
_0810B5DA:
	lsl r0, r1, #24
	asr r3, r0, #24
	add r1, r3, r6
	ldrb r0, [r1]
	cmp r0, #0
	bne _0810B688
	strb r5, [r1]
	strb r5, [r7]
	ldr r5, _0810B668  @ =0x0000122C
	add r1, r2, r5
	add r1, r3, r1
	ldr r5, _0810B66C  @ =0x00000EE2
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810B670  @ =0x00001268
	add r1, r2, r0
	add r1, r3, r1
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810B674  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r5, r5, #16
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r5, _0810B678  @ =0x0000120E
	add r0, r2, r5
	add r0, r3, r0
	strb r1, [r0]
	add r5, r5, #60
	add r0, r2, r5
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _0810B67C  @ =0x000012FE
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #32
	strb r1, [r0]
	add r5, r5, #210
	add r0, r2, r5
	add r0, r3, r0
	strb r4, [r0]
	ldr r0, _0810B680  @ =0x00001358
	add r1, r2, r0
	add r1, r3, r1
	ldr r3, _0810B684  @ =0x000010F2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _0810B692
	.byte 0x00
	.byte 0x00
_0810B658:
	.4byte gRam
_0810B65C:
	.4byte 0x00000996
_0810B660:
	.4byte 0x000011D2
_0810B664:
	.4byte 0x000015F8
_0810B668:
	.4byte 0x0000122C
_0810B66C:
	.4byte 0x00000EE2
_0810B670:
	.4byte 0x00001268
_0810B674:
	.4byte 0x00000ED2
_0810B678:
	.4byte 0x0000120E
_0810B67C:
	.4byte 0x000012FE
_0810B680:
	.4byte 0x00001358
_0810B684:
	.4byte 0x000010F2
_0810B688:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0810B5DA
_0810B692:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810B5B4

