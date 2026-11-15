	THUMB_FUNC_START sub_080D2A34
sub_080D2A34: @ 0x080D2A34
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D2A5C  @ =gRam
	ldr r2, _080D2A60  @ =0x0000096C
	add r3, r1, r2
	mov r2, #2
	strb r2, [r3]
	ldr r2, _080D2A64  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _080D2A68  @ =gUnknown_08174CEC
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2A5C:
	.4byte gRam
_080D2A60:
	.4byte 0x0000096C
_080D2A64:
	.4byte 0x00000F92
_080D2A68:
	.4byte gUnknown_08174CEC
	THUMB_FUNC_END sub_080D2A34

