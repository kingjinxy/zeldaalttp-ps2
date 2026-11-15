	THUMB_FUNC_START sub_08070BB0
sub_08070BB0: @ 0x08070BB0
	push {lr}
	ldr r1, _08070BD0  @ =gRam
	ldr r0, _08070BD4  @ =0x00000B48
	add r2, r1, r0
	mov r0, #1
	strh r0, [r2]
	ldr r0, _08070BD8  @ =0x00000504
	add r1, r1, r0
	mov r0, #70
	bl sub_0812A324
	bl sub_0806FE5C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070BD0:
	.4byte gRam
_08070BD4:
	.4byte 0x00000B48
_08070BD8:
	.4byte 0x00000504
	THUMB_FUNC_END sub_08070BB0

