	THUMB_FUNC_START sub_080DFA10
sub_080DFA10: @ 0x080DFA10
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080DFAB0  @ =gRam
	ldr r1, _080DFAB4  @ =0x00000FC2
	add r0, r5, r1
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080DFAA8
	mov r0, #114
	add r1, r6, #0
	bl sub_080CA538
	add r4, r0, #0
	ldr r2, _080DFAB8  @ =0x00000A3C
	add r1, r5, r2
	mov r2, #0
	mov r0, #20
	strh r0, [r1]
	ldr r1, _080DFABC  @ =0x00000A48
	add r0, r5, r1
	strb r2, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldr r2, _080DFAC0  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFAC4  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DFAC8  @ =0x00000961
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DFACC  @ =0x00000964
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #70
	strh r0, [r1]
	ldr r2, _080DFAD0  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFAD4  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DFAD8  @ =0x00000965
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFADC  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080DFAE0  @ =0x00000F52
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #255
	strb r0, [r7]
	bl sub_081335FC
	bl sub_08131D74
	ldr r1, _080DFAE4  @ =0x00001062
	add r0, r5, r1
	add r0, r6, r0
	strb r4, [r0]
_080DFAA8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DFAB0:
	.4byte gRam
_080DFAB4:
	.4byte 0x00000FC2
_080DFAB8:
	.4byte 0x00000A3C
_080DFABC:
	.4byte 0x00000A48
_080DFAC0:
	.4byte 0x00000EE2
_080DFAC4:
	.4byte 0x00000F02
_080DFAC8:
	.4byte 0x00000961
_080DFACC:
	.4byte 0x00000964
_080DFAD0:
	.4byte 0x00000ED2
_080DFAD4:
	.4byte 0x00000EF2
_080DFAD8:
	.4byte 0x00000965
_080DFADC:
	.4byte 0x00000F72
_080DFAE0:
	.4byte 0x00000F52
_080DFAE4:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080DFA10

