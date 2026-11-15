	THUMB_FUNC_START sub_08070FDC
sub_08070FDC: @ 0x08070FDC
	push {lr}
	bl sub_08130FF8
	ldr r0, _08070FF8  @ =gRam
	ldr r1, _08070FFC  @ =0x00000CF8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08070FF2
	bl sub_08130FF8
_08070FF2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070FF8:
	.4byte gRam
_08070FFC:
	.4byte 0x00000CF8
	THUMB_FUNC_END sub_08070FDC

