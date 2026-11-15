	THUMB_FUNC_START sub_080F55B8
sub_080F55B8: @ 0x080F55B8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r6, r5, #0
	add r0, r5, #0
	bl sub_080C6240
	bl sub_0809E3CC
	add r4, r0, #0
	cmp r4, #0
	bne _080F561E
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F5608
	ldr r2, _080F55FC  @ =gRam
	ldr r1, _080F5600  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080F561E
	ldr r1, _080F5604  @ =0x00001122
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #64
	eor r1, r1, r2
	strb r1, [r0]
	b _080F561E
_080F55FC:
	.4byte gRam
_080F5600:
	.4byte 0x00000996
_080F5604:
	.4byte 0x00001122
_080F5608:
	ldr r1, _080F5624  @ =gRam
	ldr r2, _080F5628  @ =0x00000FA2
	add r0, r1, r2
	add r0, r6, r0
	strb r4, [r0]
	ldr r0, _080F562C  @ =0x00001776
	add r1, r1, r0
	strb r4, [r1]
	mov r0, #41
	bl sub_080A1588
_080F561E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F5624:
	.4byte gRam
_080F5628:
	.4byte 0x00000FA2
_080F562C:
	.4byte 0x00001776
	THUMB_FUNC_END sub_080F55B8

