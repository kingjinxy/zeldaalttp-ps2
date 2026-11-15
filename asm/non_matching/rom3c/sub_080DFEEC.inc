	THUMB_FUNC_START sub_080DFEEC
sub_080DFEEC: @ 0x080DFEEC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080DFF90  @ =gRam
	ldr r1, _080DFF94  @ =0x00000FC2
	add r0, r5, r1
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080DFF88
	mov r0, #114
	add r1, r6, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DFF88
	ldr r2, _080DFF98  @ =0x00000A3C
	add r1, r5, r2
	mov r2, #0
	mov r0, #20
	strh r0, [r1]
	ldr r1, _080DFF9C  @ =0x00000A48
	add r0, r5, r1
	strb r2, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldr r2, _080DFFA0  @ =0x00000EE2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFFA4  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DFFA8  @ =0x00000961
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DFFAC  @ =0x00000964
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #70
	strh r0, [r1]
	ldr r2, _080DFFB0  @ =0x00000ED2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFFB4  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DFFB8  @ =0x00000965
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DFFBC  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080DFFC0  @ =0x00000F52
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #255
	strb r0, [r7]
	bl sub_081335FC
	bl sub_08131D74
	ldr r1, _080DFFC4  @ =0x00001062
	add r0, r5, r1
	add r0, r6, r0
	strb r4, [r0]
_080DFF88:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DFF90:
	.4byte gRam
_080DFF94:
	.4byte 0x00000FC2
_080DFF98:
	.4byte 0x00000A3C
_080DFF9C:
	.4byte 0x00000A48
_080DFFA0:
	.4byte 0x00000EE2
_080DFFA4:
	.4byte 0x00000F02
_080DFFA8:
	.4byte 0x00000961
_080DFFAC:
	.4byte 0x00000964
_080DFFB0:
	.4byte 0x00000ED2
_080DFFB4:
	.4byte 0x00000EF2
_080DFFB8:
	.4byte 0x00000965
_080DFFBC:
	.4byte 0x00000F72
_080DFFC0:
	.4byte 0x00000F52
_080DFFC4:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080DFEEC

