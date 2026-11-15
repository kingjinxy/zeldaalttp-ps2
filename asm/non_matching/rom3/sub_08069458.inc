	THUMB_FUNC_START sub_08069458
sub_08069458: @ 0x08069458
	push {lr}
	ldr r1, _08069474  @ =gUnknown_0814C824
	ldr r0, _08069478  @ =gRam
	ldr r2, _0806947C  @ =0x000009A4
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069474:
	.4byte gUnknown_0814C824
_08069478:
	.4byte gRam
_0806947C:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_08069458

