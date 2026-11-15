	THUMB_FUNC_START sub_080E5F00
sub_080E5F00: @ 0x080E5F00
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E5F24  @ =gRam
	ldr r2, _080E5F28  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r2, _080E5F2C  @ =gUnknown_081775D0
	add r1, r1, r2
	mov r2, #3
	bl sub_080C9480
	pop {r0}
	bx r0
_080E5F24:
	.4byte gRam
_080E5F28:
	.4byte 0x00000F92
_080E5F2C:
	.4byte gUnknown_081775D0
	THUMB_FUNC_END sub_080E5F00

