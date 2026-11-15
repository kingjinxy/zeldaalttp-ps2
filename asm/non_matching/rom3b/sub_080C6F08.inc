	THUMB_FUNC_START sub_080C6F08
sub_080C6F08: @ 0x080C6F08
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r1, r1, #27
	ldr r3, _080C6F3C  @ =gRam
	ldr r4, _080C6F40  @ =0x00001611
	add r3, r3, r4
	add r2, r2, r3
	ldrb r3, [r2]
	lsr r1, r1, #24
	orr r1, r1, r3
	add r3, r3, #1
	mov r4, #7
	and r3, r3, r4
	strb r3, [r2]
	ldr r2, _080C6F44  @ =gUnknown_0817217A
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_080C66A4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C6F3C:
	.4byte gRam
_080C6F40:
	.4byte 0x00001611
_080C6F44:
	.4byte gUnknown_0817217A
	THUMB_FUNC_END sub_080C6F08

