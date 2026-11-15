	THUMB_FUNC_START sub_08133620
sub_08133620: @ 0x08133620
	push {lr}
	bl sub_08131E90
	ldr r0, _0813363C  @ =gRam
	ldr r1, _08133640  @ =0x00000CF8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08133636
	bl sub_08131E90
_08133636:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813363C:
	.4byte gRam
_08133640:
	.4byte 0x00000CF8
	THUMB_FUNC_END sub_08133620

