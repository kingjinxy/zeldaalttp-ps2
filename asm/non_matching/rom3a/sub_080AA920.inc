	THUMB_FUNC_START sub_080AA920
sub_080AA920: @ 0x080AA920
	push {r4,lr}
	ldr r4, _080AA950  @ =gRam
	ldr r0, _080AA954  @ =0x00000A4C
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_080AA8BC
	ldr r1, _080AA958  @ =gUnknown_0816B62C
	ldr r2, _080AA95C  @ =0x00000A4E
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _080AA960  @ =0x0000178C
	add r4, r4, r1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA950:
	.4byte gRam
_080AA954:
	.4byte 0x00000A4C
_080AA958:
	.4byte gUnknown_0816B62C
_080AA95C:
	.4byte 0x00000A4E
_080AA960:
	.4byte 0x0000178C
	THUMB_FUNC_END sub_080AA920

