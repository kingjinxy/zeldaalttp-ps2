	THUMB_FUNC_START sub_080F50D4
sub_080F50D4: @ 0x080F50D4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F5100  @ =gRam
	ldr r3, _080F5104  @ =0x00001122
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #20
	strb r3, [r1]
	ldr r1, _080F5108  @ =0x00000F92
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsl r1, r1, #5
	ldr r2, _080F510C  @ =gUnknown_081796F8
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5100:
	.4byte gRam
_080F5104:
	.4byte 0x00001122
_080F5108:
	.4byte 0x00000F92
_080F510C:
	.4byte gUnknown_081796F8
	THUMB_FUNC_END sub_080F50D4

