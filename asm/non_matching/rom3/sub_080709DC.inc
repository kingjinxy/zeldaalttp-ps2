	THUMB_FUNC_START sub_080709DC
sub_080709DC: @ 0x080709DC
	push {r4,lr}
	bl sub_0806F1E8
	bl sub_0807FF10
	bl sub_08075AE8
	bl sub_0812F150
	bl sub_08092874
	ldr r4, _08070A14  @ =gRam
	ldr r1, _08070A18  @ =0x000009DA
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _08070A1C  @ =0x00000B36
	add r0, r4, r2
	strh r1, [r0]
	bl sub_08114600
	ldr r0, _08070A20  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_08070A14:
	.4byte gRam
_08070A18:
	.4byte 0x000009DA
_08070A1C:
	.4byte 0x00000B36
_08070A20:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080709DC

