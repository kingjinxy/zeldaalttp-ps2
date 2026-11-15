	THUMB_FUNC_START sub_08074858
sub_08074858: @ 0x08074858
	push {lr}
	mov r0, #77
	mov r1, #0
	bl sub_0812A324
	ldr r1, _08074880  @ =gRam
	ldr r2, _08074884  @ =0x00000A4C
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	ldr r3, _08074888  @ =0x00000CF8
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _0807488C  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
_08074880:
	.4byte gRam
_08074884:
	.4byte 0x00000A4C
_08074888:
	.4byte 0x00000CF8
_0807488C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074858

