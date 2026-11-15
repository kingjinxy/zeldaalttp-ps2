	THUMB_FUNC_START sub_080DEBF4
sub_080DEBF4: @ 0x080DEBF4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080DEC34  @ =gRam
	ldr r0, _080DEC38  @ =0x0000096C
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	ldr r1, _080DEC3C  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080DEC40  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r0, _080DEC44  @ =gUnknown_08176474
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DEC34:
	.4byte gRam
_080DEC38:
	.4byte 0x0000096C
_080DEC3C:
	.4byte 0x00001052
_080DEC40:
	.4byte 0x00000F92
_080DEC44:
	.4byte gUnknown_08176474
	THUMB_FUNC_END sub_080DEBF4

