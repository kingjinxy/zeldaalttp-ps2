	THUMB_FUNC_START sub_08071298
sub_08071298: @ 0x08071298
	push {r4,lr}
	bl sub_08130FF8
	ldr r4, _080712C0  @ =gRam
	ldr r1, _080712C4  @ =0x000009DA
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080712C8  @ =0x00000B36
	add r0, r4, r2
	strh r1, [r0]
	bl sub_080CB278
	ldr r0, _080712CC  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080712C0:
	.4byte gRam
_080712C4:
	.4byte 0x000009DA
_080712C8:
	.4byte 0x00000B36
_080712CC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071298

