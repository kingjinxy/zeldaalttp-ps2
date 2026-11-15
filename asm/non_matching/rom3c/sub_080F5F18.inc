	THUMB_FUNC_START sub_080F5F18
sub_080F5F18: @ 0x080F5F18
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080F5F48  @ =gRam
	ldr r2, _080F5F4C  @ =0x00000F92
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _080F5F44
	ldr r0, _080F5F50  @ =0x0000096C
	add r1, r1, r0
	mov r0, #4
	strh r0, [r1]
	lsl r1, r2, #5
	ldr r0, _080F5F54  @ =gUnknown_081798C4
	add r1, r1, r0
	add r0, r3, #0
	bl sub_080C94D0
_080F5F44:
	pop {r0}
	bx r0
_080F5F48:
	.4byte gRam
_080F5F4C:
	.4byte 0x00000F92
_080F5F50:
	.4byte 0x0000096C
_080F5F54:
	.4byte gUnknown_081798C4
	THUMB_FUNC_END sub_080F5F18

