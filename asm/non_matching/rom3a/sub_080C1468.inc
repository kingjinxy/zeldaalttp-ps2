	THUMB_FUNC_START sub_080C1468
sub_080C1468: @ 0x080C1468
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C14D8  @ =gRam
	ldr r2, _080C14DC  @ =0x00000DCF
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r4, _080C14E0  @ =0x00000DE3
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #8
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	strb r2, [r1]
	lsr r2, r2, #8
	add r4, r4, #16
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080C14E4  @ =0x00000DC5
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r4, _080C14E8  @ =0x00000DD9
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #8
	ldr r4, _080C14EC  @ =0x00000A92
	add r1, r3, r4
	add r0, r0, r1
	ldrb r0, [r0]
	sub r2, r2, r0
	ldr r1, _080C14F0  @ =0x00000961
	add r0, r3, r1
	strb r2, [r0]
	lsr r2, r2, #8
	ldr r4, _080C14F4  @ =0x00000971
	add r0, r3, r4
	strb r2, [r0]
	add r1, r1, #3
	add r0, r3, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080C14F8  @ =0x00000965
	add r3, r3, r2
	strb r1, [r3]
	pop {r4}
	pop {r0}
	bx r0
_080C14D8:
	.4byte gRam
_080C14DC:
	.4byte 0x00000DCF
_080C14E0:
	.4byte 0x00000DE3
_080C14E4:
	.4byte 0x00000DC5
_080C14E8:
	.4byte 0x00000DD9
_080C14EC:
	.4byte 0x00000A92
_080C14F0:
	.4byte 0x00000961
_080C14F4:
	.4byte 0x00000971
_080C14F8:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080C1468

