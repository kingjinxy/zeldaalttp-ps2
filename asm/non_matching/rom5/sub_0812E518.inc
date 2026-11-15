	THUMB_FUNC_START sub_0812E518
sub_0812E518: @ 0x0812E518
	push {lr}
	ldr r1, _0812E540  @ =gRam
	ldr r2, _0812E544  @ =0x00001643
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812E53C
	ldr r2, _0812E548  @ =0x00000A0C
	add r0, r1, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #16
	bne _0812E53C
	ldr r0, _0812E54C  @ =0x00000A06
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0812E53C:
	pop {r0}
	bx r0
_0812E540:
	.4byte gRam
_0812E544:
	.4byte 0x00001643
_0812E548:
	.4byte 0x00000A0C
_0812E54C:
	.4byte 0x00000A06
	THUMB_FUNC_END sub_0812E518

