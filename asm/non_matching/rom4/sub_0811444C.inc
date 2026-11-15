	THUMB_FUNC_START sub_0811444C
sub_0811444C: @ 0x0811444C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _08114474  @ =0x000001AF
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _08114478  @ =gRam
	ldr r1, _0811447C  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114474:
	.4byte 0x000001AF
_08114478:
	.4byte gRam
_0811447C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0811444C

