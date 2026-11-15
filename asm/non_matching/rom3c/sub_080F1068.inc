	THUMB_FUNC_START sub_080F1068
sub_080F1068: @ 0x080F1068
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F1090  @ =gRam
	ldr r2, _080F1094  @ =0x0000096C
	add r3, r1, r2
	mov r2, #2
	strh r2, [r3]
	ldr r2, _080F1098  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _080F109C  @ =gUnknown_08178E2C
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1090:
	.4byte gRam
_080F1094:
	.4byte 0x0000096C
_080F1098:
	.4byte 0x00000F92
_080F109C:
	.4byte gUnknown_08178E2C
	THUMB_FUNC_END sub_080F1068

