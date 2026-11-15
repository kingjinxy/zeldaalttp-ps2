	THUMB_FUNC_START sub_080DC43C
sub_080DC43C: @ 0x080DC43C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DC468  @ =gRam
	ldr r2, _080DC46C  @ =0x0000096C
	add r3, r1, r2
	mov r2, #3
	strh r2, [r3]
	ldr r2, _080DC470  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r2, _080DC474  @ =gUnknown_081760A0
	add r1, r1, r2
	bl sub_080CA918
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC468:
	.4byte gRam
_080DC46C:
	.4byte 0x0000096C
_080DC470:
	.4byte 0x00000F92
_080DC474:
	.4byte gUnknown_081760A0
	THUMB_FUNC_END sub_080DC43C

