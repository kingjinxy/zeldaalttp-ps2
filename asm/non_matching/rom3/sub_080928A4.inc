	THUMB_FUNC_START sub_080928A4
sub_080928A4: @ 0x080928A4
	push {r4,r5,lr}
	ldr r4, _080928D0  @ =gRam
	mov r5, #252
	lsl r5, r5, #1
	add r3, r5, #0
	and r1, r1, r3
	lsl r1, r1, #3
	ldr r3, _080928D4  @ =0x0000096C
	add r4, r4, r3
	add r3, r5, #0
	and r3, r3, r0
	asr r3, r3, #3
	orr r1, r1, r3
	strh r1, [r4]
	cmp r2, #0
	bne _080928DC
	mov r5, #0
	ldrsh r0, [r4, r5]
	ldr r1, _080928D8  @ =gUnknown_0200CBA0
	add r0, r0, r1
	b _080928E4
	.byte 0x00
	.byte 0x00
_080928D0:
	.4byte gRam
_080928D4:
	.4byte 0x0000096C
_080928D8:
	.4byte gUnknown_0200CBA0
_080928DC:
	mov r3, #0
	ldrsh r0, [r4, r3]
	ldr r5, _080928EC  @ =gUnknown_0200DBA0
	add r0, r0, r5
_080928E4:
	ldrb r0, [r0]
	pop {r4,r5}
	pop {r1}
	bx r1
_080928EC:
	.4byte gUnknown_0200DBA0
	THUMB_FUNC_END sub_080928A4

