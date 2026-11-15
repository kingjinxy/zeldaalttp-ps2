	THUMB_FUNC_START sub_080815E4
sub_080815E4: @ 0x080815E4
	push {r4-r6,lr}
	add r6, r0, #0
	ldr r5, _08081638  @ =gRam
	ldr r0, _0808163C  @ =0x00000AD2
	add r4, r5, r0
	strh r6, [r4]
	lsl r0, r6, #1
	ldr r2, _08081640  @ =0x0000199C
	add r1, r5, r2
	add r0, r0, r1
	ldrh r0, [r0]
	bl sub_080928F0
	ldrh r0, [r4]
	bl sub_08083AE4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldrh r0, [r4]
	bl sub_08083AE4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldrh r0, [r4]
	bl sub_08083AE4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldrh r0, [r4]
	bl sub_08083AE4
	ldr r0, _08081644  @ =0x0000096C
	add r5, r5, r0
	ldr r0, _08081648  @ =0x00005555
	strh r0, [r5]
	strh r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_08081638:
	.4byte gRam
_0808163C:
	.4byte 0x00000AD2
_08081640:
	.4byte 0x0000199C
_08081644:
	.4byte 0x0000096C
_08081648:
	.4byte 0x00005555
	THUMB_FUNC_END sub_080815E4

