	THUMB_FUNC_START sub_080B175C
sub_080B175C: @ 0x080B175C
	push {lr}
	ldr r0, _080B1790  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B178A
	ldr r0, _080B1794  @ =gRam
	ldr r2, _080B1798  @ =0x00001718
	add r1, r0, r2
	mov r3, #0
	strb r3, [r1]
	ldr r2, _080B179C  @ =0x0000188C
	add r1, r0, r2
	mov r2, #0
	strh r3, [r1]
	ldr r3, _080B17A0  @ =0x0000188E
	add r1, r0, r3
	strb r2, [r1]
	ldr r3, _080B17A4  @ =0x00001711
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _080B17A8  @ =0x0000176C
	add r0, r0, r1
	strb r2, [r0]
_080B178A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1790:
	.4byte gMoonPearl
_080B1794:
	.4byte gRam
_080B1798:
	.4byte 0x00001718
_080B179C:
	.4byte 0x0000188C
_080B17A0:
	.4byte 0x0000188E
_080B17A4:
	.4byte 0x00001711
_080B17A8:
	.4byte 0x0000176C
	THUMB_FUNC_END sub_080B175C

