	THUMB_FUNC_START sub_080ABA78
sub_080ABA78: @ 0x080ABA78
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080ABAC0  @ =gRam
	ldr r2, _080ABAC4  @ =0x00000DC5
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080ABAC8  @ =0x00000DD9
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #1
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080ABACC  @ =0x00000DCF
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #3
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080ABAD0  @ =0x00000DE3
	add r1, r3, r2
	add r0, r0, r1
	add r4, r4, #1
	add r3, r3, r4
	ldrb r1, [r3]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080ABAC0:
	.4byte gRam
_080ABAC4:
	.4byte 0x00000DC5
_080ABAC8:
	.4byte 0x00000DD9
_080ABACC:
	.4byte 0x00000DCF
_080ABAD0:
	.4byte 0x00000DE3
	THUMB_FUNC_END sub_080ABA78

