	THUMB_FUNC_START sub_080733D8
sub_080733D8: @ 0x080733D8
	push {r4,lr}
	ldr r1, _08073408  @ =gRam
	ldr r0, _0807340C  @ =0x00000CFC
	add r4, r1, r0
	ldrh r0, [r4]
	sub r0, r0, #1
	ldr r3, _08073410  @ =0x00000CF8
	add r2, r1, r3
	mov r3, #0
	strh r0, [r2]
	strh r3, [r4]
	ldr r0, _08073414  @ =0x00000CFA
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	ldr r3, _08073418  @ =0x000009E8
	add r1, r1, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08073408:
	.4byte gRam
_0807340C:
	.4byte 0x00000CFC
_08073410:
	.4byte 0x00000CF8
_08073414:
	.4byte 0x00000CFA
_08073418:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080733D8

