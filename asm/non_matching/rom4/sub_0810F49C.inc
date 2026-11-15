	THUMB_FUNC_START sub_0810F49C
sub_0810F49C: @ 0x0810F49C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810F4D4  @ =gRam
	ldr r1, _0810F4D8  @ =0x00000B6C
	add r0, r5, r1
	ldrb r0, [r0]
	sub r0, r0, #1
	cmp r0, #1
	ble _0810F4CC
	ldr r1, _0810F4DC  @ =0x00000163
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810F4CC
	ldr r0, _0810F4E0  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810F4CC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F4D4:
	.4byte gRam
_0810F4D8:
	.4byte 0x00000B6C
_0810F4DC:
	.4byte 0x00000163
_0810F4E0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F49C

