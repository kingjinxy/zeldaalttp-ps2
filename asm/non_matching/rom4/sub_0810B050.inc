	THUMB_FUNC_START sub_0810B050
sub_0810B050: @ 0x0810B050
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _0810B074  @ =gRam
	ldr r1, _0810B078  @ =0x00000F82
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810B07C
	sub r1, r1, #16
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #48
	strb r1, [r0]
	b _0810B0B0
	.byte 0x00
	.byte 0x00
_0810B074:
	.4byte gRam
_0810B078:
	.4byte 0x00000F82
_0810B07C:
	ldr r0, _0810B0B8  @ =0x00000F72
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B09A
	ldr r0, _0810B0BC  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810B09A:
	ldr r1, _0810B0C0  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0810B0B0
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
_0810B0B0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B0B8:
	.4byte 0x00000F72
_0810B0BC:
	.4byte 0x00000F52
_0810B0C0:
	.4byte 0x00000996
	THUMB_FUNC_END sub_0810B050

